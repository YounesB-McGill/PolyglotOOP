#!/usr/bin/env python3

from school import School
from student import Student

def main():
    mcgill = School("McGill")  # (mcgill := School()).name = "McGill"

    students = [
        Student("Alice", "alice.wonderland@mail.mcgill.ca", ["Comp251", "ECSE211", "ECSE321"]),
        Student("Bob", "bob.builder@mail.mcgill.ca", ["ECSE211"]),
        Student("Cathy", "cathy.smith@mail.mcgill.ca", [])
    ]

    for student in students:
        nCourses = len(student.courses)
        print(f"Hi, I'm {student.name} and I study at {mcgill.name}!")
        if nCourses == 0:
            print("I'm taking no courses.")
        elif nCourses == 1:
            print(f"I'm taking this course: {student.courses[0]}.")
        else:
            print("I'm taking these courses:")
            for course in student.courses:
                print(course)



if __name__ == "__main__":
    main()
