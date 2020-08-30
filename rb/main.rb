#!/usr/bin/env ruby

require_relative "school"
require_relative "student"

mcgill = School.new("McGill")

students = [
  Student.new("Alice", "alice.wonderland@mail.mcgill.ca", ["Comp251", "ECSE211", "ECSE321"]),
  Student.new("Bob", "bob.builder@mail.mcgill.ca", ["ECSE211"]),
  Student.new("Cathy", "cathy.smith@mail.mcgill.ca", [])
]

for student in students
  nCourses = student.courses.length()
  puts "Hi, I'm #{student.name} and I study at #{mcgill.name}!"
  if nCourses == 0
    puts "I'm taking no courses."
  elsif nCourses == 1
    puts "I'm taking this course: #{student.courses[0]}."
  else
    puts "I'm taking these courses:"
    for course in student.courses
      puts course
    end
  end
end
