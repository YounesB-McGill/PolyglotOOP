// Copyright (c) Younes Boubekeur, 2022

#include "Course.h"

Course::Course(std::string name) {
  m_name = name;
}

std::string Course::GetName() const {
  return m_name;
}
