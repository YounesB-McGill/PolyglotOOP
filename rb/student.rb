require_relative "person"

class Student < Person
  attr_accessor :courses

  def initialize(name, email, courses)
    super(name, email)
    @courses = courses
  end
end
