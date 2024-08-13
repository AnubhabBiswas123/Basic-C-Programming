
#include <stdio.h>
int main()
{
    FILE *fs;
    char name[100];
    int roll;
    float marks;

    fs = fopen("structure2.c", "r");

    if (fs == NULL)
    {
        puts("Cannot open File");
        return 0;
    }

    fscanf(fs, "%d %f %s",&roll,&marks,name);
    printf("%d %f %s\n",roll,marks,name);

    while (fscanf(fs, "%d %f %s ",&roll,&marks,name) == 3)
        printf("%d %f %s\n",roll,marks,name);

    fclose(fs);

    return 0;
}

