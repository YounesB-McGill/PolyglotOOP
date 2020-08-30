from __future__ import annotations
from person import Person

class Student(Person):
    def __init__(self, name: str, email: str, courses: list[str]):
        super().__init__(name, email)
        self.courses = courses
