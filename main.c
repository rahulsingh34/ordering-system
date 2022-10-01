#include <stdio.h>

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

	//Initialization of drink varibles
	char addDrink;
	int drinkSelection = 0;
	float drinkPrices[] = {2.49, 2.99, 2.99, 2.99};
	char* drinkOptions[] = {"Lemonade", "Iced Tea", "Orange Juice", "Apple Juice"};

	//Initialization of dessert varibles
	char addDessert;
	int dessertSelection = 0;
	float dessertPrices[] = {2.49, 1.49, 2.99};
	char* dessertOptions[] = {"Doughnut", "Chocolate Chip Cookies", "Cinnamon Roll"};

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

	//Prompt for drink
	printf("\nWould you like a drink?\nEnter Y, y, N, n: ");
	scanf("%c", &addDrink);

	//If yes to side, show drink selection
	if(addDrink == 'y' || addDrink == 'Y') {
		printf("\nDrinks selection opening...\n\n");
		printf("Here are our drink options\n");
		printf("	1. Lemonade                   $2.49\n");
		printf("	2. Iced Tea                   $2.99\n");
		printf("	3. Orange Juice               $2.99\n");
		printf("	4. Apple Juice                $2.99\n");
		printf("Enter your choice: ");
		scanf("%d", &drinkSelection);

		//If valid input, show selection
		if(drinkSelection == 1 || drinkSelection == 2 || drinkSelection == 3 || drinkSelection == 4) {
			drinkSelection = drinkSelection - 1;
			printf("\n%s Selected!\n", drinkOptions[drinkSelection]);
		}
		else {
			printf("\nNo drink selected\n");
		}
	}

	//Clear scanf buffer
	fflush(stdin);

	//Prompt for dessert
	printf("\nWould you like a dessert?\nEnter Y, y, N, n: ");
	scanf("%c", &addDessert);

	//If yes to side, show dessert selection
	if(addDessert == 'y' || addDessert == 'Y') {
		printf("\nDessert selection opening...\n\n");
		printf("Here are our dessert options\n");
		printf("	1. Doughnut                   $2.49\n");
		printf("	2. Chocolate Chip Cookie      $1.49\n");
		printf("	3. Cinnamon Roll              $2.99\n");
		printf("Enter your choice: ");
		scanf("%d", &dessertSelection);

		//If valid input, show selection
		if(dessertSelection == 1 || dessertSelection == 2 || dessertSelection == 3 || dessertSelection == 4) {
			dessertSelection = dessertSelection - 1;
			printf("\n%s Selected!\n", dessertOptions[dessertSelection]);
		}
		else {
			printf("\nNo dessert selected\n");
		}
	}

	//Thank you
	printf("Thank you for your order! Computing total...");
}