using geoLib;

namespace geolib_cs
{
    public class Program
    {
        public static void Main(string[] args)
        {

            Point3d p1 = new Point3d(1, 2, 3);
            Point3d p2 = Point3d.Origin;

            Console.WriteLine(p1.ToString());
            Console.WriteLine(p2.ToString());
            p2 = p1.Product(5);
            Console.WriteLine(p2.ToString());
        }
    }
}
