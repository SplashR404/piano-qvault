#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#include <dos.h>

int main()
{
	int key;

	printf("\t\t\tWelcome to Piano Tiles in C by Splash\n\n");
	sleep(2);
	printf("The instructions are simple:\n\n");
	sleep(2);
	printf("Press any key from the middle row of your keyboard (From A to \"),\nEach key plays a different piano note.\n\n");
	sleep(5);	
	printf("\n\nEntering piano mode..... ");
	sleep(2);
	system("cls");

	printf("PIANO MODE:\n\t\tPress any middle row key, ENTER to QUIT: \n\n");
	
	while ((key = getch()) != 13) // ENTER
	{
	
		if (key == 'a')
		{
			PlaySound("piano\\piano0.wav", NULL, SND_ASYNC);
		}
		else if (key == 's')
		{
			PlaySound("piano\\piano1.wav", NULL, SND_ASYNC);
		}
		else if (key == 'd')
		{
			PlaySound("piano\\piano2.wav", NULL, SND_ASYNC);
		}
		else if (key == 'f')
		{
			PlaySound("piano\\piano3.wav", NULL, SND_ASYNC);
		}
		else if (key == 'g')
		{
			PlaySound("piano\\piano4.wav", NULL, SND_ASYNC);
		}
		else if (key == 'h')
		{
			PlaySound("piano\\piano5.wav", NULL, SND_ASYNC);
		}
		else if (key == 'j')
		{
			PlaySound("piano\\piano6.wav", NULL, SND_ASYNC);
		}
		else if (key == 'k')
		{
			PlaySound("piano\\piano7.wav", NULL, SND_ASYNC);
		}
		else if (key == 'l')
		{
			PlaySound("piano\\piano8.wav", NULL, SND_ASYNC);
		}
		else if (key == ';')
		{
			PlaySound("piano\\piano9.wav", NULL, SND_ASYNC);
		}
		else if (key == '\'')
		{
			PlaySound("piano\\piano10.wav", NULL, SND_ASYNC);
		}
		else 
		{
			printf("\nWRONG KEY! \n");
		}
	}
	
	printf("\n--------------\nSee you soon!\n");
	sleep(1);
	
	return 0;
}
