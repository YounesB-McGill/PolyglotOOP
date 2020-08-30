// Copyright (c) Younes Boubekeur, 2020

#include "School.h"

School::School(std::string name) {
  m_name = name;
}

std::string School::GetName() {
  return m_name;
}
