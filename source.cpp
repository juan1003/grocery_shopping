#include <iostream>
#include <vector>
#include <string>

// Structure to represent a grocery item
struct GroceryItem {
    std::string name;
    double price;
    int quantity;
};

// Function to calculate the total cost of groceries
double calculateTotal(const std::vector<GroceryItem>& items) {
    double total = 0.0;
    for (const auto& item : items) {
        total += item.price * item.quantity;
    }
    return total;
}

int main() {
    std::vector<GroceryItem> groceryList;

    // Get the number of grocery items from the user
    int numItems;
    std::cout << "Enter the number of grocery items: ";
    std::cin >> numItems;

    // Get the details of each grocery item from the user
    for (int i = 0; i < numItems; ++i) {
        GroceryItem item;
        std::cout << "Enter the name of item " << i + 1 << ": ";
        std::cin.ignore();  // Ignore the newline character left in the input buffer
        std::getline(std::cin, item.name);
        std::cout << "Enter the price of item " << i + 1 << ": ";
        std::cin >> item.price;
        std::cout << "Enter the quantity of item " << i + 1 << ": ";
        std::cin >> item.quantity;
        groceryList.push_back(item);
    }

    // Calculate and display the total cost of groceries
    double total = calculateTotal(groceryList);
    std::cout << "Total cost of groceries: $" << total << std::endl;

    return 0;
}
