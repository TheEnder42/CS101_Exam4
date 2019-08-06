// CS101 Exam 4-102: Question 12
#include <stdio.h>

// Start: DO NOT MODIFY
struct Point {
	int x, y;
}; 

struct Point init_Point(int xinit, int yinit);
// End: DO NOT MODIFY

int main(void) {
	// Start: DO NOT MODIFY
	struct Point p;
	int user_x, user_y;

	printf("Enter x and y values for a Point: ");
	scanf("%i %i", &user_x, &user_y);
	// End: DO NOT MODIFY


    //-------------------------------- P A R T   2 ----------------------------------	
	// TODO 2: Insert function call to init_Point here
	//         Store results in p
	p = init_Point(user_x, user_y);

	// Start: DO NOT MODIFY
	printf("Point: x=%i, y=%i\n", p.x, p.y);
	// End: DO NOT MODIFY

	return 0;
}


//-------------------------------- P A R T   1 ----------------------------------	
// TODO 1: add definition for init_Point function
struct Point init_Point(int xinit, int yinit){
	struct Point temp;
	temp.x=xinit;
	temp.y=yinit;
	return temp;
}