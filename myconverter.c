#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //show the usage and return
    if (argc < 2)
    {
        printf("\n\033[01;37mConvert passed in arguments to ASCII and HEXADECIMAL\n");
        printf("Usage: converter [ARG1] [ARG2] ...\033[0m\n\n");
        return 1;
    }
    //iterate through arguments
    for (int i = 0; i < argc; i++)
    {
        if (i > 0)
        {
            char c; //initialize char for iterating through chars
            int n = strlen(argv[i]); //get length of arg
            //iterate though chars in arg and show ascii equivalent
            printf("\033[01;31mASCII\n");
            for (int j = 0; j < n; j++)
            {
                c = argv[i][j];
                printf("\033[01;37m%c:\033[01;36m%i ", c, c);
            }
            printf("\n");
            //iterate though chars in arg and show hexadecimal equivalent
            printf("\033[01;31mHEXADECIMAL\n");
            for (int j = 0; j < n; j++)
            {
                c = argv[i][j];
                printf("\033[01;37m%c:\033[01;36m%x ", c, c);
            }
            printf("\033[0m\n");
        }
        printf("\n");
    }
}
