
#include <stdio.h>

int main() {
    int numCanvases, numPaintTubes;
    int canvasPrice = 120; // Price of each 10x10 sized canvas
    int paintTubePrice = 75; // Price of each 25 ml paint tube
    int totalAmount, discount, newTotal;

    printf("Enter the number of canvases ordered: ");
    scanf("%d", &numCanvases);

    printf("Enter the number of paint tubes ordered: ");
    scanf("%d", &numPaintTubes);

    totalAmount = (numCanvases * canvasPrice) + (numPaintTubes * paintTubePrice);

    printf("Previous total: %d\n", totalAmount);

    if (totalAmount >= 0 && totalAmount <= 299) {
        discount = 0;
    } else if (totalAmount >= 300 && totalAmount <= 499) {
        discount = 10;
    } else if (totalAmount >= 500 && totalAmount <= 749) {
        discount = 20;
    } else if (totalAmount >= 750 && totalAmount <= 999) {
        discount = 50;
    } else if (totalAmount >= 1000) {
        discount = 150;
    }

    newTotal = totalAmount - discount;

    printf("New total after discount: %d\n", newTotal);

    return 0;
}
