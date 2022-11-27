//#!/usr/bin/env scala

package school

object Main {

  def main(args: Array[String]): Unit = {
    val mcgill = new School("McGill");
    val comp251 = new Course("Comp251");
    val ecse211 = new Course("ECSE211");
    val ecse321 = new Course("ECSE321");

    val students: List[Student] = List(
      new Student("Alice", "alice.wonderland@mail.mcgill.ca", Array(comp251, ecse211, ecse321)),
      new Student("Bob", "bob.builder@mail.mcgill.ca", Array(ecse211)),
      new Student("Cathy", "cathy.smith@mail.mcgill.ca", Array())
    );

    students.foreach(student => {
      val nCourses = student.courses.length;
      println(s"Hi, I'm ${student.name} and I study at ${mcgill}!");
      println(nCourses match {
        case 0 => "I'm taking no courses.";
        case 1 => s"I'm taking this course: ${student.courses(0)}.";
        case _ => s"""I'm taking these courses:\n${student.courses.mkString("\n")}""";
      });
    });
  }
}
