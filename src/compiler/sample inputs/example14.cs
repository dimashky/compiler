namespace ConsoleApplication2
{
    class Program
    {
        static int Main(string[] args)
        {
            
            long a = countstring("This is \n Sanfoundry\n Website");
            Console.WriteLine("Number of Lines in the String : {0}", a);
            Console.ReadLine();

            return 0;
        }

        static long countstring(string s)
        {
            long count = 1;
            int start = 0;
            while ((start = s.IndexOf('\n', start)) != -1)
            {
                count++;
                start++;
            }
            return count;
        }
    }

    

}
