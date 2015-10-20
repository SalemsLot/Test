

#include <stdio.h>

int main()
{
   int i;
   int Data1[2][2] =  {{1,2},{3,4}};
   int *ptrData;
   
   ptrData = &Data1;    //Casting need to be done to work
                        // Leave that to Malloc

   for(i=0; i<4;i++)
      {
          printf("something = %d  \n",ptrData[i]);

      }

} 	


