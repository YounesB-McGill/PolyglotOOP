// Copyright (c) Younes Boubekeur, 2020

#ifndef POLYGLOTOOP_CPP_STUDENT_H_
#define POLYGLOTOOP_CPP_STUDENT_H_

#include "Person.h"
#include "Course.h"
#include <string>
#include <vector>

class Student: public Person {
  std::vector<Course> m_courses;

 public:
  Student(std::string name, std::string email, std::vector<Course> courses);
  std::vector<Course> GetCourses();
};

#endif  // POLYGLOTOOP_CPP_STUDENT_H_
