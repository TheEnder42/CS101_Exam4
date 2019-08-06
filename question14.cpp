// CS101 Exam 4-102: Question 14
#include <stdio.h>
#include <math.h>

// Start: DO NOT MODIFY
struct Point {
	double x;
	double y;
};

struct Circle {
	struct Point center;
	double radius;
};

double compute_distance(struct Point p1, struct Point p2);
bool does_intersect(struct Circle *cir1, struct Circle *cir2);
// End: DO NOT MODIFY

int main(void) {
	// Start: DO NOT MODIFY
	struct Circle c1, c2;
	printf("Enter x, y, and r values for circle 1: ");
	scanf("%lf %lf %lf", &c1.center.x, &c1.center.y, &c1.radius);
	printf("Enter x, y, and r values for circle 2: ");
	scanf("%lf %lf %lf", &c2.center.x, &c2.center.y, &c2.radius);

	bool intersect = does_intersect(&c1,&c2);
	if (intersect) {
		printf("The circles intersect\n");
	} else {
		printf("The circles do not intersect\n");
	}
	// End: DO NOT MODIFY

	return 0;
}

//----------------------------------------------------------------------------	
// TODO: add definitions for the compute_distance and does_intersect functions
double compute_distance(struct Point p1, struct Point p2){
	return sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
}

bool does_intersect(struct Circle *cir1, struct Circle *cir2){
	double dist, radi;
	dist = compute_distance(cir1->center, cir2->center);
	radi = cir1->radius+cir2->radius;
	printf("The distance between the centers is %.02lf\n", dist);
	printf("The sum of the radii is %.02lf\n", radi);
	if(dist<radi){
		return true;
	}
	return false;
}
