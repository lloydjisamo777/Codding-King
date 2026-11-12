
#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    int expiryDay;
    int expiryMonth;
    int expiryYear;
};

int main() {
    struct Product p[100];
    int count = 0;
    int choice, i, search;
    int currentDay, currentMonth, currentYear;
    int expiryDays, currentDays, remainingDays;

    do {
        printf("\n===== FOOD PRODUCT EXPIRY MONITORING SYSTEM =====\n");
        printf("1. Add Food Product\n");
        printf("2. View All Products\n");
        printf("3. Check Expiry Status\n");
        printf("4. Search Food Product\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (count < 100) {
                    printf("\nEnter product name: ");
                    scanf(" %49[^\n]", p[count].name);

                    printf("Enter expiry day: ");
                    scanf("%d", &p[count].expiryDay);

                    printf("Enter expiry month: ");
                    scanf("%d", &p[count].expiryMonth);

                    printf("Enter expiry year: ");
                    scanf("%d", &p[count].expiryYear);

                    count++;

                    printf("\nProduct added successfully!\n");
                } else {
                    printf("\nStorage is full!\n");
                }
                break;

            case 2:
                printf("\n===== PRODUCT LIST =====\n");

                if (count == 0) {
                    printf("No products available.\n");
                }

                for (i = 0; i < count; i++) {
                    printf("\nProduct %d\n", i + 1);
                    printf("Name: %s\n", p[i].name);
                    printf("Expiry Date: %02d/%02d/%04d\n",
                           p[i].expiryDay,
                           p[i].expiryMonth,
                           p[i].expiryYear);
                }
                break;

            case 3:
                printf("\nEnter current day: ");
                scanf("%d", &currentDay);

                printf("Enter current month: ");
                scanf("%d", &currentMonth);

                printf("Enter current year: ");
                scanf("%d", &currentYear);

                currentDays = currentYear * 365
                            + currentMonth * 30
                            + currentDay;

                printf("\n===== EXPIRY STATUS =====\n");

                for (i = 0; i < count; i++) {

                    expiryDays = p[i].expiryYear * 365
                               + p[i].expiryMonth * 30
                               + p[i].expiryDay;

                    remainingDays = expiryDays - currentDays;

                    printf("\nProduct: %s\n", p[i].name);

                    if (remainingDays < 0) {
                        printf("Status: EXPIRED\n");
                    }
                    else if (remainingDays <= 7) {
                        printf("Status: NEAR EXPIRY\n");
                    }
                    else {
                        printf("Status: SAFE\n");
                    }

                    printf("Remaining days (approx.): %d\n",
                           remainingDays);
                }
                break;

            case 4:
                printf("\nEnter product number to search: ");
                scanf("%d", &search);

                if (search >= 1 && search <= count) {
                    printf("\nProduct Found!\n");
                    printf("Name: %s\n", p[search - 1].name);
                    printf("Expiry Date: %02d/%02d/%04d\n",
                           p[search - 1].expiryDay,
                           p[search - 1].expiryMonth,
                           p[search - 1].expiryYear);
                } else {
                    printf("\nProduct not found!\n");
                }
                break;

            case 5:
                printf("\nExiting program. Thank you!\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
