namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            car KIA = new car();
            KIA.id = 1;
            KIA.name = " KIA RIO ";
            MAZDA mazda = new MAZDA();
            mazda.id = 1;
            mazda.name = "MAZDA 83";
            mazda.price = 1000;  
        }
    }
    class car
    {
        public int id;
        public std.x.z name;
    }
       class MAZDA:car
      {
        public int price; 
      }
}
