public class Som
{
    public static void main(String[] args)
    {
        Whistle duckWhistle = new Whistle("Kvaak");
        Whistle roosterWhistle = new Whistle("Peef");

        duckWhistle.printSom();
        roosterWhistle.printSom();
        duckWhistle.printSom();
    }
}