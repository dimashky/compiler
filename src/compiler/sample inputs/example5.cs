
namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            char x = 'a';
            int start = 1;
            int end = 1; 
            int  res = bin(x,start,end); 
        }

        public static int bin(char lexeme, int start, int finish)
        {
            if (start >= finish)
                return 1;
            else
            {
                int mid = (start + finish);
                int cmp = mid / 2;
                if (cmp == 0)
                    return 2;
                else if (cmp < 0)
                    return bin(lexeme, start, mid);
                else
                    return bin(lexeme, mid + 1, finish);
            }
        }
    }



}