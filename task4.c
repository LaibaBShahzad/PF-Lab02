#include<stdio.h>
int main()
{
	int num_students;
	int marks;
	int passed=0;
	int failed=0;
	int highest;
	int tot_marks=0;
	float average;

	printf("Number of students:");
	scanf("%d",&num_students);

	//loop for taking marks of each student
	for(int i=1; i<=num_students; i++){
	
	printf("Marks of students %d: ",i);
	scanf("%d",&marks);

	// for first student, initialize as the highest marks then if other highest marks appears it will overwrite it
	if(i==1){
	highest=marks;
	}

	// update pass and fail marks
	if(marks>=50){
	passed++;
	}
	 else {
		failed++;
	}

	if (marks>highest){
	highest=marks;
	}

	tot_marks= tot_marks+marks;
	}
	
	//calculating average using explicit cast
	average= (float)tot_marks/num_students;

	//dislpaying summary

	printf("\nPassed: %d\n",passed);
	printf("Failed: %d\n",failed);
	printf("Highest: %d\n",highest);
	printf("Average: %f\n",average);

	return 0;
	}