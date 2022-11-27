package school

class Student(name: String, email: String, var courses: Array[Course]) extends Person(name, email);
