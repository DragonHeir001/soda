#include <stdio.h>
char get_answer(double money) {
    char answer;
    scanf(" %c", &answer);
    if (answer == 'm') {
        printf("Money: %lf\n", money);
        return get_answer(money);
    }
    return answer;
}
int main() {
    double money = 3.20;
    char answer;
    printf("6: !!STARDROP!!\n" "4: Coke $2.43\n" "1: Water $1.00\n" "3: Sprite $2.43\n" "2: Apple Juice 4.52\n" "5: Pepsi $3.21\n" "7:Fanta $2.43\n\n");
    printf("I N S E R T   I T E M   N U M B E R:\n");  
    answer = get_answer(money);
    if (answer == '1') {
        printf("*you select 3-1 and insert 3 quarters, 2 dimes, and 5 pennies*\n");
        printf("*you wait a bit but the machine doesn't do anything, it must've broke*\n");
        return 0;
    }
    if (answer == '2') {
        printf("*When you look at your money you realize that you don't have enough so\n");
        printf("so you steal money*\n");
        printf("you went to jail, at least you have your juice, ...right?\n\n\n");
        printf("no, they took that\n");
        return 0;
    }
    if (answer == '3') {
        printf("*you select 4-3 and insert 3 quarters, 2 dimes, and 48 pennies*\n");
        printf("*the machine glitches and everything falls out!*\n");
        printf("*Lucky you!*\n");
        return 0;
    }
    if (answer == '4') {
        printf("*you select 2-4 and insert 3 quarters, 2 dimes, and 48 pennies*\n*");
        printf("you drink it and go on with your day\n");
        return 0;
    }
    if (answer == '5') {
        printf("*you select 6-5 and insert all the money you have* (3 quarters, 2 dimes, and 205 pennnies)\n");
        printf("*you wait but when you check the screen you find out that you still need one cent!*\n");
        printf("*you look for ten minutes before giving up*\n");
        printf("as you walk away you notice that someone else went to the vending machine and got your Pespsi*\n");
        return 0;
    }
    if (answer == '6') {
        printf("*you select 1-6 and insert a penny*\n");
        printf("*it rattles a bit but doesn't provide the stardrop*\n");
        printf("*you repeat this until your wallet has run dry so...\n");
        printf("finally you beat up the vending machine to recive the stardrop*\n");
        printf("You found a stardrop! Your mind is filled with thoughts of. . . ");
        printf("[insert favorite thing here]\n\n");
        printf("Your maximum energy has increased.\n");
        return 0;
    }
    if (answer == '7') {
        printf("*you select 7-7 and insert 3 quarters, 2 dimes, and 48 pennies*\n*");
        printf("you drink it and go on with your day\n");
        return 0;
    }

    return 0;
}
