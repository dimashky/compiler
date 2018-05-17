
namespace Sport
{
    public abstract class Player
    {
        public string Name;
        public int Age;
        public float Height;
        public SportClub PlayerClub;

        public int PlayerNumber;

        protected Player() { }

        public Player(SportClub playerClub)
        {
            this.PlayerClub = playerClub;
        }

        public abstract bool CanPlayGame(int sport);

    }

  
}
