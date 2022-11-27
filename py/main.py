#!/usr/bin/env python3

from course import Course
from school import School
from student import Student

def main():
    mcgill = School("McGill")
    comp251 = Course("Comp251")
    ecse211 = Course("ECSE211")
    ecse321 = Course("ECSE321")

    students = [
        Student("Alice", "alice.wonderland@mail.mcgill.ca", [comp251, ecse211, ecse321]),
        Student("Bob", "bob.builder@mail.mcgill.ca", [ecse211]),
        Student("Cathy", "cathy.smith@mail.mcgill.ca", [])
    ]

    for student in students:
        n_courses = len(student.courses)
        print(f"Hi, I'm {student.name} and I study at {mcgill}!")
        if n_courses == 0:
            print("I'm taking no courses.")
        elif n_courses == 1:
            print(f"I'm taking this course: {student.courses[0]}.")
        else:
            print("I'm taking these courses:")
            for course in student.courses:
                print(course)


if __name__ == "__main__":
    main()
