#include <stdio.h>
#include <stdlib.h>
#define	LEN 10000
void print(unsigned int array[LEN], int size);

main()
{
	unsigned int array[LEN];
	int c,i, temp, l=0, size;
	printf("datasize max 1000\n");
	printf("cell%d\t", l);
	for(l=0;scanf("%d", &array[l]);l++)
	{
		printf("cell%d\t", l+1);
	}
	size = l;
	//print(array, size);
	for(c=0;c<(size-1);)
        {
                for(i=0,c=0;i<(size-1);i++)
                {
                        if (array[i]>array[i+1])
                        {
                                temp = array[i];
                                array[i] = array[i+1];
                                array[i+1] = temp;
                        }
                        else    {
                                c++;
                        }
                }
	}
	print(array, size);
	//printf("sorted array of %d elements\n", size);
	exit(0);	
}

void print(unsigned int array[LEN], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ", array[i]);
	}
	printf(" array\n");
}
