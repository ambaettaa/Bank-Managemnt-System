#include <stdio.h>
#include <string.h>
#include <windows.h>


//structure for details and items
struct Details{
    int pin;
    int save_pin;
    int balance1,choice1, deposit, withdraw;
    int option;
    int balance, choice;
    int amount1;
    
};
int divider (){
     for (int i = 0; i < 72; i++ ){
        printf("-");
     }
}

//Main menu, Check Balance
int balance(){
    struct Details b;
    system("cls");
    b.save_pin = 4576;
    b.balance1 = 100000.00; //stored pin

    printf("\n******************** CHECKING BALANCE ********************\n");
    divider();
    pin:
    printf("\nEnter Your pin: ");
    scanf("%d", &b.pin);
    
    if(b.pin == b.save_pin){
        printf("\nCurrent balance : %d", b.balance1);
            printf("\n1. Deposit");
            printf("\n2. Witndraw");
            printf("\n3. Back to Main Menu");
            printf("\nEnter an option: ");
            scanf("%d", &b.choice1);
              
            FILE * fp;
    if (fp = NULL) {
        printf("Error Opening file!");
        return 0;
    }
    fp = fopen("balance.txt", "w");

    fprintf(fp,"Balance: %d", b.balance1);
    fscanf(fp, "%d", b.balance1);
 printf("\n\nBalance file name : balance.txt");
    fclose(fp);

            //switch opertion for balance menu
            switch (b.choice1){

                //Checking Balance , deposisting Money
                case 1: 
                system("cls");
                printf("\n******************** DEPOSITING MONEY ********************\n");
                divider();
                printf("\nEnter amount to be deposited: ");
                    scanf("%d", &b.deposit);
                    b.balance1 += b.deposit;
                    printf("%d HAS BEEN DEPOSITED\nCURRENT BALANCE: %d", b.deposit, b.balance1);
                        break;
                //Checking Balance, Withdrawing Money
                case 2: system("cls");
                int balance2;
                        printf("\n******************** WITHDRAWING MONEY ********************\n");
                        divider();
                        printf("\nEnter amount to withdraw: ");
                        scanf("%d", &b.withdraw);
                        balance2 = b.balance1 - b.withdraw;
                                if (b.withdraw > balance2){
                                printf("\nINSUFFICIENT BALANCE!");
                        } else 
                        printf("%d HAS BEEN WITHDRAWN \n CURRENT BALANCE: %d", b.withdraw, balance2);
                     break;
                //Checking balance, Back
                     case 3:
                    } 
        } else {
        printf("\n INCORECT PIN!\n");
          goto pin;
        }  
    }

      // Main Menu, Buy Airtime
int buyairtime(){
   struct Details f;
   system("cls");
    f.save_pin = 4576;
    int phone;

    pin:
    printf("\n*********************** BUY AIRTIME ********************\n");
    divider();
    printf("\nEnter Your pin: ");
    scanf("%d", &f.pin);
    if (f.pin == f.save_pin){
        printf("1. \nBuy Airtime for self");
        printf("2. \nBuy Airtime for others");
        printf("\nEnter your choice: ");
        scanf("%d", f.option);
        switch (f.option){
            case 1: printf("\nEnter amount of airtime:  ");
                    scanf("%d", &f.amount1);
                printf("\n%d HAS BEN CREDITED TO %d", f.amount1, phone);
                break;

            case 2: printf("Enter phone number: ");
                    scanf("%d", &phone);
                    printf("Enter amount of airtime:  ");
                    scanf;
        }
    }
}
int main(){
    struct Details m;
system("cls"); 
    //menu
   
    menu:
    printf("\n************************** WELCOME TO BANK APP **************************\n");
    divider();
        printf("\n1. Check Balance");
        printf("\n2. Buy Airtime");
        printf("\n3. Transfer Money ");
        printf("\n4. Exit App");
    printf("\nEnter a number to proceed with transaction: ");
    scanf("%d", &m.choice);
    getchar();

    //if/ else condition for the choice
    if (m.choice > 4){
        printf("\nInvalid Choice! Enter correct option\n");
        goto menu;
    } else 
    switch (m.choice){
        case 1: balance();
        break;

        case 2: buyairtime();
        break;
    }

    return 0;
}