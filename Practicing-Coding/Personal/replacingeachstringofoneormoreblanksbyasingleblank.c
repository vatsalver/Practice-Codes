#include <stdio.h>
int main()
{
   int c;  /* Present Charecter */
   int old_c; /* Previous Charecter */

   while((c = getchar()) != EOF) {
      if(old_c == ' ' && c != ' '){
         putchar(' ');
         putchar(c);
      }else if(c != ' '){
         putchar(c);
      }
      old_c = c;
   }
   return 0;
}