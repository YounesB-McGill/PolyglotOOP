// Copyright (c) Younes Boubekeur, 2020

#include "Student.h"

Student::Student(std::string name, std::string email, std::vector<std::string> courses):
    Person(name, email) {
  m_courses = courses;
}

std::vector<std::string> Student::GetCourses() {
  return m_courses;
}
