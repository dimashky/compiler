namespace example1
{
    class Shape
    {
        protected int width, height;

        public Shape(int a = 0, int b = 0)
        {
            width = a;
            height = b;
        }
        public virtual int area()
        {
            Console.write("Parent class area :");
            return 0;
        }
    }
    class Rectangle : Shape
    {
        public Rectangle(int a = 0, int b = 0) : base(a, b)
        {

        }
        public override int area()
        {
            Console.write("Rectangle class area :");
            return (width * height);
        }
    }
    class Triangle : Shape
    {
        public Triangle(int a = 0, int b = 0) : base(a, b)
        {
        }
        public override int area()
        {
            Console.write("Triangle class area :");
            return (width * height / 2);
        }
    }
    class Caller
    {
        public void CallArea()
        {
           /* int a;
            a = sh.area();
            Console.write("Area: ");
            Console.write(a);*/
        }
    }
    class Tester
    {
        static void Main(string[] args)
        {
            Caller c = new Caller();
            Rectangle r = new Rectangle(10, 7);
            Triangle t = new Triangle(10, 5);

            c.CallArea();
            //Console.ReadKey();
        }
    }
}