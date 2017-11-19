namespace ConsoleApplication2
{
    class Program
    {
        static int Main(string[] args)
        {

            return 0;

        }
    }
    public class Person
    {
        
        private String name;
        private int age;
        public int getAge() { return age; }
        public String getName() { return name; }
        public void setName(String name)
        {
            this.name = name; 
        }
        public void setAge(int age)
        {
            this.age = age;
        }
    }

}