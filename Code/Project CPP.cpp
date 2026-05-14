#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
#include<stdlib.h>
#include <iomanip> // For setw function
#include<windows.h>
using namespace std;


// menu's files
ifstream ItalianExpressOut("Italian Express.txt");
ifstream PaolaCosaNostraOut("Paola's Cosa Nostra.txt");
ifstream ItalianSliceOut("Italian Slice.txt");
ifstream TuscanyCourtyardOut("Tuscany Courtyard.txt");
ifstream EImomentoOut("EI Momento.txt");
ifstream HaveliOut("Haveli Restaurant.txt");
ifstream SaltAndPepperOut("Salt'n pepper.txt");
ifstream DeraOut("DERA.txt");
ifstream XiwangOut("Xiwang.txt");
ifstream PFChangsOut("PF Changs.txt");
ifstream ManderianChineseOut("Mandarian Chinese.txt");
ifstream LungFungout("Lung Fung.txt");
ifstream YumChineseAndThai("Yum Chinese and Thai.txt");
ifstream MonalOut("Monal.txt");
ifstream BundoKhanOut("Bundo Khan.txt");
ifstream WasabiOut("Wasabi.txt");
ifstream KaiOut("KAI.txt");
ifstream JushiOut("Jushi.txt");
ifstream FujiyamaOut("Fujiyama.txt");
ifstream SukhiSushiOut("SukhiSushi.txt");
ifstream confirmOut("confirm.txt");

// Italian's
string allItemsInTheMenuOfItalianExpress[19] = { "Baked Lasagna","Fettuccini Alferedo","Eggplant Parmigiana","Chicken Parmigiana","Sausage and Pepper","Turkey Pesto","Baked Rigatoni","Spaghetti with Meat sause","NY Cheese Cake","Choclate Mousse Cake","Tiramisu","Wings","Cheese Rolls","Garlic Bread","Garlic Knots","Meat Balls","Personal Cheese Pizza","Large Cheese Pizza","Jumbo Cheese Pizza" };
float pricesOfItemsInItalianExpress[19] = { 10.25 ,10.25,10.25 ,10.25 ,10.25 ,10.25 ,10.25 ,10.25,10.25,10.25,10.25,20,28,14,17,34,25,30,50 };
string allItemsInTheMenuOfPaolaCosa[19] = { "Spaghetti Bolognese","Chicken Alfredo","Lasagna Bolognese","Fettuccine Carbonara","Penne Arrabbiata","Veggie Panini","Beef Panini","Chicken Pesto Panini","Tiramisu","Chocolate Cake","Cheesecake","Garlic Breadsticks","Mozzarella Sticks","Bruschetta","Caprese Salad", "Buffalo Wings","Margherita Pizza","Pepperoni Pizza","Vegetarian Pizza" };
float pricesOfItemsInPaolaCosa[19] = { 15,18,20,16,14,18,22,20,10,12,10,12,15,10,18,20,20,25,22 };
string allItemsInTheMenuOfItalianSlice[28] = { "Spaghetti Bolognese", "Penne Arrabbiata", "Fettuccine Alfredo", "Risotto Milanese", "Risotto Funghi","Risotto Frutti di Mare", "Lasagna Bolognese", "Grilled Salmon", "Chicken Parmesan", "Veal Marsala","Eggplant Parmesan", "Beef Tenderloin", "Lobster Ravioli", "Shrimp Scampi Linguine", "Garlic Breadsticks","Mozzarella Sticks", "Bruschetta", "Caprese Salad", "Buffalo Wings", "Fried Calamari", "Garlic Knots","Margherita Pizza", "Pepperoni Pizza", "Vegetarian Pizza", "BBQ Chicken Pizza", "Seafood Pizza","White Pizza", "Hawaiian Pizza" };
float pricesOfItemsInItalianSlice[28] = { 15, 14, 18, 20, 16, 22, 20, 28, 25, 30, 22, 35, 32, 26, 12, 15, 10, 18, 20, 25, 14, 20, 25, 22, 28, 30, 24, 26 };
string allItemsInTheMenuOfTuscanyCourtyard[28] = { "Bruschetta", "Caprese Salad", "Garlic Breadsticks", "Mozzarella Sticks", "Fried Calamari","Tomato Basil Soup", "Grilled Vegetable Platter", "Penne Arrabbiata", "Fettuccine Alfredo", "Risotto Funghi","Lasagna Bolognese", "Spaghetti Carbonara", "Risotto Frutti di Mare", "Tortellini Primavera", "Grilled Salmon","Chicken Marsala", "Veal Piccata", "Eggplant Parmesan", "Beef Tenderloin", "Seafood Risotto","Shrimp Scampi", "Margherita Pizza", "Pepperoni Pizza", "Quattro Stagioni Pizza", "Hawaiian Pizza","Diavola Pizza", "Vegetarian Pizza", "Tuscany Special Pizza" };
float pricesOfItemsInTuscanyCourtyard[28] = { 12, 15, 10, 14, 18, 10, 20, 18, 20, 22, 25, 24, 28, 26, 30, 28, 35, 25, 40, 32, 34, 22, 24, 26, 26, 28, 24, 30 };
string allTheItemsInMenuOfEIMomento[42] = { "Bruschetta", "Caprese Salad", "Garlic Breadsticks", "Mozzarella Sticks", "Fried Calamari","Tomato Basil Soup", "Grilled Vegetable Platter", "Caesar Salad", "Greek Salad", "Arugula Salad","Spinach Salad","Caprese Salad","Quinoa Salad", "Beetroot Salad", "Spaghetti Aglio e Olio", "Penne Arrabbiata","Fettuccine Alfredo", "Risotto Funghi", "Lasagna Bolognese", "Spaghetti Carbonara", "Risotto Frutti di Mare","Grilled Salmon", "Chicken Marsala", "Veal Piccata", "Eggplant Parmesan", "Beef Tenderloin","Seafood Risotto", "Shrimp Scampi", "Margherita", "Pepperoni", "Quattro Stagioni","Hawaiian", "Diavola", "Vegetarian", "EI Momento Special", "Tiramisu","NY Cheesecake", "Chocolate Lava Cake", "Panna Cotta", "Gelato", "Profiteroles","Lemon Sorbet" };
float pricesOfItemsInEIMomento[42] = { 10, 12, 8, 10, 15, 10, 18, 12, 14, 15, 13, 16, 18, 17,18, 20, 22, 24, 26, 28, 30,28, 26, 32, 24, 36, 34, 30, 20, 22, 24, 24, 26, 22, 28, 15, 14, 16, 12, 10, 18,10 };

// Pakistani's
string allItemsInTheMenuOfDera[34] = { "Mutton Kuna", "Mutton Sajji", "Chicken Sajji", "Desi Murgh Karahi", "Makhni Saag", "Chicken Handi", "Chicken Mughlai", "Chicken Tandoori Masala", "Chicken Jalferezi","Daal Mash", "Mix Vegetable", "Chicken Tikka", "Chicken Boti","Chicken Cheese Boti", "Gola Kabab", "Mutton Kabab", "Mutton Champs","Beef Kabab", "Roghni Naan", "Garlic Naan", "Plain Naan", "Roti","Lassi Glass", "Pina Coloada", "Soft Drink with Lime", "Spanish Margrita","Chicken Apple Salad", "Fresh Green Salad", "Kachumar Salad","Jalapeno Chicken Burger", "Fried Chicken Burger", "Club Sandwich", "Dera Special Sandwich","Grill Cheese Sandwich" };
float pricesOfItemsInDera[34] = { 2450, 5200, 1150, 2450, 990, 1400, 1350, 1800, 1300, 950, 950, 590, 1400, 1590, 1590, 1790, 1990, 1490, 140, 190, 130, 90, 250, 550, 180, 450,850, 240, 240,700,640,750,880,890 };
string allItemsInTheMenuOfHaveli[32] = { "Biryani", "Karahi Chicken", "Palak Paneer", "Haleem", "Chapli Kebab", "Nihari", "Daal Mash", "Chicken Handi", "Mutton Pulao", "Seekh Kebab", "Chicken Tikka", "Fish Finger", "Nihari", "Paya", "BBQ", "Samosas", "Pakoras", "Chatni", "Salad", "Raita", "Gulab Jamun", "Kheer", "Ras Malai", "Gajar ka Halwa", "Tea", "Coffee", "Lassi", "Falooda", "Soft Drink", "Mineral Water", "Water", "Juice" };
float pricesOfItemsInHaveli[32] = { 600, 680, 620, 650, 600, 700, 550, 620, 680, 680, 620, 600, 700, 580, 650, 150, 180, 50, 70, 40, 80, 100, 120, 150, 50,90, 150, 180, 60,30,20,10 };
string allItemsInTheMenuOfBunduKhan[52] = { "Chicken Karahi","Chicken Boneless Handi","Mutton Boneless Handi","Chicken Achari Handi","Daal Mash","Mutton Karahi","Fish Malwari Karahi","Brain Masala","Chicken Shashlik","Chicken Jalfrezi","Bundu Khan Special Soup","Hot and Sour Soup","Chicken Corn Soup","Finger Fish","Fried Fish","Fish Cracker","Fried Chicken","Chicken Drumsticks","French Fries","Mutton Chapple Kabab","Bundu Khan Special Burger","Fish Burger","Chicken Cheese Burger","Roasted Chicken Burger","Chicken Burger","Chicken Sandwich","Chicken Cheese Sandwish","Bundu Khan Special Sandwich","Club Sandwich","Roasted Chicken Sandwich","Fish Tikka","Chicken Dhum Seekh","Chicken Irani Boti","Chicken Tikka Breast","Chicken Boti","Zafrani Mutton Leg","Tawa Chops","Chicken Steam Roast","Chicken Fried Rice","Chicken Masala rice","Steamed Plain Rice","Rogni Naan","Plain Naan","Zeera Naan","Kalongi Naan","Garlic Naan","Special Naan","Paratha","Special Halwa", "Gulab Jaman","Rasmalai","Gajar Halwa" };
float pricesOfItemsInBundaKhan[52] = { 1250,1250,1695,1250,480,1695,1545,1050,1150,950, 350,275,250,1185,1185,300,650,900,350,880,575,700,500,525,490,480,540,525,480,525,1390,950,950,280,600,3200,1350,510,550,550,400,50,40,100,100,120,150,100,275,270,240,295 };
string allItemsInTheMenuOfMonal[43] = { "Chicken Karahi", "Chicken Boneless Karahi", "Namkeen Dumba Karahi", "Namkeen Chanp", "Namkeen Chicken Tikka", "Dum Pukht", "Namkeen Dumba Boti", "Namkeen Puth", "Chicken Drum Sticks","Fried Stuffed Mushrooms", "Spicy Chicken Cheese Paratha", "Lahore Special Mutton Naan","Chinese Meat Balls", "Chicken Tampura", "Prawn Tampura", "Dhaka Chicken Cubes", "Chicken Fingers", "Cheese Fries", "Chicken Tikka Burger", "Chicken Steak Burger", "Beef Steak Burger", "Chicken Double Decker Burger","Chicken Cheese Burger", "Chicken Sandwich", "Chicken Shawarma", "Chicken Cheese Shawarma","Plain Hot Dog", "Beef Cheese Burger", "Chicken Chowmein", "Spicy Fettuccine", "Fettucine Alfredo", "Chicken Lasagna", "Hot and Sour Soup", "Cream of Almond", "Cream of Mushroom", "Chicken Corn Soup", "Thai Soup", "Chicken Tikka Pizza", "The Monal's Special Pizza", "Chicken Fajita Pizza", "Chicken Spicy Sizilian Pizza","Pepperoni Pizza", "Cheese Lovers Pizza" };
float pricesOfItemsInMonal[43] = { 945, 2345, 3195, 2195, 445, 2675, 2495, 1095, 565, 765, 465, 545, 495, 1245, 1445, 1165, 1165, 625, 775, 1035, 1035, 845, 795, 745, 575, 615, 495, 795, 1245, 1295, 1295, 1295, 475,475,475,475,475,1695,1695,1695,1695,1695,1475 };
string allItemsInTheMenuOfSaltNPepper[23] = { "Jumbo Club Sandwich", "Grilled Beef & Cheese Sandwich", "Fried Chicken Sandwich", "Club Sandwich", "Panini Chicken Sandwich", "Grilled Chicken Breast", "Spicy Chicken Pocket","Peri Peri Sandwich", "Jalapeno sandwich", "Beef Fillet Steak", "Black Pepper Steak", "Grilled Chicken Steak", "Chicken Pineapple Steak", "BBQ Steak", "Pan Steak", "Fried Chicken Burger", "Beef Cheese Burger", "Chicken Cheese Burger", "Grilled Chicken Burger", "Chicken Mushrroom soup", "Chicken Corn soup", " Hot & Sour soup", "Mulligatawny soup" };
float pricesOfItemsInSaltNPepper[23] = { 1290, 1950, 1290, 1090, 1390, 1290, 1190,  1100, 1280, 2750, 2950, 1850, 1990, 2000, 2250, 1390, 1650, 1220, 1290, 750,580,650,750 };

