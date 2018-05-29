class MainClass
{
    public static void Main()
    {
        a c1 = new a(1, 2);
        b c2 = new b(5);
        a c3 = new a(7, 8);
        System.Console.write(c1.y);
        System.Console.write(c3.x);
    }
}


class a
{
    public int x;
    public int y;

    public a(int xx, int yy)
    {
       this.x = xx;
        y = yy;
    }
}

class b
{
    public int x;
    public b(int x)
    {

    }
}