/*
Read a 808 x 627 colour image in raw format into C

A raw image contains successive 24 bits.  The first 8 bits is red. The second 8 bits is blue. 
The last 8 bits is blue.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


/* Global Declarations */
#define IW	808				// Image Width    
#define IH	627				// Image Height

unsigned char InputImage     [IW][IH][4];  



// Read an input image from a .raw file with double
void ReadRawImage ( unsigned char Image[][IH][4] )
{
	FILE *fp;
	int  i, j, k;
	char filename[50];
	unsigned char temp;

	printf ("Input filename (e.g. test.raw): ");
	scanf  ("%s", filename);
	printf ("\n");

	if ((fp = fopen (filename, "rb")) == NULL)
	{
		printf("Error (ReadImage) : Cannot read the file!!\n");
		exit(1);
	}

	for ( i=0; i<IW; i++)
	{
		for ( j=0; j<IH; j++)
		{
			for (k = 0; k < 3; k++)       // k = 0 is Red  k = 1 is Green K = 2 is Blue
			{
				fscanf(fp, "%c", &temp);
				Image[i][j][k] = (unsigned char) temp;
			}
			Image[i][j][3] = (unsigned char) 0;         // alpha = 0.0
		}
	}
	fclose(fp);

}

void main ( )
{
	
	ReadRawImage ( InputImage );

}

