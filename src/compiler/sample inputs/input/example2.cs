namespace example1
{
    class Program
    {
        static void Main(string[] args)
        {
            int cont = 1;
            while (cont == 1)
            {
                System.Console.write("please choose one of them : \n");
                System.Console.write("1   =>   !=\n");
                System.Console.write("2   =>   %\n");
                System.Console.write("3   =>   *\n");
                System.Console.write("4   =>   +\n");
                System.Console.write("5   =>   -\n");
                System.Console.write("6   =>   /\n");
                System.Console.write("7   =>   <\n");
                System.Console.write("8   =>   <=\n");
                System.Console.write("9   =>   =\n");
                System.Console.write("10  =>   ==\n");
                System.Console.write("11  =>   >\n");
                System.Console.write("12  =>   >=\n");
                System.Console.write("13  =>   &&\n");
                System.Console.write("14  =>   ||\n");
                System.Console.write("15  =>   break\n");
                System.Console.write("16  =>   continue\n");


                int choice = System.Console.readInt();

                if (choice == 1)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check != :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    if (x != y)
                    {
                        System.Console.write("not equal\n");
                    }
                    else
                    {
                        System.Console.write("equal\n");
                    }
                }
                else if (choice == 2)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check % :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    System.Console.write("result is : ");
                    System.Console.write(x % y);
                }
                else if (choice == 3)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check * :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    System.Console.write("result is : ");
                    System.Console.write(x * y);
                }
                else if (choice == 4)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check + :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    System.Console.write("result is : ");
                    System.Console.write(x + y);
                }
                else if (choice == 5)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check - :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    System.Console.write("result is : ");
                    System.Console.write(x - y);
                }
                else if (choice == 6)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check / :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    System.Console.write("result is : ");
                    System.Console.write(x / y);
                }
                else if (choice == 7)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check < :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    if(x < y)
                    {
                        System.Console.write(1);
                    }
                    else
                    {
                        System.Console.write(0);
                    }
                }
                else if (choice == 8)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check <= :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    if (x <= y)
                    {
                        System.Console.write(1);
                    }
                    else
                    {
                        System.Console.write(0);
                    }
                }
                else if (choice == 9)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check = :\n");
                    x = System.Console.readInt();
                    System.Console.write(x);
                }
                else if (choice == 10)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check == :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    if (x == y)
                    {
                        System.Console.write(1);
                    }
                    else
                    {
                        System.Console.write(0);
                    }
                }
                else if (choice == 11)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check > :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    if (x > y)
                    {
                        System.Console.write(1);
                    }
                    else
                    {
                        System.Console.write(0);
                    }
                }
                else if (choice == 12)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check >= :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    if (x >= y)
                    {
                        System.Console.write(1);
                    }
                    else
                    {
                        System.Console.write(0);
                    }
                }
                else if (choice == 13)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check && (first > second && first > 10) :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    if (x > y && x > 10)
                    {
                        System.Console.write(1);
                    }
                    else
                    {
                        System.Console.write(0);
                    }
                }
                else if (choice == 14)
                {
                    int x, y;
                    System.Console.write("enter two numbers to check && (first > second || first > 10) :\n");
                    x = System.Console.readInt();
                    y = System.Console.readInt();
                    if (x > y || x > 10)
                    {
                        System.Console.write(1);
                    }
                    else
                    {
                        System.Console.write(0);
                    }
                }
                else if (choice == 15)
                {
                    break;
                }
                else if (choice == 16)
                {
                    continue;
                }
                System.Console.write("success we will continue .....................\n");
            }    
        }
    }
}