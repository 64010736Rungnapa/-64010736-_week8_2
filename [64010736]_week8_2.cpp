#include <stdio.h>
#include <conio.h>

int main()

{
	int score;
	printf("Enter score = ");
	scanf("%d",&score);

if(score>=0&&score<=100){ 
	if(score>=80)
	printf("grade 4",score);

	else if(score>=75)
	printf("grade 3.5",score);

	else if(score>=70)
	printf("grade 3",score);

	else if(score>=65)
	printf("grade 2.5",score);

	else if(score>=60)
	printf("grade 2",score);

	else if(score>=55)
	printf("grade 1.5",score);

	else if(score>=50)
	printf("grade 1",score);

	else
	printf("grade 0",score);
	}			
else
	printf("score error %d !!",score);
	getch();
}
