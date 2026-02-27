/*  Problem: Customer's BillS
    Algorithm: 1. Define unit prices
               2. Declare variables for quantities and totals
               3. Prompt user for quantities
               4. Calculate total prices
               5. Calculate subtotal, tax, and total
               6. Display the results

    Developed by: Philemon KIRA
    Date: 24/02/2026

*/

#include <stdio.h>

int main(){

    //your program statements goes here

    //Define the unit price
    const float priceTV = 400.00;
    const float priceMonitor = 220.00;
    const float priceFlashDrive = 35.20;
    const float priceHardDrive = 150.00;
    const float priceDeskJetPrinter = 300.00;

    //Declare variables for quantities and totals
    int qtyTV, qtyMonitor, qtyFlashDrive, qtyHardDrive, qtyDeskJetPrinter;
    float totalTV, totalMonitor, totalFlashDrive, totalHardDrive, totalDeskJetPrinter;
    float subtotal, tax, total;

    //Prompt user for quantities
    printf("How Many TVs Were Sold? ");
    scanf("%d", &qtyTV);
    printf("How Many Monitors Were Sold? ");
    scanf("%d", &qtyMonitor);
    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &qtyFlashDrive);
    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &qtyHardDrive);
    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &qtyDeskJetPrinter);

   //Calculate the total price
    totalTV = qtyTV * priceTV;
    totalMonitor = qtyMonitor * priceMonitor;
    totalFlashDrive = qtyFlashDrive * priceFlashDrive;
    totalHardDrive = qtyHardDrive * priceHardDrive;
    totalDeskJetPrinter = qtyDeskJetPrinter * priceDeskJetPrinter;

    //Calculate subtotal, tax and total
    subtotal = totalTV + totalMonitor + totalFlashDrive + totalHardDrive + totalDeskJetPrinter;
    tax = subtotal * 0.0835; // 8.35% sales tax
    total = subtotal + tax;

    //Display the result
    printf("\nQTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE\n");
    printf("-----------------------------------------------------\n");
    printf("%d\tTV\t\t%.2f\t\t%.2f\n", qtyTV, priceTV, totalTV);
    printf("%d\tMonitor\t\t%.2f\t\t%.2f\n", qtyMonitor, priceMonitor, totalMonitor);
    printf("%d\tFlash Drive\t%.2f\t\t%.2f\n", qtyFlashDrive, priceFlashDrive, totalFlashDrive);
    printf("%d\tHard Drive\t%.2f\t\t%.2f\n", qtyHardDrive, priceHardDrive, totalHardDrive);
    printf("%d\tDeskjet Printer\t%.2f\t\t%.2f\n", qtyDeskJetPrinter, priceDeskJetPrinter, totalDeskJetPrinter);
    printf("-----------------------------------------------------\n");
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax: %.2f\n", tax);
    printf("Total: %.2f\n", total);

return 0;
}
