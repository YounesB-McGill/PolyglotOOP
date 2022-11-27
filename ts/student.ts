import { Course } from "./course";
import { Person } from "./person";

export class Student extends Person {
  courses: Course[];

  constructor(name: String, email: String, courses: Course[]) {
    super(name, email);
    this.courses = courses;
  }
}
