#include <stdio.h>
#include <string.h>
#include <stdlib.h>





int Kath(char **a, int n, int i);  // mirror fuction //


void main()
{
	char **pin_leksewn, ans='y';
	int i, number, size;
	
	do
	{
		do
		{
			printf("Give the number of the words:");  // number of lines //
			fflush(stdin);
			scanf("%d", &number);
			if (number<1)
				printf("Wrong number!\n");
		}while (number<1);  // check for negative numbers //
		
		do
		{
			printf("Give the size of the bigger word:");  
			fflush(stdin);
			scanf("%d", &size);
			if (size<1)
				printf("Wrong size!\n");
		}while (size<1);  // check for negative numbers //

		pin_leksewn = (char **) malloc (number * sizeof(char));  // create the lines //

		for (i=0;i<number;i++)
			pin_leksewn[i] = (char *) malloc ((size+1) * sizeof(char)); // create the columns //
	
		for (i=0;i<number;i++)
		{
			fflush(stdin);
			printf("Give the %d word:", i);
			gets(pin_leksewn[i]);  // assign the words to the array //
		}
	
		Kath(pin_leksewn, number-1, i=0);  // mirror fuction //

		printf("Press any key to repeat or 'e' for exit: "); 
		fflush(stdin);
		scanf("%c", &ans);

	}while (ans!='e');  // repeat the program //
}





int Kath(char **a, int n, int i)
{
	int x;

	if (i==n || n<i)  // if the variables that used for compare are equal or if the variable which is in the end overcomes the one which is in the first line-word then the array is mirrored //
	{
		printf("\nThe array is mirrored!\n\n");
		return(0);
	}

	x = strcmp(a[i], a[n]);  // compare lines-words througth the function strcmp //

	if (x==0)  // if x=0 then the words are equal //
	{
		x=Kath(a, n-1,i+1); // recursion //
		return(x);
	}
	else   // else the array is not mirrored! //
	{
		printf("\nThe array is not mirrored!\n\n");
		return(1);
	}

}









	
