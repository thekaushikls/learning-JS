from geolib.point3d import Point3d

p1 = Point3d(1, 2, 3)
p2 = Point3d.Origin()

print(p1)
print(p2)
p2 = p1.product(5)
print(p2)


