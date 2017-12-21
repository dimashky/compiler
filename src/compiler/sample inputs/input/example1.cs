namespace std
{
    class x
    {
        public static void Main(string[] args)
        {

        }
		
		public class z{};

    }

    namespace s
    {
        namespace z
        {
            class s
            {

            }
        }
        namespace s
        {
            class s
            {
                z.s sA;
            }
        }
    }
}