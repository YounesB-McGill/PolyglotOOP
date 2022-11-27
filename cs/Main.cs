using System;
using System.Collections.Generic;

namespace school
{
  class MainClass
  {
    public static void Main() {
      School mcgill = new("McGill");
      Course comp251 = new("Comp251"), ecse211 = new("ECSE211"), ecse321 = new("ECSE321");
      var students = new List<Student> 
      {
        new Student("Alice", "alice.wonderland@mail.mcgill.ca", new List<Course> {comp251, ecse211, ecse321}),
        new Student("Bob", "bob.builder@mail.mcgill.ca", new List<Course> {ecse211}),
        new Student("Cathy", "cathy.smith@mail.mcgill.ca", new List<Course>()),
      };

      foreach (var student in students)
      {
        var nCourses = student.Courses.Count;
        Console.WriteLine($"Hi, I'm {student.Name} and I study at {mcgill}!");
        if (nCourses == 0)
        {
          Console.WriteLine("I'm taking no courses.");
        }
        else if (nCourses == 1)
        {
          Console.WriteLine($"I'm taking this course: {student.Courses[0]}");
        }
        else
        {
          Console.WriteLine("I'm taking these courses:");
          foreach (var course in student.Courses)
          {
            Console.WriteLine(course);
          }
        }
      } 
    }
  }
}
