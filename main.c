#include <stdio.h>
#include <math.h>

int main(void) {
	//Initialization of main dish variables
	char addMain;
	int mainSelection = 0;
	float mainPrices[] = {10.99, 12.99, 8.99, 7.99, 7.99};
	char* mainOptions[] = {"Cheeseburger", "Double Cheeseburger", "Hotdog", "BLT Sandwich", "Chicken Burger"};

	//Welcome + ask for main option
	printf("Welcome to SoCSBurger!\n\nCan I get you started with a main?\nEnter Y, y, N, n: ");
	scanf("%c", &addMain);

	//Main dish selection
	if(addMain == 'y' || addMain == 'Y') {
		printf("\nMains selection opening...\n\n");
		printf("Here are our main dish options\n");
		printf("	1. Cheeseburger               $10.99\n");
		printf("	2. Double Cheeseburger        $12.99\n");
		printf("	3. Hotdog                     $8.99\n");
		printf("	4. BLT Sandwich               $7.99\n");
		printf("	5. Chicken burger             $7.99\n");
		printf("Enter your choice: ");
		scanf("%d", &mainSelection);

		//If valid input, show selection
		if(mainSelection == 1 || mainSelection == 2 || mainSelection == 3 || mainSelection == 4 || mainSelection == 5) {
			mainSelection = mainSelection - 1;
			printf("\n%s Selected!\n", mainOptions[mainSelection]);
		}
		else {
			printf("\nNo main selected\n");
		}
	}



}