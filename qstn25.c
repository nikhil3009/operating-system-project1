#include<stdio.h>
#include<stdbool.h>
struct project
{
 	bool pen ;
	bool paper ;
	bool questionpaper ;
	bool allthree ;
};
int main()
{
	int n=3;
	struct project  s[n];
	s[0].pen=true;		
	s[0].paper = false;
	s[0].questionpaper = false;
	s[0].allthree= false;
	s[1].pen=false;		
	s[1].paper = true;
	s[1].questionpaper = false;
	s[1].allthree = false;
	s[2].pen=false;		
	s[2].paper = false;
	s[2].questionpaper = true;
	s[2].allthree = false	;
	while(s[0].allthree==false||s[1].allthree==false||s[2].allthree==false)
	{
		int ch1,ch2;
		printf("\nResources:\n1.pen\n2.paper\n3.question paper\n Enter the two resources to be placed on the shared table: ");
		scanf("%d%d",&ch1,&ch2);
		if(ch1==1 && ch2==2 && s[2].allthree==false)
		{
			s[2].allthree=true ;
			printf("Third student has completed the task\n");
		}
		if(ch1==2 && ch2==3 && s[0].allthree==false)
		{
			s[0].allthree=true;
			printf("First Student has completed the task\n");
		}
		if(ch1==1 && ch2==3 && s[1].allthree==false)
		{
			s[1].allthree=true;
			printf("Second Student has completed the task\n");
		}
	}
	printf("All the students now have completed their respective tasks succesfully\n");
	return 0;
}

