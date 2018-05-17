namespace SportError
{
    public class SportType
    {
    }

    public abstract class SportClub
    {
        private string ClubName;

        public Player[] TeamPlayers;

        public SportType SportType;

        protected Player BestPlayer;

        public string Region;

        protected SportClub() { }

        protected SportClub(SportType sportType)
        {
            this.sportType = sportType;
        }

        public int PlayersUnderAge(int age = 30)
        {
            int playersCount = 0;
            for (int i = 0; i < this.TeamPlayers.Length; i++)
            {
                //Not boolean expresion for condition
                if (TeamPlayers[i].Age) playersCount++;
            }
            return playersCount;
        }

        public abstract bool CanPlayTournaments();

        public string PlayGame()
        {
            return "Club " + ClubName + " is playing";
        }

        public int PlayerNumber(Player player)
        {
            int i = 0;
            for (; i < TeamPlayers.Length; i++)
            {
                if (player.Name == TeamPlayers[i].Name) return i;
            }
            //Not AllPaths have return
            //return -1;
        }

    }

    public class FootballClub : SportClub
    {
        public static int TotalPlayers;
        private const int TOTAL_TEAM_PLAYERS = 11;
        public override bool CanPlayTournaments()
        {
            return true;
        }

        public FootballClub(SportType sportType) : base(sportType, "Constructor Function NotFount")
        {
            this.Region = TotalPlayers.Callx();
        }

        //Numbers Of functions parameters
        public FootballClub(Player[] teamPlayers, SportType sportType, Player bestPlayer) : base(sportType, teamPlayers)
        {
            BestPlayer = bestPlayer;
            this.Region = "Nowhere";

            TotalPlayers += this.TeamPlayers.Length;
        }

    }

    public class BasketBallCLub : SportClub
    {
        public override bool CanPlayTournaments()
        {

            return false;
        }

        public new string PlayGame()
        {
            //undeclared Variable
            return "Club" + ClubName + " " + ClubCity + " is playing Basketball!";
        }

        private string ClubCountry;
        private string GetCountry()
        {
            return ClubCountry;
        }
    }

    public class ChessClub : SportClub
    {
        protected ChessClub() { }

        public ChessClub(SportType sportType)
        {
            this.SportType = SportType.Chess;
        }

        public override bool CanPlayTournaments()
        {
            return false;
        }

        public new string PlayGame()
        {
            return "Club" + ClubName + " is playing Chess!";
        }

        public int NumberOfPieces(string piece)
        {
            //internal class on other namespace
            return GameRules.CheessRules.NumberOfPieces(piece);
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            FootballClub RealMadrid = new SportClub(SportType.Football);
            SportClub LosAngelesLakers = new FootballClub(SportType.BasketBall);
            SportClub ChessWorld = new ChessClub(sportType.Chess);
            ChessClub PureChessWorld = new ChessClub(sportType.Chess);
            SportClub Barcelona = new BasketBallCLub();

            //abstract class
            SportClub ClubNotFound = new SportClub();

            //undeclared method
            string knightPieces = ChessWorld.NumberOfPieces("Knight");
            string knightPiecesPure = PureChessWorld.NumberOfPieces("Knight");
            //undeclared 
            Barcelona.SportType = 30;

            string barcelonaCountry = Barcelona.Country;
            string barcelonaOtherCountry = Barcelona.GetCountry();


            int standardAge;

            //Name is Private
            Player MESSI = new FootballPlayer(Barcelona); MESSI.Name = "CR7"; MESSI.Age = standardAge; MESSI.Height = 9;
            //worning unassigned variable
            FootballPlayer KEYLOR_NAVAS = new FootballPlayer(Barcelona); KEYLOR_NAVAS.Name = "CR8"; KEYLOR_NAVAS.Age = standardAge; KEYLOR_NAVAS.Height = 9;
            Player SERGIO_RAMOS = new FootballPlayer(RealMadrid); SERGIO_RAMOS.Name = "CR9"; SERGIO_RAMOS.Age = standardAge; SERGIO_RAMOS.Height = 9;
            Player CASEMIRO = new ChessPlayer(); CASEMIRO.Name = "CR6"; CASEMIRO.Age = standardAge; CASEMIRO.Height = 9; CASEMIRO.PlayerClub = LosAngelesLakers;
            Player BENZEMA = new ChessPlayer(); BENZEMA.Name = "CR5"; MESSI.Age = standardAge; BENZEMA.Height = 9; BENZEMA.PlayerClub = RealMadrid;
            ProChessPlayer ZIDANE = new ChessPlayer(); ZIDANE.Name = "CR4"; ZIDANE.Age = standardAge; ZIDANE.Height = 9; ZIDANE.PlayerClub = ChessWorld;

            Player[] AllPlayers = new Player[7];

            //undeclared 
            TinnesClub Germany = new GermanyTinnesClub();

            AllPlayers[0] = MESSI;
            AllPlayers[1] = KEYLOR_NAVAS;
            AllPlayers[2] = SERGIO_RAMOS;
            AllPlayers[3] = CASEMIRO;
            AllPlayers[4] = BENZEMA;
            AllPlayers[5] = ZIDANE;

            //undeclared variable
            AllPlayers[6] = CASTRO;

            FootballClub LargClub = new FootballClub(AllPlayers, SportType.BasketBall, BENZEMA);

            if (ZIDANE is ChessPlayer) ZIDANE.CanPlayGame(SportType.BasketBall);

            double FootballClubsPlayers = FootballClub.TotalPlayers;

            //Error for using undeclared attribute of a class;
            string RealMadrilCoatch = RealMadrid.Coatch;

            string RealMadridPlayGame = RealMadrid();
            string LosAngelesLakersPlayGame = LosAngelesLakers.PlayGame();
            string ChessWorldPlayGame = ChessWorld.PlayGame();
            string BarcelonaPlayGame = Barcelona.PlayGame();

            string ChessPlay = ChessWorld.PlayGame();
            string ChessPlayCast = ((ChessClub)ChessWorld).PlayGame();

            string BasketBallPlay = Barcelona.PlayGame();
            string BasketBallPlayCast = (ChessWorld as ChessClub).PlayGame();

            string toString = BasketBallPlayCast.ToString();

        }
    }

    public abstract class Player
    {
        private string Name;
        public int Age;
        public float Height;
        public SportClub PlayerClub;

        public int PlayerNumber;

        protected Player() { }

        public Player(SportClub playerClub)
        {
            this.PlayerClub = playerClub;
        }

        public abstract bool CanPlayGame(SportType sport);

    }

    public class FootballPlayer : Player
    {
        public FootballPlayer(SportClub playerClub) : base(playerClub)
        {
            this.PlayerNumber = this.PlayerClub.PlayerNumber(this);
        }

        public override bool CanPlayGame(SportType sport)
        {
            if (this.PlayerClub.SportType == sport) return true;
            return false;
        }
    }


    public class ChessPlayer : Player
    {
        public override sealed bool CanPlayGame(SportType sport)
        {
            return false;
        }

    }

    public class ProChessPlayer : ChessPlayer
    {
        public override bool CanPlayGame(SportType sport)
        {
            return true;
        }
    }
}

namespace GameRulesError
{
    internal class FootBallRules
    {
        public const int TOTAL_TEAM_PLAYERS = 11;
        public string GetRules()
        {
            return "NoRules... Just break the ENEMY!";
        }
    }

    internal static class CheessRules
    {
        //only static attributes can be declared inside static class
        int totalPices;
        public static int NumberOfPieces(string piece)
        {
            switch (piece)
            {
                case "King":
                    return 1;
                case "Queen":
                    return 1;
                case "Pawn":
                    return 8;

                case "Rook":
                case "Bishop":
                case "Knight":
                    return 2;
            }
            return -1;
        }
    }

    class BasketballRues
    {
        int TeamMembers = 5;
        int MaxMembers;
        static int GetTeamMembers()
        {
            //Only static items can be used inside a static method. local variables is allowed;
            return TeamMembers;
        }

        static BasketballRues()
        {
            this.MaxMembers = 20;
        }
    }
}