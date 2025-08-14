
class Point3d(object):

    #region Constructor
    def __init__(self, x=0, y=0, z=0):
        self.X = x
        self.Y = y
        self.Z = z
    #endregion Constructor

    #region Properties    
    @property
    def X(self):
        return self.__x
    
    @X.setter
    def X(self, value):
        if(isinstance(value, (int, float))):
            self.__x = value
        else:
            raise TypeError("X must be a number")
        
    @property
    def Y(self):
        return self.__y
    
    @Y.setter
    def Y(self, value):
        if(isinstance(value, (int, float))):
            self.__y = value
        else:
            raise TypeError("Y must be a number")
        
    @property
    def Z(self):
        return self.__z
    
    @Z.setter
    def Z(self, value):
        if(isinstance(value, (int, float))):
            self.__z = value
        else:
            raise TypeError("Z must be a number")
    #endregion Properties

    #region Methods
    @staticmethod
    def Origin():
        return Point3d(0, 0, 0)
    
    def __str__(self):
        return f"Point3d({self.X}, {self.Y}, {self.Z})"
    
    def __repr__(self):
        return f"Point3d({self.X}, {self.Y}, {self.Z})"
    
    def add(self, other):
        if isinstance(other, Point3d):
            return Point3d(self.X + other.X, self.Y + other.Y, self.Z + other.Z)
        else:
            raise TypeError("Can only add another Point3d")
        
    def product(self, factor):
        if isinstance(factor, (int, float)):
            return Point3d(self.X * factor, self.Y * factor, self.Z * factor)
        else:
            raise TypeError("Factor must be a number")
    #endregion Methods