// Chinese's
string allItemsInTheMenuOfYumChinese[22] = { "Sweet & sour fish", "Chicken chilli oyster", "Chicken manchurian", "Chicken with cashew nuts", "Black bean sauce prawns","Beef chilli dry", "Stir-fried Vegetables", "Prawn tempura", "Chicken Tempura", "Chicken drumsticks","Chicken green curry", "Chicken with chilli past", "Khao Phad Phack", "Egg fried rice", "Chicken chowmein","Spicy hot noodles", "Chocolate mousse", "Strawberry mousse", "Cream Brulee","Tea","Green tea","Lemonade" };
float pricesOfItemsInYumChinese[22] = { 12, 15, 15, 17, 18, 14, 12, 10, 12, 10, 20, 24, 30, 18, 20, 22, 12, 12, 15, 7, 10, 5 };
string allItemsInTheMenuOfMandarinChinese[24] = { "Curried chicken", "Kung pao chicken", "Garlic pepper chicken", "Yu Shan chicken", "General Tso's chicken","Hunan chicken", "Moo Goo chicken", "Fried crab rangoon", "Fried dumplings", "Teriyaki chicken","Steamed dumplings", "Fried shrimps", "Szechwan spicy broccli", "Moo shu vegetables", "Tofu with vegeatbles","Vegeatble lo mein", "BBQ pork lo mein", "Shrimp lo mein", "Egg Foo Young with Chicken", "Egg Foo Young with Shrimp","Egg Foo Young with Beef", "Hawaian fried rice","Mexcican fried rice","Jumbo shrimp rice" };
float pricesOfItemsInMandarinChinese[24] = { 7.99, 7.99, 7.99, 7.99, 8.99, 7.99, 9.99, 5.99, 5.99, 5.99, 5.99, 4.99, 7.79, 9.79, 10.99, 6.99, 6.99, 6.99, 7.99, 7.99, 7.99, 9.99, 9.99, 11.99 };
string allItemsInTheMenuOfXiwang[21] = { "Traditional BBQ", "Xiwang Special", "Pakistani V.V.I.P", "DESI stuff","Strawberry Ice-cream", "Pineapple Ice-cream", "Kulfa Ice-cream", "Chocolate Ice-cream","Pink shine", "Blue fun", "Yellow masti", "Green love","Pena Colada", "Pink Lady", "Special Float", "Fresh Juice","Black Tea","Coffee","Green Tea","Soft drink","Water" };
float pricesOfItemsInXiwang[21] = { 625, 930, 1265, 1790, 225, 225, 225, 225, 250, 250, 250, 250, 80, 100, 120, 150, 50, 90, 50, 80, 60 };
string allItemsInTheMenuOfLungFung[34] = { "Kung pao shrimp", "Kung pao chicken", "Kung pao beef", "Mongolian beef","Moo shu chicken", "Spicy fried chicken", "Orange chicken","Hong sue tofu", "Tofu almond ding", "Tofu kow", "Tofu peapods", "Pepper tofu tomato", "Moo shu tofu", "Kung pao tofu","Chicken chop suey", "Beef chop suey", "Shrimp chop suey","Vegetable lo mein", "Chicken lo mein", "Beef lo mein","Egg roll", "Shrimp toast", "Yu Shan Wonton","Shrimp almond ding","Shrimp kow","Cashews shrimp","Shrimp peapods","Shrimp curry","Fried Rice with Mushroom", "Fried Rice with Vegetable", "Fried Rice with Chicken","Shrimp mei fum", "Singaporean mei fun", "Combo mei fum" };
float pricesOfItemsInLungFung[34] = { 13, 12, 13, 13, 13, 12, 13, 11, 11, 11, 11, 11, 11, 11, 13, 12, 13, 12, 12, 12, 2, 6, 6, 13, 13, 13, 13, 13,11, 11, 11, 12, 12, 12 };
string allItemsInTheMenuOfPFChangs[22] = { "Spicy salmon roll", "Crazy salmon roll", "California roll", "Dyanmite shrimp roll", "Spicy tuna roll","Crispy green bean", "Tempuar Calamari", "Dynamite Chicken", "Chang's wraps", "Kung Pao sprouts","Wonton soup", "Hot'nSour soup", "Noodle soup","Asian caesar salad", "Mandarin crunch salad", "Peanut lime salad","Lo Mein", "Fried rice", "Pad Thai","Chicken Dumpling", "Shrimp Dumpling", "Vegetable shrimp roll" };
float pricesOfItemsInPFChangs[22] = { 2550, 2550, 1980, 2050, 2050,850, 1600, 1650, 1150, 1150,1490, 1390, 1490,1050, 1050, 1590,1650, 1290, 1590,1050, 1290, 850 };

// Japanese's
string allItemsInTheMenuOfJushi[23] = { "Bibimbap","Sashimi","Ramen","Yakitori","Donburi","Natto","Kashi Pan","Pork Breadsticks","Mozzarella Sticks","Fujimi","Fish Cakes","Teriyaki Cakes","Ramen Small","Torri","Yaki Udon","Sesame Tuna","Deep Fried Shrimp","Miso and Soy","Oyakadon","Coffee","Affogato","Japanese Tea","Boba Tea" };
float pricesOfItemsInJushi[23] = { 1999,1399,1299,1455,1199,3899,1999,299,455,789,1000,999,899,199,2299,2399,1999,1599,1799,120,130,478,355 };
string allItemsInTheMenuOfFujiyamaDHA[23] = { "Philli Cheese Roll","Futomoki Roll","California Roll","Saparo Maki","Teriaki Roll","Crunchy Maki","Cheese Crunchy Maki","Egg Roll","Wasabi Maki","Beef Katsu","Chicken Katsu","Prawn Katsu","Mushroom Katsu","Pork Katsu","Pan Katsu","Garlic Yakimeshi","Prawn Yakimeshi","Chicken Cheese Yakimeshi","Pork Fried Yokimeshi","Tory & Gyu","Ebi & Gyu","Ebi & Tai","Tai & Tori" };
float pricesOfItemsInFujiyamaDHA[23] = { 1290,1950,1290,1090,1390,1290,1190,1100,1280,2750,2500,1850,2300,2000,2250,2300,1650,1220,1290,1200,870,650,560 };
string allItemsInTheMenuOfWasabi[20] = { "Jajang Meong","Tteok Bokki","Dumplings","Udon","Spicy Tteok","Dal Donburi","Soup Bonbons","Japanese Cheesecake","Dorayaki","Dango","Souffle Pancakes","Tempura","Tofu","Yakitori","Donburi","Wontons","Yakult","Coffee","Bubble Tea","Soymilk" };
float pricesOfItemsInWasabi[20] = { 2800,3200,1000,4000,2809,2500,3300,80,100,120,150,150,180,200,70,40,50,90,150,180 };
string allItemsInTheMenuOfSukiSushi[19] = { "Chirasizushi","Inarizushi","Cheese Rolls","Makizushi","Narezushi","Nigirizushi","Oshizushi","Wings","Katsu","Mochi","Garlic Bread","Garlic Knots","Meat Balls","Yakult","Bubble Tea","Japanese Tea","Tuna","Wasabi Sauce","Kimchi" };
float pricesOfItemsInSukiSushi[19] = { 1299,1199,1399,1199,1099,1599,1355,455,399,345,299,275,699,599,566,456,50,60,75 };
string allItemsInTheMenuOfKai[23] = { "Tempura Sushi","Sashimi","Ramen","Yakitori","Donburi","Natto","Kashi Pan","Garlic Breadsticks","Mozzarella Sticks","Bruschetta","Prese Salad","Teriyaki Wings","Bibimbap","Garlic Knots","Yaki Udon","Sesame Tuna","Deep Fried Shrimp","Miso and Soy","Oyakadon","Nestle Water","Aquafina Water","Japanese Tea","Boba Tea" };
float pricesOfItemsInKai[23] = { 1999,1399,1299,1455,1199,3899,1999,299,455,789,1000,999,899,199,2299,2399,1999,1599,1799,120,130,478,355 };

string GlobalResponse;  //For the use of Remove / Confirm / Cancel globally
string* CwholeOrder;
int CTotalItems;
float* CPrices;
int* Cquantities;
float CBill;
float Cdiscount;
float CdiscountBill;
string CRName;
string SpecialInstructions;

string InfluencerCodes[5] = { "MN144" , "LK876" , "YT788", "QW288", "SF900" };

//Function starts here
void TakingCustomerInfo(string& fullName, int& houseNumber, string& area, string& phoneNumber)
{  
	system("CLS");
	cout << endl << "                                                                                        Your Choosen Items are Confirmed " << endl << endl;
	cout << endl << endl;
	cout << "                                                                            ------------------------------------------------------ " << endl;
	cout << "                                                                           |                    ENTER YOUR DETAILS                |" << endl;
	cout << "                                                                            ------------------------------------------------------ " << endl;
	cout << endl << endl;

	cout << "                                                                           Enter your full name:     ";
	getline(cin, fullName);

	cout << "                                                                           Enter your house number:     ";
	cin >> houseNumber;
	while (houseNumber <= 0)
	{
		cout << "                                                                       Invalid. Enter again:     ";
		cin >> houseNumber;
	}
	cin.ignore();
	cout << "                                                                           Give the Complete Address details:     ";
	getline(cin, area);
	int length = 0;
	cout << "                                                                           Enter your phone number:     ";
	getline(cin, phoneNumber);
	for (int i = 0; phoneNumber[i] != '\0'; i++)
	{
		length++;
	}
	while (length != 11)
	{
		cout << "                                                                           Invalid. Enter again:     ";
		getline(cin, phoneNumber);
		length = 0;
		for (int i = 0; phoneNumber[i] != '\0'; i++)
		{
			length++;
		}
	}
}

void displayOrder(string restaurantName, string* wholeorder, int Items, int* quantities, float* Prices, float bill, float& discount, float& discountedbill) {

	if (restaurantName == "Italian Express" || restaurantName == "italian express" || restaurantName == "Italian Slice" || restaurantName == "italian slice" || restaurantName == "EI Momento" || restaurantName == "ei momento" || restaurantName == "Tuscany Courtyard" || restaurantName == "tuscany courtyard" || restaurantName == "Paola's Cosa Nostra" || restaurantName == "paola's cosa nostra" || restaurantName == "Lung Fung" || restaurantName == "Yum Chinese and Thai" || restaurantName == "Mandarian Chinese" || restaurantName == "lung fung" || restaurantName == "yum chinese and thai" || restaurantName == "mandarian chinese") {
		// Get the handle to the console
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		// Get the console screen buffer info
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
		int consoleWidth = consoleInfo.dwSize.X;

		string line = string((consoleWidth - 75) / 2, '-') + " ";
		string spaces = string((consoleWidth - 70) / 2, ' ');

		int maxNameLength = 0;
		int maxPriceLength = 0;
		float Mlen = 0;
		for (int i = 0; i < Items; i++) {
			int length = wholeorder[i].length();
			if (length > maxNameLength)
				maxNameLength = length;

			//Find the maximum length of the price
			string priceStr = to_string(Prices[i]);
			if (priceStr.length() > maxPriceLength)
				maxPriceLength = priceStr.length();

			if (Prices[i] > Mlen)
				Mlen = Prices[i];
		}
		if (Mlen >= 10.00)
		{
			cout << spaces << line << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |" << endl;
			cout << spaces << "|                           Your Complete Order:     " << setw(maxPriceLength) << "              |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |" << endl;
			cout << spaces << "|        " << left << setw(8) << "Sr.No.: " << setw(30) << "Item Name: " << setw(10) << "Qty: " << setw(maxPriceLength) << "Price:" << " |" << endl;


			for (int i = 0; i < Items; i++) {
				cout << spaces << "|        " << left << setw(8) << i + 1 << setw(30) << wholeorder[i] << setw(10) << quantities[i] << setw(maxPriceLength) << Prices[i] << " |" << endl;
			}

			if (bill >= 10.00)
			{
				cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
				cout << endl << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << bill << "                                 |" << endl;
				cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
				float BillPKR = bill * 280.16;
				cout << endl << spaces << "|        " << "Total Amount in PKR:   " << setw(maxPriceLength) << BillPKR << "                          |" << endl;
			}
			else if (bill < 10.00)
			{
				cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
				cout << endl << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << bill << "                                |" << endl;
				cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
				float BillPKR = bill * 280.16;
				cout << endl << spaces << "|        " << "Total Amount in PKR:   " << setw(maxPriceLength) << BillPKR << "                          |" << endl;
			}

			//Discount Mention
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
			cout << endl << spaces << "|        " << "Discount:           " << setw(maxPriceLength) << discount << "                             |" << endl;
			//Displaying again
			if (discountedbill >= 10.00)
			{
				cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
				cout << endl << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << discountedbill << "                                 |" << endl;
				cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
				float BillPKR = discountedbill * 280.16;
				cout << endl << spaces << "|        " << "Total Amount in PKR:   " << setw(maxPriceLength) << BillPKR << "                          |" << endl;
				cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
				cout << endl << spaces << "|        " << "DC & Taxes Applied:    " << setw(maxPriceLength) << "PKR 186.6" << "                          |" << endl;
			}
			else if (discountedbill < 10.00)
			{
				cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
				cout << endl << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << discountedbill << "                                |" << endl;
				cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
				float BillPKR = discountedbill * 280.16;
				cout << endl << spaces << "|        " << "Total Amount in PKR:   " << setw(maxPriceLength) << BillPKR << "                          |" << endl;
				cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
				cout << endl << spaces << "|        " << "DC & Taxes Applied:    " << setw(maxPriceLength) << "PKR 186.6" << "                          |" << endl;
			}

			cout << spaces << line << endl;
		}
		else if (Mlen < 10.00)
		{
			cout << spaces << line << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "             |" << endl;
			cout << spaces << "|                         Your Complete Order:       " << setw(maxPriceLength) << "             |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "             |" << endl;
			cout << spaces << "|        " << left << setw(8) << "Sr.No.: " << setw(30) << "Item Name: " << setw(10) << "Qty: " << setw(maxPriceLength) << "Price:" << " |" << endl;


			for (int i = 0; i < Items; i++) {
				cout << spaces << "|        " << left << setw(8) << i + 1 << setw(30) << wholeorder[i] << setw(10) << quantities[i] << setw(maxPriceLength) << Prices[i] << " |" << endl;
			}
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "             |" << endl;
			cout << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << bill << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "             |";
			float BillPKR = bill * 280.16;
			cout << endl << spaces << "|        " << "Total Amount in PKR:   " << setw(maxPriceLength) << BillPKR << "                          |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "             |";

			//Discount Mention

			cout << endl << spaces << "|        " << "Discount:           " << setw(maxPriceLength) << discount << "                             |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "             |";
			cout << endl << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << discountedbill << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "             |";
			BillPKR = discountedbill * 280.16;
			cout << endl << spaces << "|        " << "Total Amount in PKR:   " << setw(maxPriceLength) << BillPKR << "                          |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "             |";
			cout << endl << spaces << "|        " << "DC & Taxes Applied:    " << setw(maxPriceLength) << "PKR 186.6" << "                          |" << endl;
			cout << spaces << line << endl;
		}

	}
	else
	{
		// Get the handle to the console
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		// Get the console screen buffer info
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
		int consoleWidth = consoleInfo.dwSize.X;

		string line = string((consoleWidth - 70) / 2, '-') + " ";
		string spaces = string((consoleWidth - 70) / 2, ' ');
		string spaces1 = string((consoleWidth - 150) / 2, ' ');

		int maxNameLength = 0;
		int maxPriceLength = 0;
		float Mlen = 0;
		for (int i = 0; i < Items; i++) {
			int length = wholeorder[i].length();
			if (length > maxNameLength)
				maxNameLength = length;

			//Find the maximum length of the price
			string priceStr = to_string(Prices[i]);
			if (priceStr.length() > maxPriceLength)
				maxPriceLength = priceStr.length();

			if (Prices[i] > Mlen)
				Mlen = Prices[i];
		}
		if (Mlen >= 100 && Mlen <= 999)
		{
			cout << spaces << line << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "               |" << endl;
			cout << spaces << "|                           Your Complete Order:     " << setw(maxPriceLength) << "               |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "               |" << endl;
			cout << spaces << "|        " << left << setw(8) << "Sr.No.: " << setw(30) << "Item Name: " << setw(10) << "Qty: " << setw(maxPriceLength) << "Price:" << " |" << endl;


			for (int i = 0; i < Items; i++) {
				cout << spaces << "|        " << left << setw(8) << i + 1 << setw(30) << wholeorder[i] << setw(10) << quantities[i] << setw(maxPriceLength) << Prices[i] << " |" << endl;
			}
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "               |" << endl;
			cout << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << bill << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "               |" << endl;
			cout << spaces << "|        " << "Discount:       " << setw(maxPriceLength) << discount << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "               |" << endl;
			cout << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << discountedbill << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "               |";
			cout << endl << spaces << "|        " << "DC & Taxes Applied:    " << setw(maxPriceLength) << "PKR 186.6" << "                          |" << endl;
			cout << spaces << line << endl;
		}
		else if (Mlen < 100)
		{
			cout << spaces << line << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |" << endl;
			cout << spaces << "|                           Your Complete Order:     " << setw(maxPriceLength) << "              |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |" << endl;
			cout << spaces << "|        " << left << setw(8) << "Sr.No.: " << setw(30) << "Item Name: " << setw(10) << "Qty: " << setw(maxPriceLength) << "Price:" << " |" << endl;


			for (int i = 0; i < Items; i++) {
				cout << spaces << "|        " << left << setw(8) << i + 1 << setw(30) << wholeorder[i] << setw(10) << quantities[i] << setw(maxPriceLength) << Prices[i] << " |" << endl;
			}
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |" << endl;
			cout << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << bill << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |" << endl;
			cout << spaces << "|        " << "Discount:       " << setw(maxPriceLength) << discount << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |" << endl;
			cout << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << discountedbill << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "              |";
			cout << endl << spaces << "|        " << "DC & Taxes Applied:    " << setw(maxPriceLength) << "PKR 186.6" << "                          |" << endl;
			cout << spaces << line << endl;
		}
		else if (Mlen >= 1000 && Mlen <= 9999)
		{
			cout << spaces << line << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                |" << endl;
			cout << spaces << "|                           Your Complete Order:     " << setw(maxPriceLength) << "                |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                |" << endl;
			cout << spaces << "|        " << left << setw(8) << "Sr.No.: " << setw(30) << "Item Name: " << setw(10) << "Qty: " << setw(maxPriceLength) << "Price:" << " |" << endl;


			for (int i = 0; i < Items; i++) {
				cout << spaces << "|        " << left << setw(8) << i + 1 << setw(30) << wholeorder[i] << setw(10) << quantities[i] << setw(maxPriceLength) << Prices[i] << " |" << endl;
			}
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                |" << endl;
			cout << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << bill << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                |" << endl;
			cout << spaces << "|        " << "Discount:       " << setw(maxPriceLength) << discount << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                |" << endl;
			cout << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << discountedbill << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                |";
			cout << endl << spaces << "|        " << "DC & Taxes Applied:    " << setw(maxPriceLength) << "PKR 186.6" << "                          |" << endl;
			cout << spaces << line << endl;
		}
		else if (Mlen >= 10000)
		{
			cout << spaces << line << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                 |" << endl;
			cout << spaces << "|                           Your Complete Order:     " << setw(maxPriceLength) << "                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                 |" << endl;
			cout << spaces << "|        " << left << setw(8) << "Sr.No.: " << setw(30) << "Item Name: " << setw(10) << "Qty: " << setw(maxPriceLength) << "Price:" << " |" << endl;


			for (int i = 0; i < Items; i++) {
				cout << spaces << "|        " << left << setw(8) << i + 1 << setw(30) << wholeorder[i] << setw(10) << quantities[i] << setw(maxPriceLength) << Prices[i] << " |" << endl;
			}
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                 |" << endl;
			cout << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << bill << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                 |" << endl;
			cout << spaces << "|        " << "Discount:       " << setw(maxPriceLength) << discount << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                 |" << endl;
			cout << spaces << "|        " << "Total Amount:   " << setw(maxPriceLength) << discountedbill << "                                 |" << endl;
			cout << spaces << "|                                                    " << setw(maxPriceLength) << "                 |";
			cout << endl << spaces << "|        " << "DC & Taxes Applied:    " << setw(maxPriceLength) << "PKR 186.6" << "                          |" << endl;
			cout << spaces << line << endl;
		}

	}
}



