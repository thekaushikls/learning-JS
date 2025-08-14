use std::io;

mod geolib;
use geolib::{Point3d, Printable};

fn main() {
    let p1 = Point3d::new(1.0, 2.0, 3.0);
    let mut p2: Point3d = Point3d::new(0.0, 0.0, 0.0);
    
    println!("{}", p1.to_string());
    println!("{}", p2.to_string());
    p2 = p1.product(5.0);
    println!("{}", p2.to_string());
    
    
    println!("\nPress Enter to exit...");
    io::stdin().read_line(&mut String::new());
}