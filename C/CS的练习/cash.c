#include <stdio.h>

int main(void) {
    int amount;
    while(1) {
    printf("What is the amount of change owed to the customer (in cents)? ");
    scanf("%i",&amount);
    if(amount < 0) {
        continue;
    }
    else {
        break;
    }
    }
    
    int quarter = amount / 25;
    int one_dime = (amount - 25 * quarter) / 10;
    int five_cents = (amount - 25 * quarter - 10 * one_dime) / 5;
    int cent = amount - 25 * quarter - 10 * one_dime - 5 * five_cents;
    int sum = quarter + one_dime + five_cents + cent;

    printf("At least,the number of coin is %i,%i quarters,%i one_dime,%d five_cents,and%d 。/cent.",sum,quarter,one_dime,five_cents,cent);

    return 0;
}