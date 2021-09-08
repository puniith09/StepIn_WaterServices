#include"prototypes.h"
void customer(void)
{

	system("cls");
	printf("                    ************************************************\n                                      WELCOME\n                    ************************************************\n\n");
	printf("               TYPE OF WATER--->\n\n               1. Water\n\n               2. Hot water\n\n                      OR\n\n               3. Back To Main Menu\n\n   Enter Your Choice  -->");
	int k;
	scanf("%d",&k);
		int wait;
	//printf("In progress :");
	for(wait=0;wait<=50000;wait++)
	{
		printf("\rIn progress : %d",wait/500);
	}
	if(k==1)
	{
		system("cls");
		water();
	}
	else if(k==2)
	{
		system("cls");
		hotwater();
	}
	else if(k==3)
	{
		system("cls");
		mainmenu();
	}
	else
	{
		printf("Wrong Input !Please Re-enter The Correct Option......\n\n");
		customer();
	}
}