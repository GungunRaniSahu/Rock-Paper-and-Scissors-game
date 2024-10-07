/*Rock,Paper and Scissors game*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int User_Choice , Computers_Choice ;
    int num;

    srand(time(0));

    Computers_Choice = rand()%3 + 1;
    printf("....Welcome to Rock Paper Scissors game....");

    printf("Enter your choice:- \n 1. Rock \n 2. Paper \n 3. Scissors\n");
    scanf("%d" , &num);


    printf("Your Choice : %d\n" , num);
    printf("Computer's Choice : %d\n" , Computers_Choice);

    if(Computers_Choice==num)
    {
        printf("...It's a tie...\n");
    }

    else if((Computers_Choice==1 && num==3) || (Computers_Choice==2 && num== 1) || (Computers_Choice== 3 && num == 2))
    {
        printf("Computer Wins!\n");
    }

    else
    {
        printf("You win!\n");
    }

}
