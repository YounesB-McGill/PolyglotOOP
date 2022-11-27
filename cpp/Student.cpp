// Copyright (c) Younes Boubekeur, 2020

#include "Student.h"
#include "Course.h"

Student::Student(std::string name, std::string email, std::vector<Course> courses):
    Person(name, email) {
  m_courses = courses;
}

std::vector<Course> Student::GetCourses() {
  return m_courses;
}
