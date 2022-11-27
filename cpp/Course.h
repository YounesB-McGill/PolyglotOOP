// Copyright (c) Younes Boubekeur, 2022

#ifndef POLYGLOTOOP_CPP_COURSE_H_
#define POLYGLOTOOP_CPP_COURSE_H_

#include <iostream>
#include <string>

class Course {
  std::string m_name;

 public:
  explicit Course(std::string name);
  std::string GetName() const;
  ~Course() = default;
  friend std::ostream& operator<<(std::ostream& stream, const Course& course) {
    return stream << course.m_name;
  }
};

#endif  // POLYGLOTOOP_CPP_COURSE_H_
