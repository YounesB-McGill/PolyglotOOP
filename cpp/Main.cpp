// Copyright (c) Younes Boubekeur, 2020

#include "School.h"
#include "Student.h"

#include <iostream>


int main(int argc, char* argv[]) {
  auto mcgill = School("McGill");
  auto students = {
    Student("Alice", "alice.wonderland@mail.mcgill.ca", {"Comp251", "ECSE211", "ECSE321"}),
    Student("Bob", "bob.builder@mail.mcgill.ca", {"ECSE211"}),
    Student("Cathy", "cathy.smith@mail.mcgill.ca", {}),
  };

  for (auto student : students) {
    auto nCourses = student.GetCourses().size();
    std::cout << "Hi, I'm " << student.GetName() << " and I study at " << mcgill.GetName() << "!" << std::endl;
    std::cout << "I'm taking ";
    if (nCourses == 0) {
      std::cout << "no courses." << std::endl;
    } else if (nCourses == 1) {
      std::cout << "this course: " << student.GetCourses().at(0) << std::endl;
    } else {
      std::cout << nCourses << " courses:" << std::endl;
      for (auto course : student.GetCourses()) {
        std::cout << course << std::endl;
      }
    }
  }

  return 0;
}
