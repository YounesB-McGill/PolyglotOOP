package school;

fun main(args: Array<String>) {
  val mcgill = School("McGill");
  
  val students: Array<Student> = arrayOf(
    Student("Alice", "alice.wonderland@mail.mcgill.ca", arrayOf("Comp251", "ECSE211", "ECSE321")),
    Student("Bob", "bob.builder@mail.mcgill.ca", arrayOf("ECSE211")),
    Student("Cathy", "cathy.smith@mail.mcgill.ca", arrayOf())
  );

  students.forEach {
    val nCourses: Int = it.courses.size;
    println("Hi, I'm ${it.name} and I study at ${mcgill.name}!");
    if (nCourses == 0) {
      println("I'm taking no courses.");
    } else if (nCourses == 1) {
      println("I'm taking this course: ${it.courses[0]}.");
    } else {
      println("I'm taking these courses:");
      it.courses.forEach { println(it) };
    }
  }
}
