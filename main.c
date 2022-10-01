#include <stdio.h>
#include <math.h>

int main(void) {
	//Initialization of main dish variables
	char addMain;
	int mainSelection = 0;
	float mainPrices[] = {10.99, 12.99, 8.99, 7.99, 7.99};
	char* mainOptions[] = {"Cheeseburger", "Double Cheeseburger", "Hotdog", "BLT Sandwich", "Chicken Burger"};

	//Initialization of side dish variables
	char addSide;
	int sideSelection = 0;
	float sidePrices[] = {3.49, 3.99, 3.49};
	char* sideOptions[] = {"Fries", "Sweet Potato Fries", "Onion Rings"};

	//Welcome + prompt for main dish
	printf("Welcome to SoCSBurger!\n\nCan I get you started with a main?\nEnter Y, y, N, n: ");
	scanf("%c", &addMain);

	//If yes to main, show main dish selection
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

	//Clear scanf buffer
	fflush(stdin);

	//Prompt for side dish
	printf("\nWould you like a side?\nEnter Y, y, N, n: ");
	scanf("%c", &addSide);

	//If yes to side, show side dish selection
	if(addSide == 'y' || addSide == 'Y') {
		printf("\nSides selection opening...\n\n");
		printf("Here are our side dish options\n");
		printf("	1. Fries                      $3.49\n");
		printf("	2. Sweet Potato Fries         $3.99\n");
		printf("	3. Onion Rings                $3.49\n");
		printf("Enter your choice: ");
		scanf("%d", &sideSelection);

		//If valid input, show selection
		if(sideSelection == 1 || sideSelection == 2 || sideSelection == 3) {
			sideSelection = sideSelection - 1;
			printf("\n%s Selected!\n", sideOptions[sideSelection]);
		}
		else {
			printf("\nNo side selected\n");
		}
	}

	//Clear scanf buffer
	fflush(stdin);
}