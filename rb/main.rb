#!/usr/bin/env ruby

require_relative "course"
require_relative "school"
require_relative "student"

mcgill = School.new("McGill")

comp251 = Course.new("Comp251")
ecse211 = Course.new("ECSE211")
ecse321 = Course.new("ECSE321")

students = [
  Student.new("Alice", "alice.wonderland@mail.mcgill.ca", [comp251, ecse211, ecse321]),
  Student.new("Bob", "bob.builder@mail.mcgill.ca", [ecse211]),
  Student.new("Cathy", "cathy.smith@mail.mcgill.ca", [])
]

for student in students
  nCourses = student.courses.length()
  puts "Hi, I'm #{student.name} and I study at #{mcgill}!"
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
