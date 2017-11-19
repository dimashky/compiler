namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            array a = new array(2,2);
      
        }
    }
    public class array
    {
        int m, n;
        int[,] a;
        public array(int x, int y)
        {
            m = x;
            n = y;
            a = new int[m, n];
        }
        public void read()
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    a[i, j] = 1;
                }
            }
        }
        public void print()
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {

                }
            }
        }
    }

 }
