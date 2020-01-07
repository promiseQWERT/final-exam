#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
    double min;
    int a;
    min = atof(argv[1]);
    
      for(a = 1;a < argc;a++)
       {
          if(atof(argv[a])<min)
          {
              min = atof(argv[a]);
          }
        }
        printf("Min parameter is %f",min);
}
