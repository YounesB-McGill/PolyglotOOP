import { Person } from "./person";

class Student extends Person {
  courses: String[];

  constructor(name: String, email: String, courses: String[]) {
    super(name, email);
    this.courses = courses;
  }
}

export { Student };
