// Copyright (c) Younes Boubekeur, 2020

#ifndef POLYGLOTOOP_CPP_STUDENT_H_
#define POLYGLOTOOP_CPP_STUDENT_H_

#include "Person.h"
#include <string>
#include <vector>

class Student: public Person {
  std::vector<std::string> m_courses;

 public:
  Student(std::string name, std::string email, std::vector<std::string> courses);
  std::vector<std::string> GetCourses();
};

#endif  // POLYGLOTOOP_CPP_STUDENT_H_
