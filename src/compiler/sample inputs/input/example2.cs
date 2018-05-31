class a
{
    public int x;
    public a(int x)
    {
        this.x = x;
    }
    public virtual void overrideTest()
    {
        Console.write("a class\n");
    }
}

class b : a
{
    public int y;
    public int z;
    public b(int x, int y, int z) : base(x)
    {
        this.y = y;
        this.z = z;
    }
    public override void overrideTest()
    {
        Console.write("b class\n");
    }
}

class c : b
{
    public int a;
    public c(int x, int y, int z, int a) : base(x, y, z)
    {
        this.a = a;
    }
    public void overloadTest(int x)
    {
        Console.write("int ");
        Console.write(x);
    }
    public void overloadTest(float x)
    {
        Console.write("float\n");
    }
    public void overloadTest(a x)
    {
        x.overrideTest();
    }
    public override void overrideTest()
    {
        Console.write("c class\n");
    }

    public int fibo(int x)
    {
        if (x == 0 || x == 1)
            return x;
        return fibo(x - 1) + fibo(x - 2);
    }

}

class MainClass
{
    public static void Main()
    {
        c ob1 = new c(1, 2, 3, 4);
        int tt = ob1.fibo(10);
        Console.write(tt);

    }
}