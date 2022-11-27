namespace school
{
  class School
  {
    private readonly string name;
    public string Name => name;

    public School(string name) => this.name = name;

    public override string ToString() => Name;
    // {
    //   return Name;
    // }
  }
}
