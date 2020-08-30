using System.Collections.Generic;

namespace school
{
  class Student:Person
  {
    private List<string> courses;

    public List<string> Courses => courses;

    public Student(string name, string email, List<string> courses): base(name, email)
    {
      this.courses = courses;
    }
  }
}
