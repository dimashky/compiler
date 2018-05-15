class MainClass
{
    public static void Main(string[] args)
    {
        rec(5);
    }

    public static int rec(int x)
    {
        if (x > 0)
        {
            rec(x - 1);
        }
    }
}