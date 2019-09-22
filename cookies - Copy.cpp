/**
 * cookies.cpp
 * Project UID 1a8f9f9f446a857007e46689a8f3ab54
 *
 * <#Nathan Kubczak#>
 * <#kubczakn#>
 *
 * EECS 183: Project 1
 * Fall 2019
 *
 * <#Create a shopping list for M&M Brownie Cookies#>
 */
 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/**
 * Returns the singular or plural form of a word, based on number
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 1.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 *
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);

/*
* Requires: peopleNum from cin input
* Modifies: number of batches needed to make
*   numBatches divided by people amount a batch serves
* Effects: returns number of batches needed to make 
*/
int batches(int peopleNum);

/*
* Requires: batchCount >= 0;
* Modifies: divides numBatches by by amount needed per ingredient
*   converts ingredient amount into amount needed to be bought
* Effects: returns amount of an ingredient needed
*/
int flour(int batchCount);

int gransugar(int batchCount);

int brownsugar(int batchCount);

int butter(int batchCount);

int cocoa(int batchCount);

int eggs(int batchCount);

int vanilla(int batchCount);

int chips(int batchCount);

int mm(int batchCount);

int main() {
    //Number of people
    int numPeople;

    //Input for number of people
    cout << "How many people do you need to serve?" << endl; 
    cin >> numPeople;

    //Variables for quantities
    int numBatches = batches(numPeople); 
    int bagsFlour = flour(numBatches); 
    int bagsGran = gransugar(numBatches); 
    int bagsBrown = brownsugar(numBatches); 
    int poundsButter = butter(numBatches); 
    int containersCocoa = cocoa(numBatches); //Change, seperate between sizes, two variables: 8, 16ozContainers
    /*int smallCocoa = */
    int dozenEggs = eggs(numBatches); 
    int bottlesVanilla = vanilla(numBatches); //Change seperate between sizes, three variables: 1, 2 ,3ozBottles
    int bagsChips = chips(numBatches); 
    int bagsMms = mm(numBatches); 

    /*
    * Requires: the amount of ingredient needed to be bought
    * Modifies: take ingredient amount and multiplies it by
    *   the price per unit of ingredient
    * Effect: returns price of ingredient
    */
    double priceFlour = bagsFlour * 2.69;
    double priceGran = bagsGran * 3.99;
    double priceBrown = bagsBrown * 1.99;
    double priceButter = poundsButter * 2.79;
    double priceCocoa = containersCocoa * 3.29; //Change price here
    double priceEggs = dozenEggs * 1.99;
    double priceVanilla = bottlesVanilla * 6.79; //Change price here
    double priceChips = bagsChips * 2.39;
    double priceMms = bagsMms * 2.79;

    /*
    * Requires: price of each ingredient
    * Modifies: Nothing
    * Effect: returns price of all ingredients added together
    */
    double totalPrice = priceFlour + priceGran + priceBrown + priceButter +
        priceCocoa + priceEggs + priceVanilla + priceChips + priceMms;
    

    //Writes batches needed to make
    cout << "You need to make: " << numBatches << " ";
    cout << pluralize("batch", "batches", numBatches);
    cout << " of cookies" << endl;
    cout << "Shopping List for \"Best Ever\" M&M's Brownie Cookies" << endl;
    cout << "---------------------------------------------------" << endl;

    //Writes out shopping list
    cout << bagsFlour << " " << pluralize("bag", "bags", bagsFlour) <<
        " of flour" << endl;
    cout << bagsGran << " " << pluralize("bag", "bags", bagsGran) <<
        " of granulated sugar" << endl;
    cout << bagsBrown << " " << pluralize("bag", "bags", bagsBrown) <<
        " of brown sugar" << endl;
    cout << poundsButter << " " <<
        pluralize("pound", "pounds", poundsButter) << " of butter" << endl;
    cout << containersCocoa << " " << //Change amounts here
        pluralize("container", "containers", containersCocoa) <<
        " of cocoa powder" << endl;
    cout << dozenEggs << " dozen eggs" << endl;
    cout << bottlesVanilla << " " << //Change amounts here
        pluralize("bottle", "bottles", bottlesVanilla) <<
        " of vanilla" << endl;
    cout << bagsChips << " " << pluralize("bag", "bags", bagsChips) <<
        " of chocolate chips" << endl;
    cout << bagsMms << " " << pluralize("bag", "bags", bagsMms) <<
        " of mini baking M&M's" << endl;

    //Writes total cost of ingredients
    cout << "Total expected cost of ingredients: $" << totalPrice << endl;
    cout << "Have a great party!" << endl;

    return 0;
}

//Function definition for batch number
int batches( int peopleNum){
    return ceil(peopleNum / 14.0);
    }

//Function definitions for ingredient number
int flour(int batchCount) {
    double cupsFlour = batchCount * 3.5;
    return ceil(cupsFlour / 20.0);
}

int gransugar(int batchCount) {
    int cupsGran = batchCount * 2;
    return ceil(cupsGran / 10.0);
}

int brownsugar(int batchCount) {
    double cupsBrown = batchCount * 1.5;
    return ceil(cupsBrown / 4.5);
}

int butter(int batchCount) {
    int cupsButter = batchCount * 2;
    return ceil(cupsButter / 2.0);
}

int cocoa(int batchCount) {
    /*if */
    double cupsCocoa = batchCount * 2.5; //Change
    return ceil(cupsCocoa / 1.9);
}

/* int largecocoa(int batchCount) {
    double cupsCocoa = batchCount * 2.5; 
    return ceil(cupsCocoa / 3.8); 
    }*/

/*int smallCocoa(int batchCount) {
    double cupsCocoa = batchCount * 2.5;
    cupsCocoa = cupsCocoa % 3.8;
    return ceil(cupsCocoa / 1.9);
    }*/

int eggs(int batchCount) {
    int eggAmount = batchCount * 4;
    return ceil(eggAmount / 12.0);
}

int vanilla(int batchCount) {
    double tspVanilla = batchCount * 3.5; //Change
    return ceil(tspVanilla / 12.0);
}

int chips(int batchCount) {
    double cupsChips = batchCount * 1.5;
    return ceil(cupsChips / 2.0);
}

int mm(int batchCount) {
    int cupsMm = batchCount * 2;
    return ceil(cupsMm / 2.0);
}

//Pluralize function
string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}


