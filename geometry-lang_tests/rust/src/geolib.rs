// Similar to Interface in C#
pub trait Printable {
    fn to_string(&self) -> String;
}

pub struct Point3d{
    x: f64,
    y: f64,
    z: f64,
}

impl Point3d {
    pub fn new(x: f64, y: f64, z: f64) -> Point3d {
        Point3d { x, y, z }
    }

    pub fn add(&self, other: &Point3d) -> Point3d {
        Point3d {
            x: self.x + other.x,
            y: self.y + other.y,
            z: self.z + other.z,
        }
    }

    pub fn product(&self, scalar: f64) -> Point3d {
        Point3d {
            x: self.x * scalar,
            y: self.y * scalar,
            z: self.z * scalar,
        }
    }
}

impl Printable for Point3d {
    fn to_string(&self) -> String {
        return format!("({:.2}, {:.2}, {:.2})", self.x, self.y, self.z);
    }
}