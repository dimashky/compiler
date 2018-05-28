class c :b{ }
class b : a {
    public int b3;
}

class a
{
    public int x;
    public override string ToString()
    {
        return "maher";
    }

}

class MainClass
{
    public static void Main(string[] args)
    {
        b rr = new b();
        rr.b3 = 4;
        rr.x = 3;
        rr.b3 = rr.b3;
    }
}