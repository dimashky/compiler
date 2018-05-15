class MainClass
{
    int x;
    public static void Main(string[] args)
    {
        int i = 5;
        while( i > 0)
        {
            i = i - 1;
        }
    }

    public static int rec(int x)
    {
        if (x > 0)
        {
            rec(x - 1);
        }
    }
}