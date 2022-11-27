// Copyright (c) Younes Boubekeur, 2022

#ifndef POLYGLOTOOP_CPP_COURSE_H_
#define POLYGLOTOOP_CPP_COURSE_H_

#include <string>

class Course {
  std::string m_name;

 public:
  explicit Course(std::string name);
  std::string GetName() const;
  ~Course() = default;
};

#endif  // POLYGLOTOOP_CPP_COURSE_H_
