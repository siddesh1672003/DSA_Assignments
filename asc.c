#include<stdio.h>

struct Student1 
{
	int roll_no;
	char name[50];
	float percentage;
};

int main()
{
	struct Student1 s[5];
	struct Student1 temp;
	int i, j; 
	
	//For taking input from the user 
	for(i = 0; i < 5; i++)
	{
		printf("Enter Student %d Roll Number, Name and Percentage : ", i+1);
		scanf("%d%s%f", &s[i].roll_no,s[i].name,&s[i].percentage);
	}
	
	// Sorting data in increasing order of Roll Numbers
	for(i = 0; i < 4; i++)
	{
		for(j = i+1; j < 5; j++)
		{
			if(s[j].roll_no < s[i].roll_no) // sorting condition
			{
				// swap
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}	
	
	// To display sorted data as output
	for(i = 0; i < 5; i++)
	{
		printf("Roll Number is  : %d\n", s[i].roll_no);
		printf("Name is : %s\n", s[i].name);
		printf("Percentage is : %f\n", s[i].percentage);
		printf("\n");
	}
	
	return 0;
}
