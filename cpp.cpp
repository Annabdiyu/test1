#include <iostream>
#include <vector>

using namespace std;

struct Product {
    string name;
    double costPrice;
    double sellingPrice;
    int quantitySold;
};

const double TAX_RATE = 0.10; // Assuming a tax rate of 10%

double calculateSales(const Product& product) {
    return product.sellingPrice * product.quantitySold;
}

double calculateProfit(const Product& product) {
    return (product.sellingPrice - product.costPrice) * product.quantitySold;
}

double calculateTax(double sales) {
    return sales * TAX_RATE;
}

int main() {
    const int NUM_PRODUCTS = 5;
    vector<Product> products(NUM_PRODUCTS);

    // Input details for each product
    for (int i = 0; i < NUM_PRODUCTS; ++i) {
        cout << "Enter details for product " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> products[i].name;
        cout << "Cost Price: ";
        cin >> products[i].costPrice;
        cout << "Selling Price: ";
        cin >> products[i].sellingPrice;
        cout << "Quantity Sold: ";
        cin >> products[i].quantitySold;
    }

    double totalSales = 0.0;
    double totalProfit = 0.0;
    double totalTax = 0.0;

    // Calculate total sales, profit, and tax
    for (const auto& product : products) {
        double sales = calculateSales(product);
        double profit = calculateProfit(product);
        double tax = calculateTax(sales);

        totalSales += sales;
        totalProfit += profit;
        totalTax += tax;
    }

    // Output the results
    cout << "\nMonthly Summary:\n";
    cout << "Total Sales: $" << totalSales << endl;
    cout << "Total Profit: $" << totalProfit << endl;
    cout << "Total Tax: $" << totalTax << endl;
    cout <<"Thanks for using our app"<<endl;

    return 0;
}
