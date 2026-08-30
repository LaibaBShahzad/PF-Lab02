#include<stdio.h>
int main () 
{

    char double_quote[] = "\\\"";
    char back_slash[] = "\\";
    char newline_break[] = "\\n";
    char tab_stop[] = "\\t";
    char percent_sign[] = "\%";
    
    printf("=====C ESCAPE SEQUENCES REFERENCE=====\n ");
    printf("To print a double quote,write: \t\t%s",double_quote);
    printf("\nTo print a backslash,write: \t\t\t%s",back_slash);
    printf("\nTo insert a newline break,write:\t\t%s",newline_break);
    printf("\nTo insert a horizontal tab stop,write:\t%s",tab_stop);
    printf("\nTo print a percent sign,write:\t\t\t%s",percent_sign);

  return 0;
}
