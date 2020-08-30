// Copyright (c) Younes Boubekeur, 2020

#ifndef POLYGLOTOOP_CPP_PERSON_H_
#define POLYGLOTOOP_CPP_PERSON_H_

#include <string>

class Person {
  std::string m_name;
  std::string m_email;

 public:
  Person(std::string name, std::string email);
  std::string GetName();
  std::string GetEmail();
  ~Person() = default;
};

#endif  // POLYGLOTOOP_CPP_PERSON_H_
