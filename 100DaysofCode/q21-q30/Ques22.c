#include <stdio.h>

int main() {
    float costprice, sellingprice, profit, loss, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costprice, &sellingprice);

    if (sellingprice > costprice) {
      profit = sellingprice - costprice;
    percentage = (profit / costprice) * 100;
       printf("Profit %.2f%%\n", percentage);
    }
    else if (costprice > sellingprice) {
        loss = costprice - sellingprice;
        percentage = (loss / costprice) * 100;
       printf("Loss %.2f%%\n", percentage);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}