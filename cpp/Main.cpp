// Copyright (c) Younes Boubekeur, 2020-22

#include "Course.h"
#include "School.h"
#include "Student.h"

#include <iostream>


int main(int argc, char* argv[]) {
  auto mcgill = School("McGill");
  // could also declare a course like this: Course comp251 {"Comp251"};
  auto comp251 = Course("Comp251"), ecse211 = Course("ECSE211"), ecse321 = Course("ECSE321");
  auto students = {
    Student("Alice", "alice.wonderland@mail.mcgill.ca", {comp251, ecse211, ecse321}),
    Student("Bob", "bob.builder@mail.mcgill.ca", {ecse211}),
    Student("Cathy", "cathy.smith@mail.mcgill.ca", {}),
  };

  for (auto student : students) {
    auto nCourses = student.GetCourses().size();
    std::cout << "Hi, I'm " << student.GetName() << " and I study at " << mcgill.GetName() << "!" << std::endl;
    std::cout << "I'm taking ";
    if (nCourses == 0) {
      std::cout << "no courses." << std::endl;
    } else if (nCourses == 1) {
      std::cout << "this course: " << student.GetCourses().at(0).GetName() << std::endl;
    } else {
      std::cout << nCourses << " courses:" << std::endl;
      for (auto course : student.GetCourses()) {
        std::cout << course.GetName() << std::endl;
      }
    }
  }

  return 0;
}
