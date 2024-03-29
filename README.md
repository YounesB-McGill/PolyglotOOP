# Polyglot OOP

Simple OOP demonstration in multiple languages.

## Data model

The data model is defined in the class diagram below.

```mermaid
classDiagram
    direction RL
    Person <|-- Student
    School "1" -- "*" Person
    Student "*" -- "*" Course

    class School {
        String name
    }

    class Person {
        String name
        String email
    }

    class Student {
    }

    class Course {
        String name
    }
```

## How to run

To run each example, run `make` in the directory of the language you want to run.
For languages that require a build step, the build step is run automatically.

Note that a `Makefile` is normally not needed for interpreted languages,
such as JavaScript and Python, but it is used here
to maintain consistency across the examples and to allow for automated testing
in the future.
