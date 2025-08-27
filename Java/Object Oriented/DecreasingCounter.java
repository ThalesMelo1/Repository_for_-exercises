public class DecreasingCounter
{
    private int counter, original;

    public DecreasingCounter(int value)
    {
        this.counter = value;
        this.original = value;
    }

    public void reset()
    {
        this.counter = this.original;
    }

    public void printValue()
    {
        System.out.println(this.counter);
    }

    public void decrement()
    {
        this.counter = this.counter - 1;
        if(this.counter < 0)
        {
            this.counter = 0;
        }
    }
}