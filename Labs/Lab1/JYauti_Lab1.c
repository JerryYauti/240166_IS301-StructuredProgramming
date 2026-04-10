/*IS301 Lab1 Submission
    Lab 1 Activity - Customer Bill Program
    Developed by: Jerry Yauti
    Date: 03/03/2026
*/

#include <stdio.h>

int main() {
    // Define constants
    const float TV_PRICE = 400.00;
    const float MONITOR_PRICE = 220.00;
    const float FLASHDRIVE_PRICE = 35.20;
    const float HARDDRIVE_PRICE = 150.00;
    const float PRINTER_PRICE = 300.00;
    const float TAX_RATE = 0.0835; // 8.35%

    // Declare variables for quantities
    int qtyTV, qtyMonitor, qtyFlash, qtyHard, qtyPrinter;

    // Prompt user for input
    printf("How many TVs were sold? ");
    scanf("%d", &qtyTV);

    printf("How many Monitors were sold? ");
    scanf("%d", &qtyMonitor);

    printf("How many Flash Drives were sold? ");
    scanf("%d", &qtyFlash);

    printf("How many Hard Drives were sold? ");
    scanf("%d", &qtyHard);

    printf("How many DeskJet Printers were sold? ");
    scanf("%d", &qtyPrinter);

    // Calculate totals
    float totalTV = qtyTV * TV_PRICE;
    float totalMonitor = qtyMonitor * MONITOR_PRICE;
    float totalFlash = qtyFlash * FLASHDRIVE_PRICE;
    float totalHard = qtyHard * HARDDRIVE_PRICE;
    float totalPrinter = qtyPrinter * PRINTER_PRICE;

    float subtotal = totalTV + totalMonitor + totalFlash + totalHard + totalPrinter;
    float tax = subtotal * TAX_RATE;
    float total = subtotal + tax;

    // Display output in tabular format
    printf("\n-----------------------------------------------\n");
    printf("QTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE\n");
    printf("%d\tTV\t\t%.2f\t\t%.2f\n", qtyTV, TV_PRICE, totalTV);
    printf("%d\tMonitor\t\t%.2f\t\t%.2f\n", qtyMonitor, MONITOR_PRICE, totalMonitor);
    printf("%d\tFlash Drive\t%.2f\t\t%.2f\n", qtyFlash, FLASHDRIVE_PRICE, totalFlash);
    printf("%d\tHard Drive\t%.2f\t\t%.2f\n", qtyHard, HARDDRIVE_PRICE, totalHard);
    printf("%d\tPrinter\t\t%.2f\t\t%.2f\n", qtyPrinter, PRINTER_PRICE, totalPrinter);

    printf("-----------------------------------------------\n");
    printf("Subtotal:\t\t\t\t%.2f\n", subtotal);
    printf("Tax (8.35%%):\t\t\t\t%.2f\n", tax);
    printf("Total:\t\t\t\t\t%.2f\n", total);
    printf("-----------------------------------------------\n");

    return 0;
}
