#include<stdio.h>

int main()
{
int i;
int ans1,ans2,ans3,ans4,ans5;
int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
int total1,total2,total3,

printf("Welcome to the Game\n\n");

printf("> press 7 to start the game\n");
printf("> press 0 to quite the game\n");

scanf("%d", &i);

if(i==7)
{
	printf("the game has stated\n\n");
}
else if(i==0)
{
	printf("The game has ended\n\n");
}
else 
{
	printf("Invalid\n\n");
}
if(i==7)
{
	printf("1) which one is the first search engine in internet?\n\n");
	printf("1) Google\n");
	printf("2) Archie\n");
	printf("3) Wais\n");
	printf("4) Altavista\n");

	printf("Enter you Answer : ");
	scanf("%d", &ans1);
	if(ans1==2)
	{
		printf("Correct Answer : \n");
		point1 = 5;
		printf("you have scored %d point\n", point1);
	}
	else
	{
		printf("Wrong Answer\n");
		point01=0;
		printf("you have scored %d point\n", point01);
	}
	printf("2) which one is the first web browser invented in 1990?\n\n");
	printf("1) Internent explorer\n");
	printf("2) mosaic\n");
	printf("3) Mozilla\n");
	printf("4) Nexus\n");

	printf("Enter your Answer: ");
	scanf("%d", &ans2);

	if(ans2==4)
	{
		printf("Correnct Answer");
		point2 = 5;
		printf("You have Scored %d point\n", point2);
	}
	else
	{
		printf("Wrong Answer");
		point02 = 0;
		printf("You have scored %d point\n", point02);

	}
	
	printf("3) First computer virus is know as?\n\n");
	printf("1) Rabbit\n");
	printf("2) Creeper Virus\n");
	printf("3) ELK Cloner\n");
	printf("4) SCA Virus\n");

	printf("Enter you Answer: ");
	scanf("%d", &ans3);
	if(ans3==2)
	{
		printf(" Correct Answer");
		point3 = 5;
		printf("You have scored %d point\n", point3);
	}
	else 
	{
		printf(" Wrong Answer ");
		point03 = 0;
		printf("you have scored %d point\n", point03);
	}

	printf("4) fireWall in computer is used for?\n\n");
	printf("1) Security\n");
	printf("2) Data transmission\n");
	printf("3) Monitoring\n");
	printf("4) Authenfification\n");

	printf("Enter you Answer: ");
	scanf("%d", &ans4);
	
	if(ans4 == 1)
	{
		printf("Correct answer ");
		point4 = 5;
		printf("You have scored %d point\n", point4);
	}
	else
	{
		printf("wrong answer ");
		point04 = 0;
		printf("you have scored %d point\n", point04);
	}

	 printf("5) which of these following is not a  database management software?\n\n");
        printf("1) Mysql\n");
        printf("2) Oracle\n");
        printf("3) Cobal\n");
        printf("4) Sybase\n");

        printf("Enter you Answer: ");
        scanf("%d", &ans5);

        if(ans5 == 3)
        {
                printf("Correct answer ");
                point5 = 5;
                printf("You have scored %d point\n", point5);
        }
        else
        {
                printf("wrong answer ");
                point05 = 0;
                printf("you have scored %d point\n", point05);
        }

	}
	return 0;
}
