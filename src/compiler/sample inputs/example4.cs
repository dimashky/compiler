using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 1 , b= 2, c=3 , d = 4 , e=5 , f = 6;
            long res = 0;
            res = a * b + c - d;
            res += (a % 3) - (b % 4);
            res ^= res;
            res += res << 1;
            res += res >> 1;
            res |= res;
            res &= res;
         }               
    }
    
    
}
