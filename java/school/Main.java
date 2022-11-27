package school;

import java.util.List;

public class Main {

  public static void main(String[] args) {
    var mcgill = new School("McGill");
    var comp251 = new Course("Comp251");
    var ecse211 = new Course("ECSE211");
    var ecse321 = new Course("ECSE321");
    var students = List.of(
      new Student("Alice", "alice.wonderland@mail.mcgill.ca", List.of(comp251, ecse211, ecse321)),
      new Student("Bob", "bob.builder@mail.mcgill.ca", List.of(ecse211)),
      new Student("Cathy", "cathy.smith@mail.mcgill.ca", List.of())
    );

    students.forEach(student -> {
      var nCourses = student.getCourses().size();
      System.out.println("Hi, I'm " + student.getName() + " and I study at " + mcgill + "!");
      if (nCourses == 0) {
        System.out.println("I'm taking no courses.");
      } else if (nCourses == 1) {
        System.out.println("I'm taking this course: " + student.getCourses().get(0) + ".");
      } else {
        System.out.println("I'm taking these courses:");
        student.getCourses().forEach(System.out::println);
      }
    });
  }

}
