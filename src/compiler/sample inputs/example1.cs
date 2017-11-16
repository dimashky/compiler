namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            int x=10, y=0; 
           for(int i=0;i<x;i++)
            {
               
               if(i%2==0)
                {
                    y += x; 
                } 
            }

           while(y > 0 )
            {
                y--;
            }

        }
    }
}