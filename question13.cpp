// CS101 Exam 4-102: Question 13
#include <stdio.h>

//-------------------------------- P A R T   1 ----------------------------------	
// TODO 1: Insert struct declaration here
struct Values{
	double x, y, scale;
};

// Start: DO NOT MODIFY
double processValues(struct Values *v);
// End: DO NOT MODIFY

int main(void) {
	// Start: DO NOT MODIFY
	struct Values num;
	double ans=0;
	printf("Enter x/y: ");
	scanf("%lf %lf", &num.x, &num.y);
	printf("Scale factor: ");
	scanf("%lf",&num.scale);
	// End: DO NOT MODIFY

    //-------------------------------- P A R T   3 ----------------------------------	
    // TODO 3: Insert function call here
    //         Store result in ans
	ans = processValues(&num);

	// Start: DO NOT MODIFY
	printf("x=%lf, y=%lf\n", num.x, num.y);
	printf("max=%lf\n", ans);
	// End: DO NOT MODIFY

	return 0;
}

//-------------------------------- P A R T   2 ----------------------------------	
// TODO 2: add definition for the processValues function
double processValues(struct Values *v){
	v->x *= v->scale;
	v->y *= v->scale;
	if(v->x > v->y){
		return v->x;
	}
	return v->y;
}
