namespace school
{
  class Course
  {
    private readonly string name;
    public string Name => name;

    public Course(string name) => this.name = name;

    public override string ToString() => Name;
  }
}
