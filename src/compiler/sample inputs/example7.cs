
namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            int b1=1, b2=1;
            int i = 0, rem = 0;
            int[] sum = new int[20];
            while (b1 != 0 || b2 != 0)
            {
                sum[i++] = (b1 % 10 + b2 % 10 + rem) % 2;
                rem = (b1 % 10 + b2 % 10 + rem) / 2;
                b1 = b1 / 10;
                b2 = b2 / 10;
            }
            if (rem != 0)
                sum[i++] = rem;
            --i;
            while (i >= 0)
                sum[i--] = 1; 
        }
    }
    
 }