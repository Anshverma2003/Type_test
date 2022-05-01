#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

void check_error_in_typing(char s[])
{    float Accuracy;
    int length_of_string = strlen(s) - 1;
    int i = 0;
    char j = 97; 
    int count = 0;
    while (i < length_of_string && j <= 122)
    {

        if (s[i] != j)
        {

            printf("\033[31m%c: \033[0m", s[i]);
            count++;
        }
        i++;
        j++;
    }
    printf("\t\033[34m no of error in writting \033[0m \033[31m%d\033[0m", count);
   Accuracy =((( length_of_string-count)*100)/26);
   printf("\nAccuracy::- %.2f percent",Accuracy);
}

int main()
{
    char choice;
    char name[50];
    char repeat;

        printf("\n\n\n");
        printf("\t\033[31m                       --------        WELCOME TO TEST YOUR TYPING          -----------\033[0m\n");
        printf("\033[34mEnter your choice\033[0m\n");
        printf("\033[33mPress \033[32m's'\033[0m \033[33mto start and \033[32m'e'\033[0m \033[33mto exit\033[0m \n");
        scanf("%c", &choice);
        fflush(stdin);
        do{
        if (choice == 's')
        {

            char s[100];

            printf("\033[34m----   Enter your name\033[0m \n ");
       
            gets(name);

            printf("\033[33mHii %s \033[0m\n", name);
            Sleep(1000);
            printf("\033[34mIn this test you have to write the english alphebets from (A-Z)\033[0m\n");
            Sleep(3000);
            printf("\033[33m------  write the alphabet (a-z) !\033[0m\n");
            Sleep(200);
            float count;
            count = strlen(s) - 1;
            time_t start, end;
            start = time(NULL);

            fgets(s, 100, stdin);
            end = time(NULL);
            printf("\033[33mTime taken to print (a-z) is\033[0m \033[32m %.2f seconds\033[0m\n", difftime(end, start));
            fflush(stdin);

            check_error_in_typing(s);

            printf("\n\033[31mThe letter per second (L.P.S) %.2f\033[0m",count / difftime(end, start));
            
            Sleep(2000);
            printf("\n\033[34m To type again enter \033[0m\033[33m'r'\033[0m or press any key to EXIT\n");
            scanf("%c", &repeat);
            fflush(stdin);
        }
        else(choice=='e');
        {
            printf("\033[32mThank you for visiting :-)\033[0m\n");
        }
    } while (repeat == 'r');

    return 0;
}