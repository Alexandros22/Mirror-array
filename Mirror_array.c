#include <stdio.h>
#include <string.h>
#include <stdlib.h>





int Kath(char **a, int n, int i);  // mirror  //


void main()
{
	char **pin_leksewn, ans='y';
	int i, number, size;
	
	do
	{
		do
		{
			printf("Give the number of the words:");  // ekxwrhsh twn grammwn //
			fflush(stdin);
			scanf("%d", &number);
			if (number<1)
				printf("Wrong number!\n");
		}while (number<1);  // elegxos gia arnhtikes times //
		
		do
		{
			printf("Give the size of the bigger word:");  // ekxwrhsh twn sthlwn //
			fflush(stdin);
			scanf("%d", &size);
			if (size<1)
				printf("Wrong size!!\n");
		}while (size<1);  // elegxos gia arnhtikes times //

		pin_leksewn = (char **) malloc (number * sizeof(char));  // dhmiourgia grammwn //

		for (i=0;i<number;i++)
			pin_leksewn[i] = (char *) malloc ((size+1) * sizeof(char)); // dhmiourgia sthlwm //
	
		for (i=0;i<number;i++)
		{
			fflush(stdin);
			printf("Give the %d word:", i);
			gets(pin_leksewn[i]);  // ekxwrhsh twn leksewn ston pinaka //
		}
	
		Kath(pin_leksewn, number-1, i=0);  // sunarthsh kathreuths //

		printf("Press any key to repeat or 'e' for exit: ");  // erwthsh epanalhpshs //
		fflush(stdin);
		scanf("%c", &ans);

	}while (ans!='e');  // epanalhpsh tou programmatos //
}





int Kath(char **a, int n, int i)
{
	int x;

	if (i==n || n<i)  // an oi metavlhtes pou xrhsimopoiountai sth sugrish einai ises mesaia h an kseperash h metavlhth pou einai sto telos auth pou einai sth prwth grammh-leksh tote o pinakas kathreutizetai //
	{
		printf("\nO pinakas kathreutizetai!!\n\n");
		return(0);
	}

	x = strcmp(a[i], a[n]);  // sugrish grammwn-leksewn mesw ths sunarthshs strcmp //

	if (x==0)  // an to x=0 tote oi lekseis einai ises //
	{
		x=Kath(a, n-1,i+1); // anadromh //
		return(x);
	}
	else   // alliws o pinakas den kathreutizetai //
	{
		printf("\nO pinakas den kathreutizetai!!\n\n");
		return(1);
	}

}









	