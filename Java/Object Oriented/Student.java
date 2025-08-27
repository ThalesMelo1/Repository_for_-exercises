public class Student
{
    private String name;
    private int age;

    public Student(String nome, int idade)
    {
        this.name = nome;
        this.age = idade;
    }

    public String toString()
    {
        return "Nome: " + this.name + ", idade: " + this.age;
    }
}