string ConfirmOrder(string restaurantName, string*& wholeorder, int& Items, int*& quantities, float& bill, float*& Prices, float& discount, float& DiscountTotal)
{
	string res;
	cout << endl << "Are you sure, Do you want to confirm your order? (Yes / No)?  ";
	getline(cin, res);
	while (res != "Yes" && res != "No" && res != "yes" && res != "no")
	{
		cout << "Please enter according to the requirement correctly:  ";
		getline(cin, res);
	}
	if (res == "Yes" || res == "yes")
	{
		res = "Yes";
	}
	else
	{
		cout << "Do you want to Remove any item OR Cancel the order? (Remove / Cancel)?  ";
		getline(cin, res);
		while (res != "Remove" && res != "remove" && res != "Cancel" && res != "cancel")
		{
			cout << "Please enter according to the requirement correctly:  ";
			getline(cin, res);
		}
		if (res == "Cancel" || res == "cancel")
		{
			res = "Cancel";
		}
		else
		{
			system("CLS");
			displayOrder(restaurantName, wholeorder, Items, quantities, Prices, bill, discount, DiscountTotal);
			cout << endl;
			res = "Remove";
			int number;
			int* serials;
			cout << endl << "How many Items do you want to remove?   ";
			cin >> number;
			while (number <= 0 || number >= Items)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> number;
			}
			cout << endl;
			serials = new int[number];
			string* response;
			response = new string[number];
			int l = 0, previ = 0, count = 0;
			for (int i = 0; i < number; i++)
			{
				cout << "Enter the Serial Number of the item:  ";
				cin >> serials[i];
				for (int j = 0; j < i; j++)
				{
					if (serials[i] == serials[j])
						previ = 1;
				}
				while (serials[i] <= 0 || serials[i] > Items || previ ==1)
				{
					cout << "Inavlid!!! Enter again: ";
					cin >> serials[i];
					for (int j = 0; j < i; j++)
					{
						if (serials[i] != serials[j])
						{
							count++;
						}
					}
					if (count == i)
						previ = 0;
					count = 0;
				}
				cout << endl;
			}
			// to remove all quantities of particular food
			string* temp;
			int* quantitytemp;
			float* pricestemp;

			int k = 0; //indexes of serials
			int m = 0; // indexes of temps

			temp = new string[Items - number];
			quantitytemp = new int[Items - number];
			pricestemp = new float[Items - number];

			for (int i = 0; i < (Items - number); i++)
			{
				quantitytemp[i] = 0;
				pricestemp[i] = 0;
				temp[i] = "";
			}
			for (int i = 0; i < Items; i++)
			{
				while ((serials[k] - 1) == i)
				{
					if (k < number - 1 && i < Items - 1)
					{
						k++;
						i++;
					}
					else
						break;
				}
				if (m < (Items - number) && (serials[k] - 1) != i)
				{
					temp[m] = wholeorder[i];
					quantitytemp[m] = quantities[i];
					pricestemp[m] = Prices[i];
					m++;
				}
				if ((serials[k] - 1) == i && k < number - 1 && i < Items - 1)
					break;

			}
			delete[] wholeorder;
			delete[] quantities;
			delete[] Prices;

			Items = Items - number;
			wholeorder = new string[Items];
			quantities = new int[Items];
			Prices = new float[Items];
			for (int i = 0; i < Items; i++)
			{
				wholeorder[i] = "";
				quantities[i] = 0;
				Prices[i] = 0.0;
			}
			bill = 0;
			for (int i = 0; i < Items; i++)
			{
				wholeorder[i] = temp[i];
				quantities[i] = quantitytemp[i];
				Prices[i] = pricestemp[i];
				bill = bill + Prices[i];
			}
			if (discount > 0)
			{
				DiscountTotal = bill - (bill * (discount / 100));
			}
			else if (discount == 0)
			{
				DiscountTotal = bill;
			}

			delete[] temp;
			delete[] quantitytemp;
			delete[] pricestemp;
			cout << "                                                                               Your mentioned item(s) is removed from your order!! " << endl;

		}
	}
	return res;
}


