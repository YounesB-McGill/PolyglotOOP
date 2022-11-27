#!/usr/bin/env node

class School {
  constructor(name) {
    this.name = name;
  }

  toString() {
    return this.name;
  }
}

class Course {
  constructor(name) {
    this.name = name;
  }

  toString() {
    return this.name;
  }
}

class Person {
  constructor(name, email) {
    this.name = name;
    this.email = email;
  }
}

class Student extends Person {
  constructor(name, email, courses) {
    super(name, email);
    this.courses = courses;
  }
}

function main() {
  const mcgill = new School("McGill");
  const comp251 = new Course("Comp251");
  const ecse211 = new Course("ECSE211");
  const ecse321 = new Course("ECSE321");
  const students = [
    new Student("Alice", "alice.wonderland@mail.mcgill.ca", [comp251, ecse211, ecse321]),
    new Student("Bob", "bob.builder@mail.mcgill.ca", [ecse211]),
    new Student("Cathy", "cathy.smith@mail.mcgill.ca", [])
  ];

  students.forEach(student => {
    const nCourses = student.courses.length;
    console.log(`Hi, I'm ${student.name} and I study at ${mcgill}!`);
    if (nCourses == 0) {
      console.log("I'm taking no courses.");
    } else if (nCourses == 1) {
      console.log(`I'm taking this course: ${student.courses[0]}.`);
    } else {
      console.log("I'm taking these courses:");
      student.courses.forEach(c => console.log(`${c}`));
    }
  });
}

main();
