import { School } from "./school";
import { Student } from "./student";

const mcgill = new School("McGill");

const students: Student[] = [
  new Student("Alice", "alice.wonderland@mail.mcgill.ca", ["Comp251", "ECSE211", "ECSE321"]),
  new Student("Bob", "bob.builder@mail.mcgill.ca", ["ECSE211"]),
  new Student("Cathy", "cathy.smith@mail.mcgill.ca", [])
];

students.forEach(student => {
  const nCourses = student.courses.length;
  console.log(`Hi, I'm ${student.name} and I study at ${mcgill.name}!`);
  if (nCourses == 0) {
    console.log("I'm taking no courses.");
  } else if (nCourses == 1) {
    console.log(`I'm taking this course: ${student.courses[0]}.`);
  } else {
    console.log("I'm taking these courses:");
    student.courses.forEach(course => console.log(course));
  }
});
