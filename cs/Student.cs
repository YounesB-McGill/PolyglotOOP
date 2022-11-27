using System.Collections.Generic;

namespace school
{
  class Student: Person
  {
    public List<Course> Courses { get; set; }

    public Student(string name, string email, List<Course> courses): base(name, email)
    {
      Courses = courses;
    }
  }
}
