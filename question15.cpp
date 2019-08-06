// CS101 Exam 4-102: Question 15
#include <stdio.h>

// Start: DO NOT MODIFY
#define MAX_EMPLOYEES  10

// tax brackets
#define BRACKET_15     50000
#define BRACKET_25    135000
#define BRACKET_33    250000

// tax rates
#define TAX_15        0.15
#define TAX_25        0.25
#define TAX_33        0.33


// Employee structure
struct Employee {
	int   id;
	float salary;
	float tax_rate;
};
// End: DO NOT MODIFY


// function prototypes
// TODO 1: Add function prototypes
void initialize_employee(struct Employee *joe, int id, float salary);
double calc_average_salary(struct Employee[], int size);

int main (void)
{
// Start: DO NOT MODIFY
	struct Employee employees[MAX_EMPLOYEES];
	int num_employees = 0;
	float weekly_salary;
	float ave_salary = 0;
	
	// get # of employee salaries to enter
	printf("Enter # of employees (max 10): ");
	scanf("%i", &num_employees);
	
	// get employee weekly salaries
	for (int i = 0; i < num_employees; i++)
	{
		printf("Enter employee %i weekly salary: ", i + 1);
		scanf("%f", &weekly_salary);
// End: DO NOT MODIFY

		// TODO 2: call initialize_employee() to initialize employee struct
        // TODO 2: note that employee IDs should start at 1 (NOT 0)
        initialize_employee(&employees[i], i+1, weekly_salary);

		
		// TODO 3: output employee info - replace the constants in the printf below with
		// TODO 3: the appropriate employee variables so that the output for each employee
        // TODO 3: includes the employee's id, annual salary, and tax rate
		// TODO 3: example output:   Employee 2: $52000.00 (0.25)
		printf("Employee %i: $%.2f (%.2f)\n", 1+i, employees[i].salary, employees[i].tax_rate);
	}
	
	// TODO 4: add a call to calc_average_salary() to calculate the average annual salary of the employees
    ave_salary = calc_average_salary(employees, num_employees);

	
// Start: DO NOT MODIFY
	// output average annual salary
	printf("\nAverage salary: $%.2f\n", ave_salary);
	
	return 0;
// End: DO NOT MODIFY    
}


// TODO 5: implement initialize_employee() function, which accepts a reference to an Employee struct,
// TODO 5: an integer ID, and a floating point weekly salary
// TODO 5: the function sets employee ID, calculates annual salary, and sets tax rate based on annual
// TODO 5: salary and tax bracket
// TODO 5: the tax rate can be determined by comparing the annual salary to the tax brackets.  An employee's tax
// TODO 5: rate is determined by the lowest tax bracket their salary falls within, example: if their salary is
// TODO 5: $52,000, they fall within the $135,000 bracket (BRACKET_25), and their tax rate is 0.25 (TAX_25).
// TODO 5: the function does NOT return anything
void initialize_employee(struct Employee *joe, int id, float salary){
	joe->id=id;
	joe->salary=salary*52;
	if(joe->salary < BRACKET_15){
		joe->tax_rate = TAX_15;
	}
	else if(joe->salary < BRACKET_25){
		joe->tax_rate = TAX_25;
	}
	else if(joe->salary < BRACKET_33){
		joe->tax_rate = TAX_33;
	}
	else{
		joe->tax_rate = 9000;
	}
}



// TODO 6: implement calc_average_salary() function, which accepts an array of Employee structs,
// TODO 6: and an integer number of employees in the array
// TODO 6: the function returns the average annual salary of all employees as a floating point number
double calc_average_salary(struct Employee joes[], int size){
	double sum=0.0;
	for (int i = 0; i < size; i++){
		sum += joes[i].salary;
	}
	return sum/size;
}