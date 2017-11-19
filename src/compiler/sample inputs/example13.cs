namespace ConsoleApplication2
{
    class Program
    {
        static int Main(string[] args)
        {
            TEST ref1 = new TEST();
            TEST ref2 = new TEST1();
            TEST1 ref3 = new TEST1();

            ref1.func();
            ref2.func();
            ref3.func();

            return 0;
        }
    }

    class TEST
    {
        public void func()
        {
            Console.WriteLine("TEST.func");
        }
    }

    class TEST1 : TEST
    {
        public new void func()
        {
            Console.WriteLine("TEST1.func");
        }
    }

}
