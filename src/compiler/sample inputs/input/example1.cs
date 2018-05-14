namespace Sports
{
    abstract class Sport
    {
        public abstract string Rules();
    }

    class FootBall : Sport
    {
        public string Rules()
        {
            return "FootBall";
        }
    }

    class BasketBall : Sport
    {
        public string Rules()
        {
            return "BasketBall";
        }
        public void Maddin()
        {
            Sport[] mySports = new Sport[2];
            mySports[0] = new FootBall();
            mySports[1] = new BasketBall();
            
        }
    }
}
