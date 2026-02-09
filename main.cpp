#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter number of products: ";
    cin >> N;

    vector<int> sellPrice(N);
    vector<int> costPrice(N);

    int discount, finalPrice;

    for (int i = 0; i < N; i++) {
        cout << "Enter selling price of product " << i + 1 << ": ";
        cin >> sellPrice[i];
    }

    for (int i = 0; i < N; i++) {
        cout << "Enter cost price of product " << i + 1 << ": ";
        cin >> costPrice[i];
    }

    cout << "\nFinal prices:\n";

    for (int i = 0; i < N; i++) {

        if (sellPrice[i] < 100000)
            discount = 0;
        else if (sellPrice[i] < 200000)
            discount = sellPrice[i] * 5 / 100;
        else if (sellPrice[i] < 300000)
            discount = sellPrice[i] * 10 / 100;
        else if (sellPrice[i] < 500000)
            discount = sellPrice[i] * 15 / 100;
        else
            discount = sellPrice[i] * 20 / 100;

        finalPrice = sellPrice[i] - discount;

        if (finalPrice < costPrice[i]) {
            finalPrice = sellPrice[i];
            discount = 0;
        }

        cout << "Product " << i + 1
             << " | Final Price: " << finalPrice
             << " | Discount: " << discount << endl;
    }

    return 0;
}