int InputFacilitation(string RName, string check, string& correct, float& oneItemPrice)
{
	int count = 0, size = 0, index = -1;

	if (RName == "Italian Express" || RName == "italian express")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 19; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfItalianExpress[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfItalianExpress[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfItalianExpress[index];
			oneItemPrice = pricesOfItemsInItalianExpress[index];
		}

	}

	if (RName == "Paola's Cosa Nostra" || RName == "paola's cosa nostra")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}

		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 19; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfPaolaCosa[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfPaolaCosa[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfPaolaCosa[index];
			oneItemPrice = pricesOfItemsInPaolaCosa[index];
		}

	}

	if (RName == "Italian Slice" || RName == "italian slice")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}

		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 28; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfItalianSlice[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfItalianSlice[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfItalianSlice[index];
			oneItemPrice = pricesOfItemsInItalianSlice[index];
		}

	}

	if (RName == "Tuscany Courtyard" || RName == "tuscany courtyard")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}

		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 28; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfTuscanyCourtyard[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfTuscanyCourtyard[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfTuscanyCourtyard[index];
			oneItemPrice = pricesOfItemsInTuscanyCourtyard[index];
		}

	}

	if (RName == "EI Momento" || RName == "ei momento")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}

		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 42; i++)
		{
			for (int j = 0; check[j] != '\0' && allTheItemsInMenuOfEIMomento[i][j] != '\0'; j++)
			{
				if (check[j] == allTheItemsInMenuOfEIMomento[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allTheItemsInMenuOfEIMomento[index];
			oneItemPrice = pricesOfItemsInEIMomento[index];
		}

	}

	if (RName == "DERA" || RName == "dera")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}

		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 1;

		for (int i = 0; i < 34; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfDera[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfDera[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfDera[index];
			oneItemPrice = pricesOfItemsInDera[index];
		}

	}

	if (RName == "Haveli Restaurant" || RName == "haveli restaurant")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}

		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 32; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfHaveli[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfHaveli[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfHaveli[index];
			oneItemPrice = pricesOfItemsInHaveli[index];
		}

	}

	if (RName == "Bundu Khan" || RName == "bundu khan")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}

		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 52; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfBunduKhan[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfBunduKhan[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfBunduKhan[index];
			oneItemPrice = pricesOfItemsInBundaKhan[index];
		}

	}
	if (RName == "Salt'n Pepper" || RName == "salt'n pepper")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 23; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfSaltNPepper[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfSaltNPepper[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfSaltNPepper[index];
			oneItemPrice = pricesOfItemsInSaltNPepper[index];
		}

	}
	if (RName == "Monal" || RName == "monal")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 43; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfMonal[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfMonal[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfMonal[index];
			oneItemPrice = pricesOfItemsInMonal[index];
		}

	}
	if (RName == "Yum Chineese and Thai" || RName == "yum cineese and thai")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 22; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfYumChinese[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfYumChinese[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfYumChinese[index];
			oneItemPrice = pricesOfItemsInYumChinese[index];
		}
	}
	if (RName == "Mandarian Chinese" || RName == "mandarian chinese")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 24; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfMandarinChinese[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfMandarinChinese[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfMandarinChinese[index];
			oneItemPrice = pricesOfItemsInMandarinChinese[index];
		}
	}
	if (RName == "Xiwang" || RName == "xiwang")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 21; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfXiwang[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfXiwang[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfXiwang[index];
			oneItemPrice = pricesOfItemsInXiwang[index];
		}
	}
	if (RName == "Lung Fung" || RName == "lung fung")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 34; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfLungFung[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfLungFung[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfLungFung[index];
			oneItemPrice = pricesOfItemsInLungFung[index];
		}
	}
	if (RName == "PF Changs" || RName == "pf changs")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 22; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfPFChangs[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfPFChangs[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfPFChangs[index];
			oneItemPrice = pricesOfItemsInPFChangs[index];
		}
	}
	if (RName == "Jushi" || RName == "jushi")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 23; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfJushi[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfJushi[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfJushi[index];
			oneItemPrice = pricesOfItemsInJushi[index];
		}
	}
	if (RName == "Fujiyama" || RName == "fujiyama")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 23; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfFujiyamaDHA[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfFujiyamaDHA[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfFujiyamaDHA[index];
			oneItemPrice = pricesOfItemsInFujiyamaDHA[index];
		}
	}
	if (RName == "Wasabi" || RName == "wasabi")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfWasabi[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfWasabi[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfWasabi[index];
			oneItemPrice = pricesOfItemsInWasabi[index];
		}
	}
	if (RName == "Sukhi Sushi" || RName == "sukhi sushi")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 19; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfSukiSushi[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfSukiSushi[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfSukiSushi[index];
			oneItemPrice = pricesOfItemsInSukiSushi[index];
		}
	}
	if (RName == "KAI" || RName == "kai")
	{
		for (int i = 0; check[i] != '\0'; i++)
		{
			size++;
		}
		int size2 = 0;
		if (size <= 10)
			size2 = (size / 2) + 1;
		else if (size > 10)
			size2 = (size / 2) + 2;

		for (int i = 0; i < 23; i++)
		{
			for (int j = 0; check[j] != '\0' && allItemsInTheMenuOfKai[i][j] != '\0'; j++)
			{
				if (check[j] == allItemsInTheMenuOfKai[i][j])
				{
					count++;
				}
			}
			if (count >= size2)
			{
				index = i;
				break;
			}
			count = 0;
		}
		if (index != -1)
		{
			correct = allItemsInTheMenuOfKai[index];
			oneItemPrice = pricesOfItemsInKai[index];
		}
	}


	return index;
}
void BillCalculator(int* quantityList, float speifiedItemPrice, int index, float& totalBill)
{
	totalBill = totalBill + (speifiedItemPrice * quantityList[index]);
}
bool InputValidationsForItems(string restaurantName, string itemName, float& itemPrice)
{
	bool found = false;
	if (restaurantName == "Italian Express" || restaurantName == "italian express")
	{
		for (int i = 0; i < 19; i++)
		{
			if (itemName == allItemsInTheMenuOfItalianExpress[i])
			{
				found = true;
				itemPrice = pricesOfItemsInItalianExpress[i];
			}
		}
	}
	else if (restaurantName == "Paola's Cosa Nostra" || restaurantName == "paola's cosa nostra")
	{
		for (int i = 0; i < 19; i++)
		{
			if (itemName == allItemsInTheMenuOfPaolaCosa[i])
			{
				found = true;
				itemPrice = pricesOfItemsInPaolaCosa[i];
			}
		}
	}
	else if (restaurantName == "Italian Slice" || restaurantName == "italian slice")
	{
		for (int i = 0; i < 28; i++)
		{
			if (itemName == allItemsInTheMenuOfItalianSlice[i])
			{
				found = true;
				itemPrice = pricesOfItemsInItalianSlice[i];
			}
		}
	}
	else if (restaurantName == "Tuscany Courtyard" || restaurantName == "tuscany courtyard")
	{
		for (int i = 0; i < 28; i++)
		{
			if (itemName == allItemsInTheMenuOfTuscanyCourtyard[i])
			{
				found = true;
				itemPrice = pricesOfItemsInTuscanyCourtyard[i];
			}
		}
	}
	else if (restaurantName == "EI Momento" || restaurantName == "ei momento")
	{
		for (int i = 0; i < 42; i++)
		{
			if (itemName == allTheItemsInMenuOfEIMomento[i])
			{
				found = true;
				itemPrice = pricesOfItemsInEIMomento[i];
			}

		}
	}
	else if (restaurantName == "Haveli Restaurant" || restaurantName == "haveli restaurant" || restaurantName == "haveli")
	{
		for (int i = 0; i < 32; i++)
		{
			if (itemName == allItemsInTheMenuOfHaveli[i])
			{
				found = true;
				itemPrice = pricesOfItemsInHaveli[i];
			}
		}
	}
	else if (restaurantName == "DERA" || restaurantName == "dera")
	{
		for (int i = 0; i < 34; i++)
		{
			if (itemName == allItemsInTheMenuOfDera[i])
			{
				found = true;
				itemPrice = pricesOfItemsInDera[i];
			}
		}
	}
	else if (restaurantName == "Salt'n Pepper" || restaurantName == "salt'n pepper")
	{

	}
	else if (restaurantName == "Monal" || restaurantName == "monal")
	{
		for (int i = 0; i < 43; i++)
		{
			if (itemName == allItemsInTheMenuOfMonal[i])
			{
				found = true;
				itemPrice = pricesOfItemsInMonal[i];
			}
		}
	}
	else if (restaurantName == "Bundu Khan" || restaurantName == "bundu khan")
	{
		for (int i = 0; i < 52; i++)
		{
			if (itemName == allItemsInTheMenuOfBunduKhan[i])
			{
				found = true;
				itemPrice = pricesOfItemsInBundaKhan[i];
			}
		}
	}
	else if (restaurantName == "Yum Chineese and Thai" || restaurantName == "yum chinese and thai")
	{
		for (int i = 0; i < 22; i++)
		{
			if (itemName == allItemsInTheMenuOfYumChinese[i])
			{
				found = true;
				itemPrice = pricesOfItemsInYumChinese[i];
			}
		}
	}
	else if (restaurantName == "Lung Fung" || restaurantName == "lung fung")
	{
		for (int i = 0; i < 34; i++)
		{
			if (itemName == allItemsInTheMenuOfLungFung[i])
			{
				found = true;
				itemPrice = pricesOfItemsInLungFung[i];
			}
		}
	}
	else if (restaurantName == "Xiwang" || restaurantName == "xiwang")
	{
		for (int i = 0; i < 21; i++)
		{
			if (itemName == allItemsInTheMenuOfXiwang[i])
			{
				found = true;
				itemPrice = pricesOfItemsInXiwang[i];
			}
		}
	}
	else if (restaurantName == "KAI" || restaurantName == "kai")
	{
		for (int i = 0; i < 23; i++)
		{
			if (itemName == allItemsInTheMenuOfKai[i])
			{
				found = true;
				itemPrice = pricesOfItemsInKai[i];
			}
		}
	}
	else if (restaurantName == "Jushi" || restaurantName == "jushi")
	{
		for (int i = 0; i < 23; i++)
		{
			if (itemName == allItemsInTheMenuOfJushi[i])
			{
				found = true;
				itemPrice = pricesOfItemsInJushi[i];
			}
		}
	}
	else if (restaurantName == "Wasabi" || restaurantName == "wasabi")
	{
		for (int i = 0; i < 20; i++)
		{
			if (itemName == allItemsInTheMenuOfWasabi[i])
			{
				found = true;
				itemPrice = pricesOfItemsInWasabi[i];
			}
		}
	}
	else if (restaurantName == "PF Chnags" || restaurantName == "pf changs")
	{
		for (int i = 0; i < 22; i++)
		{
			if (itemName == allItemsInTheMenuOfPFChangs[i])
			{
				found = true;
				itemPrice = pricesOfItemsInPFChangs[i];
			}
		}
	}
	else if (restaurantName == "Mandarian Chinese" || restaurantName == "mandarian chinese")
	{
		for (int i = 0; i < 24; i++)
		{
			if (itemName == allItemsInTheMenuOfMandarinChinese[i])
			{
				found = true;
				itemPrice = pricesOfItemsInMandarinChinese[i];
			}
		}
	}
	else if (restaurantName == "Sukhi Sushi" || restaurantName == "sukhi sushi")
	{
		for (int i = 0; i < 19; i++)
		{
			if (itemName == allItemsInTheMenuOfSukiSushi[i])
			{
				found = true;
				itemPrice = pricesOfItemsInSukiSushi[i];
			}
		}
	}
	else if (restaurantName == "Fujiyama" || restaurantName == "fujiyama")
	{
		for (int i = 0; i < 23; i++)
		{
			if (itemName == allItemsInTheMenuOfFujiyamaDHA[i])
			{
				found = true;
				itemPrice = pricesOfItemsInFujiyamaDHA[i];
			}
		}
	}
	if (found)
		return true;
	else
		return false;
}
int OrderByBudget(string*& wholeOrder, string restaurantName, float customerBudgetinPKR, float& totalBill, float*& separateprices, int*& quantities)
{
	int totalItems = 0;
	float customerBudgetinDollars = customerBudgetinPKR * 0.0036;
	float customerBudgetinPKRtemp = customerBudgetinPKR;
	int indexOfWholeOrder = 0;

	if (restaurantName == "Italian Express" || restaurantName == "italian express")
	{
		float originalBudget = customerBudgetinDollars;
		for (int i = 0; i < 19; i++)
		{
			if (customerBudgetinDollars >= pricesOfItemsInItalianExpress[i])
			{
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInItalianExpress[i];
				totalItems++;
				i = i + 1;
			}
		}

		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}

		customerBudgetinDollars = customerBudgetinPKR * 0.0036;
		for (int i = 0; i < 19 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinDollars != 0 && customerBudgetinDollars >= pricesOfItemsInItalianExpress[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfItalianExpress[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInItalianExpress[i];
				indexOfWholeOrder++;
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInItalianExpress[i];
				totalBill = totalBill + pricesOfItemsInItalianExpress[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while(totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{
					
					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}


	else if (restaurantName == "Paola's Cosa Nostra" || restaurantName == "paola's cosa nostra")
	{
		float originalBudget = customerBudgetinDollars;
		for (int i = 0; i < 19; i++)
		{
			if (customerBudgetinDollars >= pricesOfItemsInPaolaCosa[i])
			{
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInPaolaCosa[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		customerBudgetinDollars = customerBudgetinPKR * 0.0036;
		for (int i = 0; i < 19 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinDollars != 0 && customerBudgetinDollars >= pricesOfItemsInPaolaCosa[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfPaolaCosa[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInPaolaCosa[i];
				indexOfWholeOrder++;
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInPaolaCosa[i];
				totalBill = totalBill + pricesOfItemsInPaolaCosa[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Italian Slice" || restaurantName == "italian slice")
	{
		float originalBudget = customerBudgetinDollars;
		for (int i = 0; i < 28; i++)
		{
			if (customerBudgetinDollars >= pricesOfItemsInItalianSlice[i])
			{
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInItalianSlice[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		customerBudgetinDollars = customerBudgetinPKR * 0.0036;
		for (int i = 0; i < 28 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinDollars != 0 && customerBudgetinDollars >= pricesOfItemsInItalianSlice[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfItalianSlice[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInItalianSlice[i];
				indexOfWholeOrder++;
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInItalianSlice[i];
				totalBill = totalBill + pricesOfItemsInItalianSlice[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Tuscany Courtyard" || restaurantName == "tuscany courtyard")
	{
		float originalBudget = customerBudgetinDollars;
		for (int i = 0; i < 28; i++)
		{
			if (customerBudgetinDollars >= pricesOfItemsInTuscanyCourtyard[i])
			{
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInTuscanyCourtyard[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		customerBudgetinDollars = customerBudgetinPKR * 0.0036;
		for (int i = 0; i < 28 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinDollars != 0 && customerBudgetinDollars >= pricesOfItemsInTuscanyCourtyard[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfTuscanyCourtyard[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInTuscanyCourtyard[i];
				indexOfWholeOrder++;
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInTuscanyCourtyard[i];
				totalBill = totalBill + pricesOfItemsInTuscanyCourtyard[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "EI Momento" || restaurantName == "ei momento")
	{
		float originalBudget = customerBudgetinDollars;
		for (int i = 0; i < 42; i++)
		{
			if (customerBudgetinDollars >= pricesOfItemsInEIMomento[i])
			{
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInEIMomento[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		customerBudgetinDollars = customerBudgetinPKR * 0.0036;
		for (int i = 0; i < 42 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinDollars != 0 && customerBudgetinDollars >= pricesOfItemsInEIMomento[i])
			{
				wholeOrder[indexOfWholeOrder] = allTheItemsInMenuOfEIMomento[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInEIMomento[i];
				indexOfWholeOrder++;
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInEIMomento[i];
				totalBill = totalBill + pricesOfItemsInEIMomento[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Haveli Restaurant" || restaurantName == "haveli restaurant" || restaurantName == "haveli")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 32; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInHaveli[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInHaveli[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		for (int i = 0; i < 32 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInHaveli[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfHaveli[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInHaveli[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInHaveli[i];
				totalBill = totalBill + pricesOfItemsInHaveli[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "DERA" || restaurantName == "dera")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 34; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInDera[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInDera[i];
				totalItems++;
				i = i + 1;
			}
		}

		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		for (int i = 0; i < 34 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInDera[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfDera[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInDera[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInDera[i];
				totalBill = totalBill + pricesOfItemsInDera[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Salt'n Pepper" || restaurantName == "salt'n pepper")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 23; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInSaltNPepper[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInSaltNPepper[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		for (int i = 0; i < 23 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInSaltNPepper[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfSaltNPepper[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInSaltNPepper[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInSaltNPepper[i];
				totalBill = totalBill + pricesOfItemsInSaltNPepper[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Monal" || restaurantName == "monal")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 43 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInMonal[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInMonal[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		for (int i = 0; i < 43 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInMonal[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfMonal[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInMonal[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInMonal[i];
				totalBill = totalBill + pricesOfItemsInMonal[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Bundu Khan" || restaurantName == "bundu khan")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 52; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInBundaKhan[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInBundaKhan[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		for (int i = 0; i < 52 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInBundaKhan[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfBunduKhan[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInBundaKhan[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInBundaKhan[i];
				totalBill = totalBill + pricesOfItemsInBundaKhan[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Xiwang" || restaurantName == "xiwang")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 21; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInXiwang[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInXiwang[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		for (int i = 0; i < 21 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInXiwang[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfXiwang[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInXiwang[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInXiwang[i];
				totalBill = totalBill + pricesOfItemsInXiwang[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}

	else if (restaurantName == "Lung Fung" || restaurantName == "lung fung")
	{
		float originalBudget = customerBudgetinDollars;
		for (int i = 0; i < 34; i++)
		{
			if (customerBudgetinDollars >= pricesOfItemsInLungFung[i])
			{
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInLungFung[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		customerBudgetinDollars = customerBudgetinPKR * 0.0036;
		for (int i = 0; i < 34 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinDollars != 0 && customerBudgetinDollars >= pricesOfItemsInLungFung[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfLungFung[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInLungFung[i];
				indexOfWholeOrder++;
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInLungFung[i];
				totalBill = totalBill + pricesOfItemsInLungFung[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;
	}
	else if (restaurantName == "Mandarian Chinese" || restaurantName == "mandarian chinese")
	{
		float originalBudget = customerBudgetinDollars;
		for (int i = 0; i < 24; i++)
		{
			if (customerBudgetinDollars >= pricesOfItemsInMandarinChinese[i])
			{
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInMandarinChinese[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		customerBudgetinDollars = customerBudgetinPKR * 0.0036;
		for (int i = 0; i < 24 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinDollars != 0 && customerBudgetinDollars >= pricesOfItemsInMandarinChinese[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfMandarinChinese[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInMandarinChinese[i];
				indexOfWholeOrder++;
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInMandarinChinese[i];
				totalBill = totalBill + pricesOfItemsInMandarinChinese[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Yum Chinese and Thai" || restaurantName == "yum chinese and thai")
	{
		float originalBudget = customerBudgetinDollars;
		for (int i = 0; i < 22; i++)
		{
			if (customerBudgetinDollars >= pricesOfItemsInYumChinese[i])
			{
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInYumChinese[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		customerBudgetinDollars = customerBudgetinPKR * 0.0036;
		for (int i = 0; i < 22 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinDollars != 0 && customerBudgetinDollars >= pricesOfItemsInYumChinese[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfYumChinese[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInYumChinese[i];
				indexOfWholeOrder++;
				customerBudgetinDollars = customerBudgetinDollars - pricesOfItemsInYumChinese[i];
				totalBill = totalBill + pricesOfItemsInYumChinese[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "PF Changs" || restaurantName == "pf changs")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 22 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInPFChangs[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInPFChangs[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		for (int i = 0; i < 22 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInPFChangs[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfPFChangs[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInPFChangs[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInPFChangs[i];
				totalBill = totalBill + pricesOfItemsInPFChangs[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Wasabi" || restaurantName == "wasabi")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 20 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInWasabi[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInWasabi[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		for (int i = 0; i < 20 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInWasabi[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfWasabi[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInWasabi[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInWasabi[i];
				totalBill = totalBill + pricesOfItemsInWasabi[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Fujiyama" || restaurantName == "fujiyama")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 23 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInFujiyamaDHA[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInFujiyamaDHA[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}
		for (int i = 0; i < 23 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInFujiyamaDHA[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfFujiyamaDHA[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInFujiyamaDHA[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInFujiyamaDHA[i];
				totalBill = totalBill + pricesOfItemsInFujiyamaDHA[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "KAI" || restaurantName == "kai")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 23 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInKai[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInKai[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
		}

		for (int i = 0; i < 23 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInKai[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfKai[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInKai[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInKai[i];
				totalBill = totalBill + pricesOfItemsInKai[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Jushi" || restaurantName == "jushi")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 23 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInJushi[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInJushi[i];
				totalItems++;
				i = i + 1;
			}
		}

		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
			separateprices[i] = 0;
		}
		for (int i = 0; i < 23 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInJushi[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfJushi[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInJushi[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInJushi[i];
				totalBill = totalBill + pricesOfItemsInJushi[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
	else if (restaurantName == "Sukhi Sushi" || restaurantName == "sukhi sushi")
	{
		float originalBudget = customerBudgetinPKR;
		for (int i = 0; i < 19 && indexOfWholeOrder <= totalItems; i++)
		{
			if (customerBudgetinPKR >= pricesOfItemsInSukiSushi[i])
			{
				customerBudgetinPKR = customerBudgetinPKR - pricesOfItemsInSukiSushi[i];
				totalItems++;
				i = i + 1;
			}
		}
		wholeOrder = new string[totalItems];
		separateprices = new float[totalItems];
		quantities = new int[totalItems];
		for (int i = 0; i < totalItems; i++)
		{
			quantities[i] = 1;
			separateprices[i] = 0;
		}
		for (int i = 0; i < 19 && indexOfWholeOrder < totalItems; i++)
		{
			if (customerBudgetinPKRtemp != 0 && customerBudgetinPKRtemp >= pricesOfItemsInSukiSushi[i])
			{
				wholeOrder[indexOfWholeOrder] = allItemsInTheMenuOfSukiSushi[i];
				separateprices[indexOfWholeOrder] = pricesOfItemsInSukiSushi[i];
				indexOfWholeOrder++;
				customerBudgetinPKRtemp = customerBudgetinPKRtemp - pricesOfItemsInSukiSushi[i];
				totalBill = totalBill + pricesOfItemsInSukiSushi[i];
				i = i + 1;
			}
		}
		float* Tempsingleprices;
		Tempsingleprices = new float[totalItems];
		for (int i = 0; i < totalItems; i++)
			Tempsingleprices[i] = separateprices[i];

		int j = 0;
		while (totalBill + Tempsingleprices[j] <= originalBudget)
		{
			while (j < totalItems && totalBill < originalBudget)
			{
				if (totalBill + Tempsingleprices[j] <= originalBudget)
				{

					quantities[j]++;
					totalBill = totalBill + Tempsingleprices[j];
					separateprices[j] = separateprices[j] + Tempsingleprices[j];
					++j;
				}
				else
					break;
			}
			j = 0;
		}

		return totalItems;

	}
}

void OrderTaking(string rType, string restaurantName)
{
	string* wholeOrder;
	int* quantityOfItems;
	float* Prices;
	float totalBill = 0;
	string choiceOfDirectOrderOrByBudget;
	cout << "Enter [ Custom ] if you want to order by your choice, and [ Special ] if you want us to make your order with best food items within your budget : ";
	cin >> choiceOfDirectOrderOrByBudget;
	while (choiceOfDirectOrderOrByBudget != "Custom" && choiceOfDirectOrderOrByBudget != "custom" && choiceOfDirectOrderOrByBudget != "Special" && choiceOfDirectOrderOrByBudget != "special")
	{
		cout << "Please enter according to the requirement correctly: ";
		cin >> choiceOfDirectOrderOrByBudget;
	}
	if (choiceOfDirectOrderOrByBudget == "Custom" || choiceOfDirectOrderOrByBudget == "custom")
	{
		int itemsWant;
		cout << endl << "How many items do you want from the menu?  ";
		cin >> itemsWant;
		if (restaurantName == "Italian Express" || restaurantName == "italian express")
		{
			while (itemsWant <= 0 || itemsWant > 19)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Paola's Cosa Nostra" || restaurantName == "paola's cosa nostra")
		{
			while (itemsWant <= 0 || itemsWant > 19)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Italian Slice" || restaurantName == "italian slice")
		{
			while (itemsWant <= 0 || itemsWant > 28)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "EI Momento" || restaurantName == "ei momento")
		{
			while (itemsWant <= 0 || itemsWant > 42)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Tuscany Courtyard" || restaurantName == "tuscany courtyard")
		{
			while (itemsWant <= 0 || itemsWant > 28)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Haveli Restaurant" || restaurantName == "haveli restaurant")
		{
			while (itemsWant <= 0 || itemsWant > 32)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "DERA" || restaurantName == "dera")
		{
			while (itemsWant <= 0 || itemsWant > 34)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Salt'n Pepper" || restaurantName == "salt'n pepper")
		{
			while (itemsWant <= 0 || itemsWant > 23)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Bundu Khan" || restaurantName == "bundu khan")
		{
			while (itemsWant <= 0 || itemsWant > 52)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Monal" || restaurantName == "monal")
		{
			while (itemsWant <= 0 || itemsWant > 43)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Xiwang" || restaurantName == "xiwang")
		{
			while (itemsWant <= 0 || itemsWant > 21)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Mandarian Chinese" || restaurantName == "mandarian chinese")
		{
			while (itemsWant <= 0 || itemsWant > 24)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Lung Fung" || restaurantName == "lung fung")
		{
			while (itemsWant <= 0 || itemsWant > 34)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Yum Chinese and Thai" || restaurantName == "yum chinese and thai")
		{
			while (itemsWant <= 0 || itemsWant > 22)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "PF Changs" || restaurantName == "pf changs")
		{
			while (itemsWant <= 0 || itemsWant > 22)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Wasabi" || restaurantName == "wasabi")
		{
			while (itemsWant <= 0 || itemsWant > 20)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Sukhi Sushi" || restaurantName == "sukhi sushi")
		{
			while (itemsWant <= 0 || itemsWant > 19)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Fujiyama" || restaurantName == "fujiyama")
		{
			while (itemsWant <= 0 || itemsWant > 23)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "Jushi" || restaurantName == "jushi")
		{
			while (itemsWant <= 0 || itemsWant > 23)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		else if (restaurantName == "KAI" || restaurantName == "kai")
		{
			while (itemsWant <= 0 || itemsWant > 23)
			{
				cout << "Inavlid!!! Enter again: ";
				cin >> itemsWant;
			}
		}
		wholeOrder = new string[itemsWant];
		quantityOfItems = new int[itemsWant];
		Prices = new float[itemsWant];
		cin.ignore();
		for (int i = 0; i < itemsWant; i++)
		{
			cout << endl << "Enter item no. " << i + 1 << endl;
			getline(cin, wholeOrder[i]);
			float oneItemPrice = 0;
			bool itemMatchedUsingInputFacilitation = false;
			while ((InputValidationsForItems(restaurantName, wholeOrder[i], oneItemPrice) == false) && itemMatchedUsingInputFacilitation == false)
			{
				string mostMatcheditem;
				string userResponse;
				int index = InputFacilitation(restaurantName, wholeOrder[i], mostMatcheditem, oneItemPrice);
				if (index != -1)
				{
					cout << "Do you mean " << mostMatcheditem << " ? (Yes or No) ";
					getline(cin, userResponse);
					while (userResponse != "Yes" && userResponse != "No" && userResponse != "yes" && userResponse != "no")
					{
						cout << "Please enter according to the requirement correctly:  ";
						getline(cin, userResponse);
					}
					if (userResponse == "Yes" || userResponse == "yes")
					{
						itemMatchedUsingInputFacilitation = true;
						wholeOrder[i] = mostMatcheditem;
					}
					else
					{
						cout << "Then Enter again: " << endl;
						getline(cin, wholeOrder[i]);
					}
				}
				else
				{
					cout << "Enter Again:  " << endl;
					getline(cin, wholeOrder[i]);
				}

			}
			cout << "Enter Quantity for this item you want (1,2,3...): ";
			cin >> quantityOfItems[i];
			cin.ignore();
			while (quantityOfItems[i] <= 0)
			{
				cout << "Invalid Quantity. Enter again: ";
				cin >> quantityOfItems[i];
			}
			Prices[i] = quantityOfItems[i] * oneItemPrice;
			BillCalculator(quantityOfItems, oneItemPrice, i, totalBill);
		}

		float discount = 0;
		float discountBill = totalBill;

		cout << endl << endl;

		displayOrder(restaurantName, wholeOrder, itemsWant, quantityOfItems, Prices, totalBill, discount, discountBill);

		GlobalResponse = ConfirmOrder(restaurantName,wholeOrder, itemsWant, quantityOfItems, totalBill, Prices, discount, discountBill);
		while (GlobalResponse != "Yes" && GlobalResponse != "Cancel")
		{
			if (GlobalResponse == "Remove")
			{
				cout << endl << endl << "                                                                                            After Updating Food Items:  " << endl << endl;
				displayOrder(restaurantName, wholeOrder, itemsWant, quantityOfItems, Prices, totalBill, discount, discountBill);
			}
			cin.ignore();
			GlobalResponse = ConfirmOrder(restaurantName, wholeOrder, itemsWant, quantityOfItems, totalBill, Prices, discount, discountBill);
		}

		//Initiallizing globals
		CRName = restaurantName;
		CTotalItems = itemsWant;
		CBill = totalBill;
		Cdiscount = discount;
		CdiscountBill = discountBill;
		CwholeOrder = new string[CTotalItems];
		Cquantities = new int[CTotalItems];
		CPrices = new float[CTotalItems];
		for (int i = 0; i < CTotalItems; i++)
		{
			CwholeOrder[i] = wholeOrder[i];
			Cquantities[i] = quantityOfItems[i];
			CPrices[i] = Prices[i];
		}
			
	}
	else
	{
		float customerBudget = 0;
		int* allquantities;
		cout << endl << "Enter your budget in PKR: ";
		cin >> customerBudget;
		while (customerBudget <= 0)
		{
			cout << "This is not a valid budget. Enter again:  ";
			cin >> customerBudget;
		}
		string* wholeOrder;
		int totalItems;
		totalItems = OrderByBudget(wholeOrder, restaurantName, customerBudget, totalBill, Prices, allquantities);
		
		cout << endl << "The best items selected according to your budget are: " << endl;
		for (int i = 0; i < totalItems; i++)
			cout << " - " << wholeOrder[i] << endl;

		cout << endl;
		//Setting discount values initially
		float discount = 0;
		float discountBill = totalBill;
		cout << endl << endl;
		displayOrder(restaurantName, wholeOrder, totalItems, allquantities, Prices, totalBill, discount, discountBill);
		cin.ignore();
		GlobalResponse = ConfirmOrder(restaurantName, wholeOrder, totalItems, allquantities, totalBill, Prices, discount, discountBill);
		while (GlobalResponse != "Yes" && GlobalResponse != "Cancel")
		{
			if (GlobalResponse == "Remove")
			{
				cout << endl << endl << "                                                                                            After Updating Food Items:  " << endl << endl;
				displayOrder(restaurantName, wholeOrder, totalItems, allquantities, Prices, totalBill, discount, discountBill);
			}
			cin.ignore();
			GlobalResponse = ConfirmOrder(restaurantName, wholeOrder, totalItems, allquantities, totalBill, Prices, discount, discountBill);
		}

		//Initiallizing globals
		CRName = restaurantName;
		CTotalItems = totalItems;
		CBill = totalBill;
		Cdiscount = discount;
		CdiscountBill = discountBill;
		CwholeOrder = new string[CTotalItems];
		Cquantities = new int[CTotalItems];
		CPrices = new float[CTotalItems];
		for (int i = 0; i < CTotalItems; i++)
		{
			CwholeOrder[i] = wholeOrder[i];
			Cquantities[i] = allquantities[i];
			CPrices[i] = Prices[i];
		}

	}


}

// classes
class ItalianFoods
{
protected:
	void displayItalianRestaurants()
	{
		string italianRestaurantsName[5] = { "Italian Express","Paola's Cosa Nostra","Italian Slice","Tuscany Courtyard","EI Momento" };
		cout << endl << endl;
		cout << "                                                                            ----------------------------------------------------------------- " << endl;
		cout << "                                                                           |  Please select an Italian Restaurant from the following:        |" << endl;
		cout << "                                                                           |     * Italian Express                                           |" << endl;
		cout << "                                                                           |     * Paola's Cosa Nostra                                       |" << endl;
		cout << "                                                                           |     * Italian Slice                                             |" << endl;
		cout << "                                                                           |     * Tuscany Courtyard                                         |" << endl;
		cout << "                                                                           |     * EI Momento                                                |" << endl;
		cout << "                                                                            ----------------------------------------------------------------- " << endl;
		string specifiedItalianRestaurantName;
		cout << endl << endl;
		cout << "                                                                           ";
		cout << "Enter:  ";
		getline(cin, specifiedItalianRestaurantName);
		while (specifiedItalianRestaurantName != "Italian Express" && specifiedItalianRestaurantName != "Paola's Cosa Nostra" && specifiedItalianRestaurantName != "Italian Slice" && specifiedItalianRestaurantName != "Tuscany Courtyard" && specifiedItalianRestaurantName != "EI Momento" && specifiedItalianRestaurantName != "italian express" && specifiedItalianRestaurantName != "paola's cosa nostra" && specifiedItalianRestaurantName != "italian slice" && specifiedItalianRestaurantName != "tuscany courtyard" && specifiedItalianRestaurantName != "ei momento")
		{
			cout << "                                                                           ";
			cout << "Not available!!" << endl << "                                                                           Enter Again:  ";
			getline(cin, specifiedItalianRestaurantName);
		}
		displaySpecificItalianRestaurantMenu(specifiedItalianRestaurantName);
	}
	void displaySpecificItalianRestaurantMenu(string restaurantName)
	{
		system("CLS");
		if (restaurantName == "Italian Express" || restaurantName == "italian express")
		{
			for (int i = 0; i < 35; i++) {
				string singleLine;
				getline(ItalianExpressOut, singleLine);
				cout << singleLine << endl;
			}
			ItalianExpressOut.close();
		}
		else if (restaurantName == "Paola's Cosa Nostra" || restaurantName == "paola's cosa nostra")
		{
			for (int i = 0; i < 37; i++) {
				string singleLine;
				getline(PaolaCosaNostraOut, singleLine);
				cout << singleLine << endl;
			}
			PaolaCosaNostraOut.close();
		}
		else if (restaurantName == "Italian Slice" || restaurantName == "italian slice")
		{
			for (int i = 0; i < 40; i++) {
				string singleLine;
				getline(ItalianSliceOut, singleLine);
				cout << singleLine << endl;
			}
			ItalianSliceOut.close();
		}
		else if (restaurantName == "Tuscany Courtyard" || restaurantName == "tuscany courtyard")
		{
			for (int i = 0; i < 40; i++) {
				string singleLine;
				getline(TuscanyCourtyardOut, singleLine);
				cout << singleLine << endl;
			}
			TuscanyCourtyardOut.close();
		}
		else if (restaurantName == "EI Momento" || restaurantName == "ei momento")
		{
			for (int i = 0; i < 53; i++) {
				string singleLine;
				getline(EImomentoOut, singleLine);
				cout << singleLine << endl;
			}
			EImomentoOut.close();
		}
		OrderTaking("Italian", restaurantName);
	}

};
class PakistaniFoods
{
protected:

	void displayPakistaniRestaurants()
	{
		string pakistaniRestaurantsName[5] = { "Haveli Restaurant","Salt'n Pepper","DERA","Bundu Khan","Monal" };
		cout << endl << endl;
		cout << "                                                                            ----------------------------------------------------------------- " << endl;
		cout << "                                                                           |  Please select a Pakistani Restaurant from the following:       |" << endl;
		cout << "                                                                           |     * Haveli restaurant                                         |" << endl;
		cout << "                                                                           |     * Salt'n Pepper                                             |" << endl;
		cout << "                                                                           |     * DERA                                                      |" << endl;
		cout << "                                                                           |     * Bundu Khan                                                |" << endl;
		cout << "                                                                           |     * Monal                                                     |" << endl;
		cout << "                                                                            ----------------------------------------------------------------- " << endl;
		cout << endl;
		string specifiedPakistaniRestaurantName;
		cout << endl << endl;
		cout << "                                                                           ";
		cout << "Enter:  ";
		getline(cin, specifiedPakistaniRestaurantName);
		while (specifiedPakistaniRestaurantName != "Haveli" && specifiedPakistaniRestaurantName != "haveli" && specifiedPakistaniRestaurantName != "haveli restaurant" && specifiedPakistaniRestaurantName != "salt'n pepper" && specifiedPakistaniRestaurantName != "dera" && specifiedPakistaniRestaurantName != "bundu khan" && specifiedPakistaniRestaurantName != "monal" && specifiedPakistaniRestaurantName != "Haveli Restaurant" && specifiedPakistaniRestaurantName != "Salt'n Pepper" && specifiedPakistaniRestaurantName != "DERA" && specifiedPakistaniRestaurantName != "Bundu Khan" && specifiedPakistaniRestaurantName != "Monal")
		{
			cout << "                                                                           ";
			cout << "Not available!!" << endl << "                                                                           Enter Again:  ";
			getline(cin, specifiedPakistaniRestaurantName);
		}
		displaySpecificPakistaniRestaurantMenu(specifiedPakistaniRestaurantName);
	}
	void displaySpecificPakistaniRestaurantMenu(string restaurantName)
	{
		system("CLS");
		if (restaurantName == "Haveli Restaurant" || restaurantName == "haveli restaurant" || restaurantName == "haveli" || restaurantName == "Haveli")
		{
			for (int i = 0; i < 40; i++)
			{
				string singleLine;
				getline(HaveliOut, singleLine);
				cout << singleLine << endl;
			}
			HaveliOut.close();
		}
		else if (restaurantName == "Salt'n Pepper" || restaurantName == "salt'n pepper")
		{
			for (int i = 0; i < 40; i++)
			{
				string singleLine;
				getline(SaltAndPepperOut, singleLine);
				cout << singleLine << endl;
			}
			SaltAndPepperOut.close();
		}
		else if (restaurantName == "DERA" || restaurantName == "dera")
		{
			for (int i = 0; i < 40; i++)
			{
				string singleLine;
				getline(DeraOut, singleLine);
				cout << singleLine << endl;
			}
			DeraOut.close();
		}
		else if (restaurantName == "Monal" || restaurantName == "monal")
		{
			for (int i = 0; i < 53; i++)
			{
				string singleLine;
				getline(MonalOut, singleLine);
				cout << singleLine << endl;
			}
			MonalOut.close();
		}
		else if (restaurantName == "Bundu Khan" || restaurantName == "bundu khan")
		{
			for (int i = 0; i < 60; i++)
			{
				string singleLine;
				getline(BundoKhanOut, singleLine);
				cout << singleLine << endl;
			}
			BundoKhanOut.close();
		}
		OrderTaking("Pakistani", restaurantName);
	}

};
class ChineseFoods
{
protected:

	void displayChineseRestaurants()
	{
		string chineseRestaurantsName[5] = { "Xiwang","PF Changs","Lung Fung","Mandarian Chinese","Yum Chinese and Thai" };
		cout << endl << endl;
		cout << "                                                                            ----------------------------------------------------------------- " << endl;
		cout << "                                                                           |  Please select a Chinese Restaurant from the following:         |" << endl;
		cout << "                                                                           |     * Xiwang                                                    |" << endl;
		cout << "                                                                           |     * PF Changs                                                 |" << endl;
		cout << "                                                                           |     * Lung Fung                                                 |" << endl;
		cout << "                                                                           |     * Mandarian Chinese                                         |" << endl;
		cout << "                                                                           |     * Yum Chinese and Thai                                      |" << endl;
		cout << "                                                                            ----------------------------------------------------------------- " << endl;
		string specifiedchineseRestaurantName;
		cout << endl << endl;
		cout << "                                                                           ";
		cout << "Enter:  ";
		getline(cin, specifiedchineseRestaurantName);
		while (specifiedchineseRestaurantName != "xiwang" && specifiedchineseRestaurantName != "pf changs" && specifiedchineseRestaurantName != "lung fung" && specifiedchineseRestaurantName != "mandarian chinese" && specifiedchineseRestaurantName != "yum chinese and thai" && specifiedchineseRestaurantName != "Xiwang" && specifiedchineseRestaurantName != "PF Changs" && specifiedchineseRestaurantName != "Lung Fung" && specifiedchineseRestaurantName != "Mandarian Chinese" && specifiedchineseRestaurantName != "Yum Chinese and Thai")
		{
			cout << "                                                                           ";
			cout << "Not available!!" << endl << "                                                                           Enter Again:  ";
			getline(cin, specifiedchineseRestaurantName);
		}
		displaySpecificChineseRestaurantMenu(specifiedchineseRestaurantName);
	}
	void displaySpecificChineseRestaurantMenu(string restaurantName)
	{
		system("CLS");
		if (restaurantName == "Xiwang" || restaurantName == "xiwang")
		{
			for (int i = 0; i < 35; i++) {
				string singleLine;
				getline(XiwangOut, singleLine);
				cout << singleLine << endl;
			}
			XiwangOut.close();
		}
		else if (restaurantName == "PF Changs" || restaurantName == "pf changs")
		{
			for (int i = 0; i < 45; i++) {
				string singleLine;
				getline(PFChangsOut, singleLine);
				cout << singleLine << endl;
			}
			PFChangsOut.close();
		}
		else if (restaurantName == "Lung Fung" || restaurantName == "lung fung")
		{
			for (int i = 0; i < 55; i++) {
				string singleLine;
				getline(LungFungout, singleLine);
				cout << singleLine << endl;
			}
			LungFungout.close();
		}
		else if (restaurantName == "Mandarian Chinese" || restaurantName == "mandarian chinese")
		{
			for (int i = 0; i < 40; i++) {
				string singleLine;
				getline(ManderianChineseOut, singleLine);
				cout << singleLine << endl;
			}
			ManderianChineseOut.close();
		}
		else if (restaurantName == "Yum Chinese and Thai" || restaurantName == "yum chinese and thai")
		{
			for (int i = 0; i < 40; i++) {
				string singleLine;
				getline(YumChineseAndThai, singleLine);
				cout << singleLine << endl;
			}
			YumChineseAndThai.close();
		}
		OrderTaking("Chinese", restaurantName);
	}


};
class JapaneseFoods
{
protected:

	void displayJapaneseRestaurants()
	{
		string japaneseRestaurantsName[5] = { "Wasabi","Fujiyama","KAI","Sukhi Sushi","Jushi" };
		cout << endl << endl;
		cout << "                                                                            ----------------------------------------------------------------- " << endl;
		cout << "                                                                           |  Please select a Chinese Restaurant from the following:         |" << endl;
		cout << "                                                                           |     * Wasabi                                                    |" << endl;
		cout << "                                                                           |     * Fujiyama                                                  |" << endl;
		cout << "                                                                           |     * KAI                                                       |" << endl;
		cout << "                                                                           |     * Sukhi Sushi                                               |" << endl;
		cout << "                                                                           |     * Jushi                                                     |" << endl;
		cout << "                                                                            ----------------------------------------------------------------- " << endl;
		string specifiedjapaneseRestaurantName;
		cout << endl << endl;
		cout << "                                                                           ";
		cout << "Enter:  ";
		getline(cin, specifiedjapaneseRestaurantName);
		while (specifiedjapaneseRestaurantName != "wasabi" && specifiedjapaneseRestaurantName != "fujiyama" && specifiedjapaneseRestaurantName != "sukhi sushi" && specifiedjapaneseRestaurantName != "jushi" && specifiedjapaneseRestaurantName != "kai" && specifiedjapaneseRestaurantName != "Wasabi" && specifiedjapaneseRestaurantName != "Fujiyama" && specifiedjapaneseRestaurantName != "Sukhi Sushi" && specifiedjapaneseRestaurantName != "Jushi" && specifiedjapaneseRestaurantName != "KAI")
		{
			cout << "                                                                           ";
			cout << "Not available!!" << endl << "                                                                           Enter Again:  ";
			getline(cin, specifiedjapaneseRestaurantName);
		}
		displaySpecificJapaneseRestaurantMenu(specifiedjapaneseRestaurantName);
	}
	void displaySpecificJapaneseRestaurantMenu(string restaurantName)
	{
		system("CLS");
		if (restaurantName == "Wasabi" || restaurantName == "wasabi")
		{
			for (int i = 0; i < 35; i++) {
				string singleLine;
				getline(WasabiOut, singleLine);
				cout << singleLine << endl;
			}
			WasabiOut.close();
		}
		else if (restaurantName == "Fujiyama" || restaurantName == "fujiyama")
		{
			for (int i = 0; i < 35; i++) {
				string singleLine;
				getline(FujiyamaOut, singleLine);
				cout << singleLine << endl;
			}
			FujiyamaOut.close();
		}
		else if (restaurantName == "KAI" || restaurantName == "kai")
		{
			for (int i = 0; i < 35; i++) {
				string singleLine;
				getline(KaiOut, singleLine);
				cout << singleLine << endl;
			}
			KaiOut.close();
		}
		else if (restaurantName == "Sukhi Sushi" || restaurantName == "sukhi sushi")
		{
			for (int i = 0; i < 35; i++) {
				string singleLine;
				getline(SukhiSushiOut, singleLine);
				cout << singleLine << endl;
			}
			SukhiSushiOut.close();
		}
		else if (restaurantName == "Jushi" || restaurantName == "jushi")
		{
			for (int i = 0; i < 35; i++) {
				string singleLine;
				getline(JushiOut, singleLine);
				cout << singleLine << endl;
			}
			JushiOut.close();
		}
		OrderTaking("Japanese", restaurantName);
	}

};
class VirtualRestaurant : public ItalianFoods, public ChineseFoods, public PakistaniFoods, public JapaneseFoods
{
public:
	string category;
	VirtualRestaurant(string category)
	{
		this->category = category;
		if (category == "Italian" || category == "italian")
		{
			displayItalianRestaurants();
		}
		else if (category == "Pakistani" || category == "pakistani")
		{
			displayPakistaniRestaurants();
		}
		else if (category == "Chinese" || category == "chinese")
		{
			displayChineseRestaurants();
		}
		else if (category == "Japanese" || category == "japanese")
		{
			displayJapaneseRestaurants();
		}
	}
};


class CustomerDetails
{
public:
	string fullName;
	int houseNumber;
	string area;
	string phoneNumber;

	string restaurantName;
	string* wholeOrder;
	int TotalItems;
	float* Prices;
	int* quantities;
	float Bill;
	float discount;
	float discountBill;

	long long int OrderNo;
	string OrderStatus;

	CustomerDetails()
	{
		fullName = "";
		houseNumber = 0;
		phoneNumber = "";
		area = "";

		restaurantName = "";
		wholeOrder = nullptr;
		TotalItems = 0; 
		Prices = nullptr;
		quantities = nullptr;
		Bill = 0;
		discount = 0;
		discountBill = 0;
		OrderNo = 0;
		OrderStatus = "";
	}

	CustomerDetails(string fn, int hn, string a, string pn)
	{
		fullName = fn;
		houseNumber = hn;
		phoneNumber = pn;
		area = a;

		restaurantName = CRName;
		TotalItems = CTotalItems;
		Bill = CBill;
		discount = Cdiscount;
		discountBill = CdiscountBill;
		wholeOrder = new string[TotalItems];
		quantities = new int[TotalItems];
		Prices = new float[TotalItems];
		for (int i = 0; i < TotalItems; i++)
		{
			wholeOrder[i] = CwholeOrder[i];
			quantities[i] = Cquantities[i];
			Prices[i] = CPrices[i];
		}
		OrderNo = 0;
		OrderStatus = "";
	}
	void operator=(CustomerDetails& C1)
	{
		fullName = C1.fullName;
		houseNumber = C1.houseNumber;
		phoneNumber = C1.phoneNumber;
		area = C1.area;
		wholeOrder = nullptr;
		TotalItems = 0;
		Prices = nullptr;
		quantities = nullptr;
		Bill = 0;
		discount = 0;
		discountBill = C1.discountBill;
		OrderNo = C1.OrderNo;
		OrderStatus = C1.OrderStatus;
	}
	
};


class StoredCustomers
{
public:
	CustomerDetails* List;
	int number;

	StoredCustomers()
	{
		number = 6;
		List = new CustomerDetails[number];
	}
	void hardinput()
	{
		List[0].fullName = "Fatima Riaz";
		List[0].houseNumber = 101;
		List[0].phoneNumber = "03289497875";
		List[0].area = "Phase- 2, Jasmine block, Bahria town, Lahore";
		List[0].OrderNo = 348756993;
		List[0].OrderStatus = "Delivered";
		List[0].discountBill = 3000;

		List[1].fullName = "Maida Razzaq";
		List[1].houseNumber = 354;
		List[1].phoneNumber = "03214994587";
		List[1].area = "Street 4, hunza block, Iqbal town, Lahore";
		List[1].OrderNo = 946587437;
		List[1].OrderStatus = "Delivered";
		List[1].discountBill = 5500;

		List[2].fullName = "Shahzaib ayyaz";
		List[2].houseNumber = 292;
		List[2].phoneNumber = "03217539876";
		List[2].area = "street 9, block C, Johar town , Lahore";
		List[2].OrderNo = 229857934;
		List[2].OrderStatus = "Delivered";
		List[2].discountBill = 1200;

		List[3].fullName = "Mustafa Khan";
		List[3].houseNumber = 52;
		List[3].phoneNumber = "03328391063";
		List[3].area = "Block K, Model town, Lahore";
		List[3].OrderNo = 279758612;
		List[3].OrderStatus = "Delivered";
		List[3].discountBill = 10000;

		List[4].fullName = "Mahum Tanveer";
		List[4].houseNumber = 99;
		List[4].phoneNumber = "03217429836";
		List[4].area = "street 11, Umer block Iqbal town, In front of football court, Lahore";
		List[4].OrderNo = 348759877;
		List[4].OrderStatus = "Delivered";
		List[4].discountBill = 3500;

		List[5].fullName = "Abdul Hadi";
		List[5].houseNumber = 154;
		List[5].phoneNumber = "03219285310";
		List[5].area = "Block F, Sabzazar society, Lahore";
		List[5].OrderNo = 348433993;
		List[5].OrderStatus = "Delivered";
		List[5].discountBill = 2100;
	}
	void AddCustomerinList(CustomerDetails C1)
	{
		CustomerDetails* Temp = new CustomerDetails[number];
		for (int i = 0; i < number; i++)
		{
			Temp[i] = List[i];
		}

		number++;
		List = new CustomerDetails[number];
		for (int i = 0; i < number - 1; i++)
		{
			List[i] = Temp[i];
		}
		List[number - 1] = C1;

		delete[] Temp;
	}

};
class Discounting
{
public:
	virtual void discount(StoredCustomers& Set, CustomerDetails& C1) = 0;

};
class NewCustomer : public Discounting
{

public:
	void discount(StoredCustomers& Set, CustomerDetails& C1) override
	{
		C1.discount = 10;
		C1.discountBill = C1.Bill - (C1.Bill * 0.1);
		Set.List[Set.number - 1].discount = 10;
		Set.List[Set.number - 1].discountBill = C1.discountBill;
	}
};
class InfluencerCode : public Discounting
{
	void discount(StoredCustomers& Set, CustomerDetails& C1) override
	{
		C1.discount = 15;
		C1.discountBill = C1.Bill - (C1.Bill * (0.15));
		Set.List[Set.number - 1].discount = 15;
		Set.List[Set.number - 1].discountBill = C1.discountBill;
	}
};
class FiftemItems : public Discounting
{
	void discount(StoredCustomers& Set, CustomerDetails& C1) override
	{
		C1.discount = 5;
		C1.discountBill = C1.Bill - (C1.Bill * (0.05));
		Set.List[Set.number - 1].discount = 5;
		Set.List[Set.number - 1].discountBill = C1.discountBill;
	}
};


string AskUserN(CustomerDetails& C1)
{
	string response1 = "";
	cin.clear();
	cout << endl << "                                                                          Are You A New Customer?  (Yes/No)  : ";
	getline(cin, response1);
	while (response1 != "yes" && response1 != "Yes" && response1 != "no" && response1 != "No")
	{
		cout << "                                                                           Invalid Answer!! Enter Again:  ";
		getline(cin, response1);
	}
	if (response1 == "yes" || response1 == "Yes")
	{
		return "NewYes";
	}

	else if (response1 == "no" || response1 == "No")
	{
		return "NO";
	}

}

string AskUserI(CustomerDetails& C1)
{
	string response2 = "";
	cin.clear();
	cout << "                                                                          Do you have any Influencer Discount Code?  (Yes/No)  : ";
	getline(cin, response2);
	while (response2 != "yes" && response2 != "Yes" && response2 != "no" && response2 != "No")
	{
		cout << "                                                                           Invalid Answer!! Enter Again:  ";
		getline(cin, response2);
	}
	if (response2 == "yes" || response2 == "Yes")
	{
		return "IDCodeYes";
	}
	else if (response2 == "no" || response2 == "No")
	{
		return "NO";
	}
}

string AskUser15(CustomerDetails& C1)
{
	string response3 = "";
	cin.clear();
	cout << "                                                                          Are your Total Food Items equal to OR more than 15?  (Yes / No) : ";
	getline(cin, response3);
	while (response3 != "yes" && response3 != "Yes" && response3 != "no" && response3 != "No")
	{
		cout << "                                                                           Invalid Answer!! Enter Again:  ";
		getline(cin, response3);
	}
	if (response3 == "yes" || response3 == "Yes")
	{
		return "15ItemsYes";
	}
	else if (response3 == "no" || response3 == "No")
	{
		return "NO";
	}

}

bool NewOrNot(StoredCustomers& set, CustomerDetails& C1)
{
	bool New = 1;
	for (int i = 0; i < set.number - 1; i++)
	{
		if (set.List[i].phoneNumber == C1.phoneNumber)
		{
			New = 0;
		}
	}
	return New;
}

bool CodeExist(string Code)
{
	bool Valid = 0;
	for (int i = 0; i < 5; i++)
	{
		if (Code == InfluencerCodes[i])
		{
			Valid = 1;
		}
	}
	return Valid;
}

bool Valid15(CustomerDetails& C1)
{
	bool Valid = 0;
	if (C1.TotalItems >= 15)
	{
		Valid = 1;
	}
	return Valid;
}

void TrackOrder(StoredCustomers& Set)
{
	long long int Number;
	int index = -1;
	cout << endl << endl << endl;
	cout << "                                                                            ------------------------------------------------------ " << endl;
	cout << "                                                                           |                  TO TRACK YOUR ORDER                |" << endl;
	cout << "                                                                            ------------------------------------------------------ " << endl;
	cout << endl << endl << endl << endl;
	cout << "                                                                             Enter Your Order No.  :  ";
	cin >> Number;
	cout << endl << endl << endl;
	for (int i = 0; i < Set.number; i++)
	{
		if (Number == Set.List[i].OrderNo)
		{
			index = i;
		}
	}
	if (index != -1)
	{
		// Get the handle to the console
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		// Get the console screen buffer info
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
		int consoleWidth = consoleInfo.dwSize.X;

		string line = string((consoleWidth - 55) / 2, '-') + " ";
		string spaces = string((consoleWidth - 70) / 2, ' ');

		int maxlength = Set.List[index].fullName.length();

		// Calculate the width for the columns
		int columnWidth = 18; // Adjust this value as needed
		if(maxlength <= 18)
		{
			cout << spaces << line << endl;
			cout << spaces << "|                                                          " << setw(columnWidth) << "                  |" << endl;
			cout << spaces << "|                               Tracking Information:      " << setw(columnWidth) << "                  |" << endl;
			cout << spaces << "|                                                          " << setw(columnWidth) << "                  |" << endl;

			cout << spaces << "|        " << "Customer's Order No. :                        " << setw(columnWidth) << Set.List[index].OrderNo << "    |" << endl;
			cout << spaces << "|                                                           " << setw(columnWidth) << "                 |" << endl;
			cout << spaces << "|        " << "Customer's Order Status :                     " << setw(columnWidth) << Set.List[index].OrderStatus << "    |" << endl;
			cout << spaces << "|                                                         " << setw(columnWidth) << "                   |" << endl;
			cout << spaces << "|        " << "Customer's Name :                             " << setw(columnWidth) << Set.List[index].fullName << "    |" << endl;
			cout << spaces << "|                                                         " << setw(columnWidth) << "                   |" << endl;
			cout << spaces << "|        " << "Customer's Phone Number :                     " << setw(columnWidth) << Set.List[index].phoneNumber << "    |" << endl;
			cout << spaces << "|                                                         " << setw(columnWidth) << "                   |" << endl;
			if (Set.List[index].restaurantName == "Italian Express" || Set.List[index].restaurantName == "italian express" || Set.List[index].restaurantName == "Italian Slice" || Set.List[index].restaurantName == "italian slice" || Set.List[index].restaurantName == "EI Momento" || Set.List[index].restaurantName == "ei momento" || Set.List[index].restaurantName == "Tuscany Courtyard" || Set.List[index].restaurantName == "tuscany courtyard" || Set.List[index].restaurantName == "Paola's Cosa Nostra" || Set.List[index].restaurantName == "paola's cosa nostra" || Set.List[index].restaurantName == "Lung Fung" || Set.List[index].restaurantName == "Yum Chinese and Thai" || Set.List[index].restaurantName == "Mandarian Chinese" || Set.List[index].restaurantName == "lung fung" || Set.List[index].restaurantName == "yum chinese and thai" || Set.List[index].restaurantName == "mandarian chinese")
			{
				cout << spaces << "|        " << "Total Bill (With Discount & Exc. DC + Tax) :  " << setw(columnWidth) << (Set.List[index].discountBill *  280.16) << "    |" << endl;
			}

			else
			{
				cout << spaces << "|        " << "Total Bill (With Discount & Exc. DC + Tax) :  " << setw(columnWidth) << Set.List[index].discountBill << "    |" << endl;
			}

			cout << spaces << line << endl;
		}
		else
		{
			string line = string((consoleWidth - 40) / 2, '-') + " ";
			columnWidth = 25;
			cout << spaces << line << endl;
			cout << spaces << "|                                                           " << setw(columnWidth) << "                  |" << endl;
			cout << spaces << "|                               Tracking Information:       " << setw(columnWidth) << "                  |" << endl;
			cout << spaces << "|                                                           " << setw(columnWidth) << "                  |" << endl;

			cout << spaces << "|        " << "Customer's Order No. :                        " << setw(columnWidth) << Set.List[index].OrderNo << "    |" << endl;
			cout << spaces << "|                                                           " << setw(columnWidth) << "                |" << endl;
			cout << spaces << "|        " << "Customer's Order Status :                     " << setw(columnWidth) << Set.List[index].OrderStatus << "    |" << endl;
			cout << spaces << "|                                                           " << setw(columnWidth) << "                   |" << endl;
			cout << spaces << "|        " << "Customer's Name :                             " << setw(columnWidth) << Set.List[index].fullName << "    |" << endl;
			cout << spaces << "|                                                           " << setw(columnWidth) << "                   |" << endl;
			cout << spaces << "|        " << "Customer's Phone Number :                     " << setw(columnWidth) << Set.List[index].phoneNumber << "    |" << endl;
			cout << spaces << "|                                                           " << setw(columnWidth) << "                   |" << endl;
			if (Set.List[index].restaurantName == "Italian Express" || Set.List[index].restaurantName == "italian express" || Set.List[index].restaurantName == "Italian Slice" || Set.List[index].restaurantName == "italian slice" || Set.List[index].restaurantName == "EI Momento" || Set.List[index].restaurantName == "ei momento" || Set.List[index].restaurantName == "Tuscany Courtyard" || Set.List[index].restaurantName == "tuscany courtyard" || Set.List[index].restaurantName == "Paola's Cosa Nostra" || Set.List[index].restaurantName == "paola's cosa nostra" || Set.List[index].restaurantName == "Lung Fung" || Set.List[index].restaurantName == "Yum Chinese and Thai" || Set.List[index].restaurantName == "Mandarian Chinese" || Set.List[index].restaurantName == "lung fung" || Set.List[index].restaurantName == "yum chinese and thai" || Set.List[index].restaurantName == "mandarian chinese")
			{
				cout << spaces << "|        " << "Total Bill (With Discount & Exc. DC + Tax) :  " << setw(columnWidth) << (Set.List[index].discountBill * 280.16) << "    |" << endl;
			}
			else
			{
				cout << spaces << "|        " << "Total Bill (With Discount & Exc. DC + Tax) :  " << setw(columnWidth) << Set.List[index].discountBill << "    |" << endl;
			}

			cout << spaces << line << endl;
		}

	}
	else
	{
		cout << "                                                                    You've not entered a valid Order No. !!" << endl;
	}

}

void displayTopBox(StoredCustomers& Set, int index)
{
	// Get the handle to the console
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	// Get the console screen buffer info
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	int consoleWidth = consoleInfo.dwSize.X;

	string line = string((consoleWidth - 55) / 2, '-') + " ";
	string spaces = string((consoleWidth - 80) / 2, ' ');

	int maxlength = Set.List[index].fullName.length();

	// Calculate the width for the columns
	int columnWidth = 18; // Adjust this value as needed
	if (maxlength <= 18)
	{
		cout << spaces << line << endl;
		cout << spaces << "|                                                          " << setw(columnWidth) << "                  |" << endl;
		cout << spaces << "|                       O R D E R    I N F O R M A T I O N:" << setw(columnWidth) << "                  |" << endl;
		cout << spaces << "|                                                          " << setw(columnWidth) << "                  |" << endl;

		cout << spaces << "|        " << "Customer's Order No. :                        " << setw(columnWidth) << Set.List[index].OrderNo << "    |" << endl;
		cout << spaces << "|                                                           " << setw(columnWidth) << "                 |" << endl;
		cout << spaces << "|        " << "Customer's Order Status :                     " << setw(columnWidth) << Set.List[index].OrderStatus << "    |" << endl;
		cout << spaces << "|                                                         " << setw(columnWidth) << "                   |" << endl;
		cout << spaces << "|        " << "Customer's Name :                             " << setw(columnWidth) << Set.List[index].fullName << "    |" << endl;
		cout << spaces << "|                                                         " << setw(columnWidth) << "                   |" << endl;
		cout << spaces << "|        " << "Customer's Phone Number :                     " << setw(columnWidth) << Set.List[index].phoneNumber << "    |" << endl;
		cout << spaces << "|                                                         " << setw(columnWidth) << "                   |" << endl;
		if (Set.List[index].restaurantName == "Italian Express" || Set.List[index].restaurantName == "italian express" || Set.List[index].restaurantName == "Italian Slice" || Set.List[index].restaurantName == "italian slice" || Set.List[index].restaurantName == "EI Momento" || Set.List[index].restaurantName == "ei momento" || Set.List[index].restaurantName == "Tuscany Courtyard" || Set.List[index].restaurantName == "tuscany courtyard" || Set.List[index].restaurantName == "Paola's Cosa Nostra" || Set.List[index].restaurantName == "paola's cosa nostra" || Set.List[index].restaurantName == "Lung Fung" || Set.List[index].restaurantName == "Yum Chinese and Thai" || Set.List[index].restaurantName == "Mandarian Chinese" || Set.List[index].restaurantName == "lung fung" || Set.List[index].restaurantName == "yum chinese and thai" || Set.List[index].restaurantName == "mandarian chinese")
		{
			cout << spaces << "|        " << "Total Bill (With Discount & Exc. DC + Tax) :  " << setw(columnWidth) << (Set.List[index].discountBill * 280.16) << "    |" << endl;
		}
		else
		{
			cout << spaces << "|        " << "Total Bill (With Discount & Exc. DC + Tax) :  " << setw(columnWidth) << Set.List[index].discountBill << "    |" << endl;
		}

		cout << spaces << line << endl;
	}
	else
	{
		string line = string((consoleWidth - 40) / 2, '-') + " ";
		columnWidth = 25;
		cout << spaces << line << endl;
		cout << spaces << "|                                                           " << setw(columnWidth) << "                  |" << endl;
		cout << spaces << "|                       O R D E R    I N F O R M A T I O N:" << setw(columnWidth) << "                   |" << endl;
		cout << spaces << "|                                                           " << setw(columnWidth) << "                  |" << endl;

		cout << spaces << "|        " << "Customer's Order No. :                        " << setw(columnWidth) << Set.List[index].OrderNo << "    |" << endl;
		cout << spaces << "|                                                           " << setw(columnWidth) << "                |" << endl;
		cout << spaces << "|        " << "Customer's Order Status :                     " << setw(columnWidth) << Set.List[index].OrderStatus << "    |" << endl;
		cout << spaces << "|                                                           " << setw(columnWidth) << "                   |" << endl;
		cout << spaces << "|        " << "Customer's Name :                             " << setw(columnWidth) << Set.List[index].fullName << "    |" << endl;
		cout << spaces << "|                                                           " << setw(columnWidth) << "                   |" << endl;
		cout << spaces << "|        " << "Customer's Phone Number :                     " << setw(columnWidth) << Set.List[index].phoneNumber << "    |" << endl;
		cout << spaces << "|                                                           " << setw(columnWidth) << "                   |" << endl;
		if (Set.List[index].restaurantName == "Italian Express" || Set.List[index].restaurantName == "italian express" || Set.List[index].restaurantName == "Italian Slice" || Set.List[index].restaurantName == "italian slice" || Set.List[index].restaurantName == "EI Momento" || Set.List[index].restaurantName == "ei momento" || Set.List[index].restaurantName == "Tuscany Courtyard" || Set.List[index].restaurantName == "tuscany courtyard" || Set.List[index].restaurantName == "Paola's Cosa Nostra" || Set.List[index].restaurantName == "paola's cosa nostra" || Set.List[index].restaurantName == "Lung Fung" || Set.List[index].restaurantName == "Yum Chinese and Thai" || Set.List[index].restaurantName == "Mandarian Chinese" || Set.List[index].restaurantName == "lung fung" || Set.List[index].restaurantName == "yum chinese and thai" || Set.List[index].restaurantName == "mandarian chinese")
		{
			cout << spaces << "|        " << "Total Bill (With Discount & Exc. DC + Tax) :  " << setw(columnWidth) << (Set.List[index].discountBill * 280.16) << "    |" << endl;
		}
		else
		{
			cout << spaces << "|        " << "Total Bill (With Discount & Exc. DC + Tax) :  " << setw(columnWidth) << Set.List[index].discountBill << "    |" << endl;
		}

		cout << spaces << line << endl;
	}

}

int main()
{
	StoredCustomers Set;
	Set.hardinput();
	string anotherRun = "Yes";  //Back to return home page //Exit to close application
	while (anotherRun != "Exit" && anotherRun != "exit" && anotherRun != "EXIT")
	{
		cout << endl << endl;
		cout << "                                                                            ------------------------------------------------------ " << endl;
		cout << "                                                                           |    WELCOME TO VIRTUAL RESTAURANT MANAGEMENT SYSTEM   |" << endl;
		cout << "                                                                            ------------------------------------------------------ " << endl;
		cout << endl << endl << endl << endl;
		cout << "                                                                            ------------------------------------------------------ " << endl;
		cout << "                                                                           |  Please select the service, you want to avail:       |" << endl;
		cout << "                                                                           |     * Place Order                                    |" << endl;
		cout << "                                                                           |     * Track Order                                    |" << endl;
		cout << "                                                                            ------------------------------------------------------ " << endl;
		cout << endl;
		cout << endl;
		string Service;
		cout << "                                                                           ";
		cout << "Enter:  ";
		getline(cin, Service);
		while (Service != "Place Order" && Service != "place order" && Service != "Track Order" && Service !=  "track order")
		{
			cout << "                                                                           ";
			cout << "Invalid Service!! " << endl << "                                                                           Enter Again:  ";
			getline(cin, Service);
		}
		if (Service == "Place Order" || Service == "place order")
		{
			system("CLS");
			cout << endl << endl;
			cout << "                                                                            ------------------------------------------------------ " << endl;
			cout << "                                                                           |                  TO PLACE YOUR ORDER                |" << endl;
			cout << "                                                                            ------------------------------------------------------ " << endl;
			cout << endl << endl << endl << endl;
			cout << "                                                                            ------------------------------------------------------ " << endl;
			cout << "                                                                           |  Please select a category from the following:        |" << endl;
			cout << "                                                                           |     * Italian                                        |" << endl;
			cout << "                                                                           |     * Pakistani                                      |" << endl;
			cout << "                                                                           |     * Chinese                                        |" << endl;
			cout << "                                                                           |     * Japanese                                       |" << endl;
			cout << "                                                                            ------------------------------------------------------ " << endl;
			cout << endl;

			cout << endl << endl;
			string foodCategory;
			cout << "                                                                           ";
			cout << "Enter:  ";
			getline(cin, foodCategory);
			while (foodCategory != "Italian" && foodCategory != "Pakistani" && foodCategory != "Chinese" && foodCategory != "Japanese" && foodCategory != "italian" && foodCategory != "pakistani" && foodCategory != "chinese" && foodCategory != "japanese")
			{
				cout << "                                                                           ";
				cout << "Not available!!" << endl << "                                                                           Enter Again:  ";
				getline(cin, foodCategory);
			}
			system("CLS");
			VirtualRestaurant order(foodCategory);


			if (GlobalResponse == "Cancel")
			{
				system("CLS");
				string response;
				cout << endl << "                                                                                        THANK YOU DEAR CUSTOMER FOR OUR SERVICES" << endl;
				cout << endl << endl;
				cout << "                                                                         ------------------------------------------------------------------" << endl;
				cout << "                                                                        |  Please Let Us Know, Why Are You Cancelling Your Order:          |" << endl;
				cout << "                                                                        |                                                                  |" << endl;
				cout << "                                                                        |  1. Not Convenient To Use                                        |" << endl;
				cout << "                                                                        |  2. Not All Famous Restaurants Available                         |" << endl;
				cout << "                                                                        |  3. Very Slow Order Procedure                                    |" << endl;
				cout << "                                                                        |  4. Long Delivery Time                                           |" << endl;
				cout << "                                                                        |  5. Change of Mind                                               |" << endl;
				cout << "                                                                        |  6. Other                                                        |" << endl;
				cout << "                                                                         ------------------------------------------------------------------" << endl << endl;
				cout << "                                                                           Enter Reason:  ";
				getline(cin, response);
				cout << endl << "                                                                  Thank You For Your Feedback Ma'am / Sir. Hope you will order next time :) " << endl;
			}
			else if (GlobalResponse == "Yes")
			{
				string fullName;
				int houseNumber;
				string area;
				string phoneNumber;
				cout << endl;
				TakingCustomerInfo(fullName, houseNumber, area, phoneNumber);
				CustomerDetails customer(fullName, houseNumber, area, phoneNumber);

				customer.OrderStatus = "Confirmed";
				Set.AddCustomerinList(customer);

				system("CLS");
				Discounting* D = nullptr;
				string Dresponse;
				string Serial;
				bool Used = 0;
				cout << endl;
				cout << "                                                                                       WE HAVE THREE DISCOUNT OPTIONS" << endl;
				cout << endl;
				cout << "                                                                        -------------------------------------------------------------" << endl;
				cout << "                                                                       |  Please Select the Discount Option with Serial Number:       |" << endl;
				cout << "                                                                       |     1. New Customer Discount       10%                       |" << endl;
				cout << "                                                                       |     2. Influencer Discount Code    15%                       |" << endl;
				cout << "                                                                       |     3. 15 Fifteen Item Discount    5%                        |" << endl;
				cout << "                                                                       |                                                              |" << endl;
				cout << "                                                                       |  Enter \"No\" if no discount required!                         |" << endl;
				cout << "                                                                        ------------------------------------------------------------- " << endl << endl;
				cout << "                                                                          Enter Sr. No:  ";
				getline(cin, Serial);
				while (Serial != "1" && Serial != "2" && Serial != "3" && Serial != "No" && Serial != "no")
				{
					cout << "                                                                          Invalid Option! Enter Again:  ";
					getline(cin, Serial);
				}
				while (Used == 0)
				{
					if (Serial == "1")
					{
						Dresponse = AskUserN(customer);
						if (Dresponse == "NewYes")
						{
							bool valid = NewOrNot(Set, customer);
							if (valid == true)
							{
								D = new NewCustomer;
								D->discount(Set, customer);
								Used = 1;
								cout << endl << "                                                                          You are provided with New Customer Discount!! " << endl << endl;
								displayOrder(customer.restaurantName, customer.wholeOrder, customer.TotalItems, customer.quantities, customer.Prices, customer.Bill, customer.discount, customer.discountBill);
							}
							else
							{
								cout << "                                                                          Sorry! You are not a New Customer!! " << endl;
								cout << endl << "                                                                          Do you want to use another discount option? (Yes / No) :  ";
								getline(cin, Serial);
								while (Serial != "yes" && Serial != "Yes" && Serial != "no" && Serial != "No")
								{
									cout << "                                                                          Invalid Answer!! Enter Again:  ";
									getline(cin, Serial);
								}
								if (Serial == "Yes" || Serial == "yes")
								{
									cout << "                                                                          Enter the Serial No. of Discount Option:  ";
									getline(cin, Serial);
								}
								else
								{
									Serial = "Back";
									Used = 1;
								}
							}
						}
						else if (Dresponse == "NO")
						{
							cout << endl << "                                                                          Do you want to use another discount option? (Yes / No) :  ";
							getline(cin, Serial);
							while (Serial != "yes" && Serial != "Yes" && Serial != "no" && Serial != "No")
							{
								cout << "                                                                          Invalid Answer!! Enter Again:  ";
								getline(cin, Serial);
							}
							if (Serial == "Yes" || Serial == "yes")
							{
								cout << "                                                                          Enter the Serial No. of Discount Option:  ";
								getline(cin, Serial);
							}
							else
							{
								Serial = "Back";
								Used = 1;
							}
						}
					}
					if (Serial == "2")
					{
						Dresponse = AskUserI(customer);
						if (Dresponse == "IDCodeYes")
						{
							string Code;
							cout << "                                                                          Enter the Influencer Discount Code:  ";
							getline(cin, Code);
							bool valid = CodeExist(Code);
							if (valid == true)
							{
								D = new InfluencerCode;
								D->discount(Set, customer);
								Used = 1;
								cout << endl <<"                                                                          You are provided with Influencer Code Discount!! " << endl << endl;
								displayOrder(customer.restaurantName, customer.wholeOrder, customer.TotalItems, customer.quantities, customer.Prices, customer.Bill, customer.discount, customer.discountBill);
							}
							else
							{
								cout << "                                                                          Sorry! The Entered Code is Invalid!! " << endl;
								cout << endl << "                                                                          Do you want to use another discount option? (Yes / No) :  ";
								getline(cin, Serial);
								while (Serial != "yes" && Serial != "Yes" && Serial != "no" && Serial != "No")
								{
									cout << "                                                                          Invalid Answer!! Enter Again:  ";
									getline(cin, Serial);
								}
								if (Serial == "Yes" || Serial == "yes")
								{
									cout << "                                                                          Enter the Serial No. of Discount Option:  ";
									getline(cin, Serial);
								}
								else
								{
									Serial = "Back";
									Used = 1;
								}
							}
						}
						else if (Dresponse == "NO")
						{
							cout << endl << "                                                                          Do you want to use another discount option? (Yes / No) :  ";
							getline(cin, Serial);
							while (Serial != "yes" && Serial != "Yes" && Serial != "no" && Serial != "No")
							{
								cout << "                                                                          Invalid Answer!! Enter Again:  ";
								getline(cin, Serial);
							}
							if (Serial == "Yes" || Serial == "yes")
							{
								cout << "                                                                          Enter the Serial No. of Discount Option:  ";
								getline(cin, Serial);
							}
							else
							{
								Serial = "Back";
								Used = 1;
							}
						}
					}
					if (Serial == "3")
					{
						Dresponse = AskUser15(customer);
						if (Dresponse == "15ItemsYes" || Dresponse == "NO")
						{
							bool valid = Valid15(customer);
							if (valid == true)
							{
								D = new FiftemItems;
								D->discount(Set, customer);
								Used = 1;
								cout << endl << "                                                                          Your Total Items are Equal to Or More Than 15, You are provided with Fifteen Items Discount!! " << endl << endl;
								displayOrder(customer.restaurantName, customer.wholeOrder, customer.TotalItems, customer.quantities, customer.Prices, customer.Bill, customer.discount, customer.discountBill);
							}
							else
							{
								if (Dresponse == "15ItemsYes")
								{
									cout << "                                                                          Sorry!! Your Total Items are Neither Equal to Nor More Than 15.  " << endl;
								}
								cout << endl << "                                                                          Do you want to use another discount option? (Yes / No) :  ";
								getline(cin, Serial);
								while (Serial != "yes" && Serial != "Yes" && Serial != "no" && Serial != "No")
								{
									cout << "                                                                          Invalid Answer!! Enter Again:  ";
									getline(cin, Serial);
								}
								if (Serial == "Yes" || Serial == "yes")
								{
									cout << "                                                                          Enter the Serial No. of Discount Option:  ";
									getline(cin, Serial);
								}
								else
								{
									Serial = "Back";
									Used = 1;
								}
							}
						}
					}
					if (Serial == "No" || Serial == "no")
					{
						Used = 1;
						Serial = "Back";
					}
				}
				//Discount Handling Done

				if (Serial == "Back" || Used == 1)
				{
					cout << endl;
					cout << "Enter Special Instructions Regarding Food or Delivery (if any) :  ";
					getline(cin, SpecialInstructions);

					cout << endl << endl;

					//Generating Order No.
					long long int ONumber;
					srand(time(0));

					// Generate a random 9-digit number
					int min = 10000000; // Smallest 8-digit number
					int max = 999999999; // Largest 9-digit number
					customer.OrderNo = rand() % (max - min + 1) + min;
					Set.List[Set.number - 1].OrderNo = customer.OrderNo;
					system("CLS");

					for (int i = 0; i < 11; i++) 
					{
						string singleLine;
						getline(confirmOut, singleLine);
						cout << singleLine << endl;
					}
					confirmOut.close();
					cout << endl << endl;
					displayTopBox(Set, Set.number - 1);
					displayOrder(customer.restaurantName, customer.wholeOrder, customer.TotalItems, customer.quantities, customer.Prices, customer.Bill, customer.discount, customer.discountBill);

					customer.OrderStatus = "Delivery Pending";
					Set.List[Set.number-1].OrderStatus = "Delivery Pending";
				}


			}

		}
		else if (Service == "track order" || Service == "Track Order")
		{
			system("CLS");
			TrackOrder(Set);
			cin.ignore();
		}
		
		cout << endl << endl << "                                                                    Enter \"Back\" to return to HomePage & \"Exit\" to close the application:  ";
		getline(cin, anotherRun);
		system("CLS");
	}

	cout << endl << endl;
	cout << "                                                                            ------------------------------------------------------ " << endl;
	cout << "                                                                           |             THANK YOU FOR USING OUR SERVICES         |" << endl;
	cout << "                                                                           |                     G O O D   B Y E                  |  " << endl;
	cout << "                                                                            ------------------------------------------------------ " << endl << endl << endl << endl;

}

