// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200331b
// 20200331b

#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Pont;

double distance(Pont p1, Pont p2)
{
    double dx = p1.x-p2.x;
    double dy = p1.y-p2.y;
    return sqrt(dx*dx+dy*dy);
}

int main()
{
    Pont a = { 1, 2 };
    Pont b = { 6, 5 };

    printf("A két pont közti távolság: %lf\n", distance(a, b));

    return 0;
}