package school;

fun main() {
  val mcgill = School("McGill");
  val comp251 = Course("Comp251");
  val ecse211 = Course("ECSE211");
  val ecse321 = Course("ECSE321");
  
  val students: Array<Student> = arrayOf(
    Student("Alice", "alice.wonderland@mail.mcgill.ca", arrayOf(comp251, ecse211, ecse321)),
    Student("Bob", "bob.builder@mail.mcgill.ca", arrayOf(ecse211)),
    Student("Cathy", "cathy.smith@mail.mcgill.ca", arrayOf())
  );

  students.forEach {
    val nCourses: Int = it.courses.size;
    println("Hi, I'm ${it.name} and I study at ${mcgill}!");
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
