using System;
using System.Collections.Generic;

namespace school
{
  class MainClass
  {
    public static void Main(string[] args) {
      var mcgill = new School("McGill");
      var students = new List<Student> 
      {
        new Student("Alice", "alice.wonderland@mail.mcgill.ca", new List<string> {"Comp251", "ECSE211", "ECSE321"}),
        new Student("Bob", "bob.builder@mail.mcgill.ca", new List<string> {"ECSE211"}),
        new Student("Cathy", "cathy.smith@mail.mcgill.ca", new List<string> {}),
      };

      foreach (var student in students)
      {
        var nCourses = student.Courses.Count;
        Console.WriteLine($"Hi, I'm {student.Name} and I study at McGill!");
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
