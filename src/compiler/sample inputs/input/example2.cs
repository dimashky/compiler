class MainClass
{
    static void Main(string []args)
    {
        a test = new a(1);
    }
    class a
    {
        public a x;
        public int z;
        public a(int p)
        {
            z = p;
            if(p == 1)
            {
                x = new a(2);
            }
        }       
    }
}