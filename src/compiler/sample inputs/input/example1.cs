public class Shape
{
    protected int m_xpos;
    protected int m_ypos;
    public Shape()
    {

    }
    public Shape(int x, int y)
    {
        m_xpos = x;
        m_ypos = y;
    }
    public virtual void Draw()
    {
        Console.WriteLine("Drawing a SHAPE at {0},{1}", m_xpos, m_ypos);
    }
}

public class Square : Shape
{
    public Square()
    {
    }

    public Square(int x, int y) : base(x, y)
    {
    }
    public override void Draw()
    {
        Console.WriteLine("Drawing a SQUARE at {0},{1}", m_xpos, m_ypos);
    }
}


public class Circle : Shape
{
    public Circle()
    {
    }
    public Circle(int x, int y) : base(x, y)
    {
    }
    public override void Draw()
    {
        Console.WriteLine("Drawing a CIRCLE at {0},{1}", m_xpos, m_ypos);
    }
}
class Program
{
    static void Main(string[] args)
    {
        Shape sh = new Shape(100, 100);
        sh.Draw();

        Square sq = new Square(200, 200);
        sq.Draw();

        Circle ci = new Circle(300, 300);
        ci.Draw();

    }
}


