namespace geoLib
{
    public class Point3d
    {
        #region Constructor
        public Point3d() { }

        public Point3d(double x, double y, double z)
        {
            X = x;
            Y = y;
            Z = z;
        }

        public Point3d(Point3d other)
        {
            X = other.X;
            Y = other.Y;
            Z = other.Z;
        }
        #endregion Constructor

        #region Properties
        public static Point3d Unset { get => new Point3d(double.MinValue, double.MinValue, double.MinValue); }

        public static Point3d Origin { get => new Point3d(0, 0, 0); }

        public double X { get; set; }

        public double Y { get; set; }

        public double Z { get; set; }
        #endregion Properties

        #region Methods
        public Point3d Add(Point3d point)
        {
            return new Point3d(X + point.X, Y + point.Y, Z);
        }

        public Point3d Product(double factor)
        {
            return new Point3d(X * factor, Y * factor, Z * factor);
        }

        public override string ToString()
        {
            return $"({X:F2}, {Y:F2}, {Z:F2})";
        }
        #endregion Methods
    }
}
