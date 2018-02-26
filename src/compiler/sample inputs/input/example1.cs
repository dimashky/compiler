//Abstract Class1
abstract class a
{
    public abstract void f1();
    public abstract void f2();
}
abstract class b : a
{
    public abstract void f3();
    public override void f1()
    {

    }
}
//Abstract Class2
class c : b
{

}

