namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            int x=10; 
            switch(x)
            {
                case 1: {
                        x++;
                        while (x != 0) x--; 
                        break;
                    }
                case 2: x++; break;
                case 3: x++; break;
                default: x--; break;
            }
        }
    }
    
    
}
