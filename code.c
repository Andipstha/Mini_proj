#include<stdio.h>
#include<stdlib.h>
struct e
{
        char name[40];
        int age;
        float bs;
}emp[50];
int main()
{

    FILE *ft;
    char another, choice;
    char empname[40];
    long int recsize;
    ft=fopen ("EMP.DAT","rb+");
    if(ft==NULL)
    {
       ft=fopen(":EMP.DAT","wb+");
       if (ft==NULL)
    {
           puts("cannot open file");
    }
    recsize=sizeof(ft);
    while(1)
    {
        clrscr();
        
    gotoxy(30,10);
    printf("1.Add Records");
    gotoxy(30,12);
    printf("2.List Records");
    gotoxy(30,14);
    printf("3.Modify Records");
    gotoxy(30,16);
    printf("4.Delete Records");
    gotoxy(30,18);
    printf("0.Exit");
    gotoxy(30,20);
    printf("Your choice");

    fflush (stdin);
    choice=getche();
    switch (choice)
    {
        case '1':
        fseek( ft,0, SEEK_END);
        another='y';
    {         
            printf("\nEnter name age and basic sal.");
            //scanf("%s %d %f",e.name,&e.age,&e.bs);
            //fwrite(&e,recsize,1,ft);
            printf("\nAdd another Record(Y/N)");
            fflush(stdin);
    } 
    break;
    case '2':
            rewind (ft);
            //while ((&e,recsize,1, ft)==1)
            //printf("\n%s %s %d %f",e.name,e.age,e.bs0);
        break;
    case'3':
       another ='y';
        while(another=='Y')
        {
             printf("\nEnter name of employee to modify");
            // scanf("%s",emp.name);

            rewind (ft);
             //while(fread(&e,recsize,1,ft)==1) 
    { 
             /*if(strcmp(e.name,empname)==0)
            { 
                 printf("\nEnter new name,age &bs");
                 scanf("%s %d %f",e.name,&e.age,&e.bs);
                 fseek (ft,-recsize,SEEK_CUR);
                 fwrite (&e,recsize,1, fb);
                 break ;
            } */
    }
    print("\nModify another Record (Y/N)");
    fflush(stdin);
    another=getche();
    }
    break; 
    case '4':
        another ='Y';
        while (another=='Y')
    {
    printf("\nEnter name of employee to delete");
    scanf("%s",empname);

    ft=fopen ("TEMP.DAT","wb");
    rewind(ft);
	    while(fread(&e,recize,1,ft)==1)
	    { 
	        if(strcmp (e.name,empname)!=0)
	        fwrite(&e,recsize,1,ft);
	    } 
    fclose(ft);
    fclose(ft);
    remove("EMP.DAT");
    remove("TEMP.DAT","EMP.DAT");

    ft=fopen("EMP.DAT","rb+");

    prinft ("Delete another Record (Y/N)");
        fflush(stdin);
        another=getche();
    }
    break ;
    case'0':
            fclose(ft);
            exit();
        }
    }
}
}
