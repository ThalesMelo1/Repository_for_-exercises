public class Product
{
    private int quantidade;
    private String nome;
    private double preço;

    public Product(String name, int quant, double price)
    {
        this.nome = name;
        this.quantidade = quant;
        this.preço = price;
    }

    public void printProduct()
    {
        System.out.println("Produto: " + this.nome + ", quantidade: " + this.quantidade + ", preço: " + this.preço);
    }

}