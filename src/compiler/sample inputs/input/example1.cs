using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sport
{

    public class SportType
    {
        public static int Football = 0, BasketBall = 1, Chess = 2;
    }

    public abstract class SportClub
    {
        public Player[] TeamPlayers;

        public int PlayersUnderAge(int age = 30)
        {
            int playersCount = 0;
            for (int i = 0; i < this.TeamPlayers.Length; i++)
            {
                if (TeamPlayers[i].Age < age) playersCount++;
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
            return -1;
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

        public FootballClub(int sportType) : base(sportType)
        {
            this.Region = "Spain";
        }

        public FootballClub(Player[] teamPlayers, int sportType, Player bestPlayer) : base(sportType)
        {
            BestPlayer = bestPlayer;
            this.Region = "Spain";

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
            return "Club" + ClubName + " is playing Basketball!";
        }
    }

    public class ChessCLub : SportClub
    {
        public ChessCLub() { }

        public ChessCLub(int sportType)
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
            return GameRules.CheessRules.NumberOfPieces(piece);
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            SportClub RealMadrid = new FootballClub(SportType.Football);
            SportClub LosAngelesLakers = new FootballClub(SportType.BasketBall);
            SportClub ChessWorld = new ChessCLub(SportType.Chess);
            SportClub Barcelona = new BasketBallCLub();
            Barcelona.SportType = SportType.BasketBall;

            Player Messi = new FootballPlayer(Barcelona); Messi.Name = "CR7"; Messi.Age = 99; Messi.Height = 9;
            FootballPlayer KEYLOR_NAVAS = new FootballPlayer(Barcelona); KEYLOR_NAVAS.Name = "CR8"; KEYLOR_NAVAS.Age = 99; KEYLOR_NAVAS.Height = 9;
            Player SERGIO_RAMOS = new FootballPlayer(RealMadrid); SERGIO_RAMOS.Name = "CR9"; SERGIO_RAMOS.Age = 99; SERGIO_RAMOS.Height = 9;
            Player CASEMIRO = new ChessPlayer(); CASEMIRO.Name = "CR6"; CASEMIRO.Age = 99; CASEMIRO.Height = 9; CASEMIRO.PlayerClub = LosAngelesLakers;
            Player BENZEMA = new ProChessPlayer(); BENZEMA.Name = "CR5"; Messi.Age = 99; BENZEMA.Height = 9; BENZEMA.PlayerClub = RealMadrid;
            ChessPlayer ZIDANE = new ChessPlayer(); ZIDANE.Name = "CR4"; ZIDANE.Age = 99; ZIDANE.Height = 9; ZIDANE.PlayerClub = ChessWorld;

            Player[] AllPlayers = new Player[6];

            AllPlayers[0] = Messi;
            AllPlayers[1] = KEYLOR_NAVAS;
            AllPlayers[2] = SERGIO_RAMOS;
            AllPlayers[3] = CASEMIRO;
            AllPlayers[4] = BENZEMA;
            AllPlayers[5] = ZIDANE;

            FootballClub LargClub = new FootballClub(AllPlayers, SportType.Chess, BENZEMA);

            if (ZIDANE is ChessPlayer) ZIDANE.CanPlayGame(SportType.BasketBall);

            float FootballClubsPlayers = FootballClub.TotalPlayers;

            string RealMadridPlayGame = RealMadrid.PlayGame();
            string LosAngelesLakersPlayGame = LosAngelesLakers.PlayGame();
            string ChessWorldPlayGame = ChessWorld.PlayGame();
            string BarcelonaPlayGame = Barcelona.PlayGame();

            string ChessPlay = ChessWorld.PlayGame();
            string ChessPlayCast = ((ChessCLub)ChessWorld).PlayGame();

            string BasketBallPlay = Barcelona.PlayGame();
            string BasketBallPlayCast = (ChessWorld as ChessCLub).PlayGame();

            string toString = BasketBallPlayCast.ToString();

        }
    }

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

    public class FootballPlayer : Player
    {
        public FootballPlayer(SportClub playerClub) : base(playerClub)
        {
            this.PlayerNumber = this.PlayerClub.PlayerNumber(this);
        }

        public override bool CanPlayGame(int sport)
        {
            if (this.PlayerClub.SportType == 3) return true;
            return false;
        }
    }


    public class ChessPlayer : Player
    {
        public override bool CanPlayGame(int sport)
        {
            return false;
        }
    }

    public class ProChessPlayer : ChessPlayer
    {
        public new bool CanPlayGame(int sport)
        {
            return true;
        }
    }
}

namespace GameRules
{
    internal class FootBallRules
    {
        public const int TOTAL_TEAM_PLAYERS = 11;
        public readonly string NullRues;
        public string GetRules()
        {
            return "NoRules... Just break the ENEMY!";
        }

        FootBallRules()
        {
            NullRues = "Null";
        }
    }

    static class CheessRules
    {

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
}