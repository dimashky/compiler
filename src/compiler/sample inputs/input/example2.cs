class MainClass
{
    public static void Main(string[] args)
    {
        y = 3 + 3;
        y = y;
        b qq = new b();
        qq.x = 12;
        qq.x = qq.x;
        qq.y = 20;
        qq.x = qq.x;
    }
}

class a
{
    public int x;
}

class b : a
{
    public int y;
}