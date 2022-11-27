// Copyright (c) Younes Boubekeur, 2020

#ifndef POLYGLOTOOP_CPP_SCHOOL_H_
#define POLYGLOTOOP_CPP_SCHOOL_H_

#include <iostream>
#include <string>

class School {
  std::string m_name;

 public:
  explicit School(std::string name);
  std::string GetName();
  ~School() = default;
  friend std::ostream& operator<<(std::ostream& stream, const School& school) {
    return stream << school.m_name;
  }
};

#endif  // POLYGLOTOOP_CPP_SCHOOL_H_
