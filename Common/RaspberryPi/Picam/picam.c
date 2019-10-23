#include <stdio.h>
#include <stdlib.h>

char menu()
{
        char option;

        // Clear
        system("clear");

        printf(" ====================================== \n");
        printf(" =    Koreatech Simple Camera Program \n");
        printf(" =     - 1. Camera[C/c] \n");
        printf(" =     - 2. Video[V/v] \n");
        printf(" =     - 3. Exit[E/e] \n");

        printf(" =       >>>> Select state : ");
        scanf("%c", &option);

        if(option == 'C' || option == 'c')
                return 'c';
        if(option == 'V' || option == 'v')
                return 'v';
        if(option == 'E' || option == 'e')
                return 'e';

        return 0;
}

void main()
{
//      system("raspistill -o test.jpg");
//      system("raspivid -o vid.h264");
        char option;
        char command[100];
        char file_name[100];
        char full_file_name[100];
        char delay_time[100];

        int len_string = 100;
        char bye_msg[100] = "bye bye my friend!!";

        while(1)
        {
                option = menu();

                if(option == 'c')
                {
                        strcpy(command, "raspistill ");
                        printf("\n\t - file name : ");
                        scanf("%s", file_name);

                        strcat(file_name, ".jpg");

                        strcat(command, "-o ");
                        strcat(command, file_name);
                       // Set time
                        printf("\n\t - time[sec] : ");
                        scanf("%s", delay_time);
                        strcat(command, " -t ");
                        strcat(command, delay_time);
                        strcat(command, "000");

                        system(command);
                }
                else if(option == 'v')
                {
                        strcpy(command, "raspivid ");

                        // Set file name
                        printf("\n\t - file name : ");
                        scanf("%s", file_name);

                        strcat(file_name, ".h264");

                        strcat(command, "-o ");
                        strcat(command, file_name);

                        // Set  time
                        printf("\n\t - time[sec] : ");
                        scanf("%s", delay_time);

                        strcat(command, " -t ");
                        strcat(command, delay_time);
                        strcat(command, "000");

                        printf("%s\n", command);
                        system(command);
                }
                else if(option == 'e')
                {
                        printf("\n Bye bye~~~ \n");
                        exit(1);
                }
                else
                {
                        // TODO
                }
        }
}

