from __future__ import annotations
from course import Course
from person import Person

class Student(Person):
    def __init__(self, name: str, email: str, courses: list[Course]):
        super().__init__(name, email)
        self.courses = courses
