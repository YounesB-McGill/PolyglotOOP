package school;

import java.util.List;

public class Student extends Person {

  private List<Course> courses;

  public Student(String name, String email, List<Course> courses) {
    super(name, email);
    this.courses = courses;
  }

  public List<Course> getCourses() {
    return courses;
  }
}
