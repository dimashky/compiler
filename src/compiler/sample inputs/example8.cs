namespace ConsoleApplication2
{
    class Program
    {
        static int Main(string[] args)
        {
            TowerOfHanoi T = new TowerOfHanoi();
            T.numdiscs = 3;
            T.movetower(T.numdiscs, 1, 3, 2);
            return 0;

        }
    }
    public class TowerOfHanoi
    {
        int m_numdiscs;
        public TowerOfHanoi()
        {
            m_numdiscs = 0;
        }
        
        public void movetower(int n, int from, int to, int other)
        {
            if (n > 0)
            {
                movetower(n - 1, from, other, to);
                movetower(n - 1, other, to, from);
            }
        }
    }
    

}