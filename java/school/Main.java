package school;

import java.util.List;

public class Main {

  public static void main(String[] args) {
    var mcgill = new School("McGill");
    
    var students = List.of(
      new Student("Alice", "alice.wonderland@mail.mcgill.ca", List.of("Comp251", "ECSE211", "ECSE321")),
      new Student("Bob", "bob.builder@mail.mcgill.ca", List.of("ECSE211")),
      new Student("Cathy", "cathy.smith@mail.mcgill.ca", List.of())
    );

    students.forEach(student -> {
      var nCourses = student.getCourses().size();
      System.out.println("Hi, I'm " + student.getName() + " and I study at " + mcgill.getName() + "!");
      if (nCourses == 0) {
        System.out.println("I'm taking no courses.");
      } else if (nCourses == 1) {
        System.out.println("I'm taking this course: " + student.getCourses().get(0) + ".");
      } else {
        System.out.println("I'm taking these courses:");
        student.getCourses().forEach(course -> System.out.println(course));
      }
    });
  }

}
