class MainClass
{
    public static void Main(string[] args)
    {
        int x;
        x = fns(fn(2));
        return;
    }

    public static int fns( int x)
    {
        return x + 5;
    }

    public static int fn(int x)
    {
        int y = x * 10;
        return x + y;
    }
}