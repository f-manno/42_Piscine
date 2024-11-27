int  check(char *str)
{
 char num;

 num = 1;
 while (*str != ' ')
 {
     str++;
 }
 while (*str == '+'  || *str == '-')
 {
     if (*str == '-')
     num = num * (-1) ;
     str++;
 }
 if (num == -1)
     return(1);
 else 
     return (0);
}
