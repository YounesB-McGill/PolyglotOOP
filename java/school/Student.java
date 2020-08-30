package school;

import java.util.List;

public class Student extends Person {

  private List<String> courses;

  public Student(String name, String email, List<String> courses) {
    super(name, email);
    this.courses = courses;
  }

  public List<String> getCourses() {
    return courses;
  }
}
