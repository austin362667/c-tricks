#include<stdio.h>
#include<string.h>

void myMemcpy(void*dest, void*src, size_t n){
   // Typecast addresses to (char *)
   char*charDest = (char*)dest;
   char*charSrc = (char*)src;
   // Copy contents from src[] to dest[]
   for (int i=0; i<n; i++)
       charDest[i] = charSrc[i];
}
