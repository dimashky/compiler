class Program
{
    static void Main()
    {
        MethodA();
        MethodB();
        Console.Read();
    }
    [Obsolete("Use MethodB Instead")]
    static void MethodA()
    {
    }
    static void MethodB()
    {
        Console.WriteLine(" MethodA shows an Warning when called and MethodB is not an Obsolete Method ");
    }
}