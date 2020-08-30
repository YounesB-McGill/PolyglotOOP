// Copyright (c) Younes Boubekeur, 2020

#include "Person.h"

Person::Person(std::string name, std::string email) {
  m_name = name;
  m_email = email;
}

std::string Person::GetName() {
  return m_name;
}

std::string Person::GetEmail() {
  return m_email;
}
