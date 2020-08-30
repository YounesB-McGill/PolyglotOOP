// Copyright (c) Younes Boubekeur, 2020

#ifndef POLYGLOTOOP_CPP_SCHOOL_H_
#define POLYGLOTOOP_CPP_SCHOOL_H_

#include <string>

class School {
  std::string m_name;

 public:
  explicit School(std::string name);
  std::string GetName();
  ~School() = default;
};

#endif  // POLYGLOTOOP_CPP_SCHOOL_H_
