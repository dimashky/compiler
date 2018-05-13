namespace Sports
{
    abstract class Sport
    {
        public abstract string Rules();
    }

    class FootBall
    {
        public string Rules()
        {
            return "FootBall";
        }
    }

    class BasketBall
    {
        public string Rules()
        {
            return "BasketBall";
        }
        public static void Main()
        {
            Sport[] mySports = new Sport[2];
            mySports[0] = new FootBall();
            mySports[1] = new BasketBall();
            
        }
    }
}

/* Main */

