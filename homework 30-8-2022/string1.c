#include <stdio.h>
int main()
{
   char s[1000], r[1000];
   int start, stop, count = 0;

   printf("Input \n");
   gets(s);

   while (s[count] != '\0')
      count++;

   stop = count - 1;

   for (start = 0; start < count; start++) {
      r[start] = s[stop];
      stop--;
   }

   r[start] = '\0';

   printf("%s\n", r);

   return 0;
}