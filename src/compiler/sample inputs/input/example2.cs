namespace example1
{
    class Program
    {
        static void d()
        {

        }
        static int ff(int x = 3,int y = 1)
        {
            return x + y;
        }
        static void Main(string args)
        {
            System.Console.write(ff(5,6));
        }
    }
}