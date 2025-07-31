public class Dog
{
    private String name;
    private String breed;
    private int age;

    public Dog(String nome)
    {
        this.age = 0;
        this.breed = "Lhasa Apsu";
        this.name = nome;
    }

    public void printDog()
    {
        System.out.println("O nome do cachorro é: " + this.name + "\nSua raça é: " + this.breed + "\nE tem " + this.age + " anos.");
    }
}