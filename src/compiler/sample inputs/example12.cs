namespace ConsoleApplication2
{
    class Program
    {
        static int Main(string[] args)
        {

            return 0;
        }
    }
    class Student
    {
        private string myName = "N/A";
        private int myAge = 0;
        public string setName()
        {
            return myName;
        }
        public void setNAme(String value)
        {
            myName = value;
        }
        public int getAge()
        {
            return myAge;
        }
        public void setage(int value)
        {
            myAge = value;
        }

        public override string ToString()
        {
            return "Name = " + myName + ", Age = " + myAge;
        }


    }
}