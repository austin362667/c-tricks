#include "mystdlib.h"

int main()
{
   char csrc[] = "Hello, world!";
   char cdest[100];
   printf("\n===Before Copy===\n");
   printf("Inited source string is %s\t\n", csrc);
   printf("Inited destination string is %s\t\n", cdest);
   myMemcpy(cdest, csrc, strlen(csrc)+1);
   printf("\n===After Copy===\n");
   printf("Copied source string is %s\t\n", csrc);
   printf("Copied destination string is %s\t\n", cdest);

   printf("\n");

   int isrc[] = {0, 1, 2, 3, 4, 5};
   int n = sizeof(isrc)/sizeof(isrc[0]);
   int idest[n], i;
   printf("\n===Before Copy===\n");
   printf("Inited source int array is:\t");
   for (i=0; i<n; i++)
     printf("%d ", isrc[i]);
   printf("\nInited destination int array is:\t");
   for (i=0; i<n; i++)
     printf("%d ", idest[i]);
   myMemcpy(idest, isrc,  sizeof(isrc));
   printf("\n\n===After Copy===\n");
   printf("Copied source int array is:\t");
   for (i=0; i<n; i++)
     printf("%d ", isrc[i]);
   printf("\nCopied destination int array is:\t");
   for (i=0; i<n; i++)
     printf("%d ", idest[i]);
   return 0;
}
