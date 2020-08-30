namespace school
{
  class Person
  {
    private string name;
    private string email;
    public string Name => name;
    public string Email => email;

    public Person(string name, string email)
    {
      this.name = name;
      this.email = email;
    }
  }
}
