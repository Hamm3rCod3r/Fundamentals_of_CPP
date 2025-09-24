#include <iostream>
using namespace std;
void main()
{
    float totalSales = 0;
    char computeAnotherBill = 'Y';

    while (computeAnotherBill == 'y' || computeAnotherBill == 'Y') {
        int bill = 0;
        char addAnotherCategory = 'Y';

        while (addAnotherCategory == 'y' || addAnotherCategory == 'Y') {
            cout << "\nSelect a category:\n";
            cout << "F for Food Items\n";
            cout << "C for Cosmetics\n";
            cout << "D for Detergents\n";
            cout << "L for Cold Drinks\n";
            cout << "J for Juices\n";
            char category;
            cin >> category;

            if (category == 'F' || category == 'f') {
                cout << "\nFood Items:\n";
                cout << "1. Bread \n";
                cout << "2. Rice \n";
                cout << "3. Milk \n";
                cout << "4. Cheese\n";
                cout << "5. Butter \n";
                cout << "Select an item: ";
                int item;
                cin >> item;

                int price;
                if (item == 1) price = 200;
                else if (item == 2) price = 300;
                else if (item == 3) price = 150;
                else if (item == 4) price = 500;
                else if (item == 5) price = 400;
                else {
                    cout << "Invalid selection.\n";

                }

                cout << "Enter quantity: ";
                int quantity;
                cin >> quantity;
                bill += price * quantity;

            }
            else if (category == 'C' || category == 'c') {
                cout << "\nCosmetics:\n";
                cout << "1. Lipstick \n";
                cout << "2. Shampoo \n";
                cout << "3. Soap \n";
                cout << "4. Lotion \n";
                cout << "5. Perfume\n";
                cout << "Select an item: ";
                int item;
                cin >> item;

                float price;
                if (item == 1) price = 100;
                else if (item == 2) price = 150;
                else if (item == 3) price = 500;
                else if (item == 4) price = 200;
                else if (item == 5) price = 250;
                else {
                    cout << "Invalid selection.\n";

                }

                cout << "Enter quantity: ";
                int quantity;
                cin >> quantity;
                bill += price * quantity;

            }
            else if (category == 'D' || category == 'd') {
                cout << "\nDetergents:\n";
                cout << "1. Laundry Detergent \n";
                cout << "2. Dish Soap \n";
                cout << "3. Bleach \n";
                cout << "4. Fabric Softener \n";
                cout << "5. Stain Remover \n";
                cout << "Select an item: ";
                int item;
                cin >> item;

                int price;
                if (item == 1) price = 120;
                else if (item == 2) price = 800;
                else if (item == 3) price = 600;
                else if (item == 4) price = 100;
                else if (item == 5) price = 700;
                else {
                    cout << "Invalid selection.\n";
                    continue;
                }

                cout << "Enter quantity: ";
                int quantity;
                cin >> quantity;
                bill += price * quantity;

            }
            else if (category == 'L' || category == 'l') {
                cout << "\nCold Drinks:\n";
                cout << "1. Cola \n";
                cout << "2. Lemonade \n";
                cout << "3. Orange Soda \n";
                cout << "4. Root Beer \n";
                cout << "5. Iced Tea \n";
                cout << "Select an item: ";
                int item;
                cin >> item;

                int price;
                if (item == 1) price = 100;
                else if (item == 2) price = 150;
                else if (item == 3) price = 180;
                else if (item == 4) price = 120;
                else if (item == 5) price = 200;
                else {
                    cout << "Invalid selection.\n";

                }

                cout << "Enter quantity: ";
                int quantity;
                cin >> quantity;
                bill += price * quantity;

            }
            else if (category == 'J' || category == 'j') {
                cout << "\nJuices:\n";
                cout << "1. Orange Juice \n";
                cout << "2. Apple Juice \n";
                cout << "3. Grape Juice \n";
                cout << "4. Cranberry Juice\n";
                cout << "5. Mango Juice \n";
                cout << "Select an item: ";
                int item;
                cin >> item;

                int price;
                if (item == 1) price = 200;
                else if (item == 2) price = 250;
                else if (item == 3) price = 300;
                else if (item == 4) price = 350;
                else if (item == 5) price = 400;
                else {
                    cout << "Invalid selection.\n";
                    continue;
                }

                cout << "Enter quantity: ";
                int quantity;
                cin >> quantity;
                bill += price * quantity;

            }
            else {
                cout << "Invalid category. Please try again.\n";
                continue;
            }

            cout << "Do you want to add another item in the same category? (y/Y for yes): ";
            cin >> addAnotherCategory;
        }

        cout << "\nTotal Bill: Rs" << bill << endl;

        int amountPaid = 0;
        while (amountPaid < bill) {
            cout << "Enter amount paid by the customer: ";
            cin >> amountPaid;

            if (amountPaid < bill) {
                cout << "Insufficient amount. Please pay at least Rs" << (bill - amountPaid) << " more.\n";
            }
        }

        int change = amountPaid - bill;
        cout << "Change to return: Rs" << change << endl;

        totalSales += bill;

        cout << "Do you want to compute another bill? (y/Y for yes): ";
        cin >> computeAnotherBill;
    }

    cout << "\nTotal sales of the day: Rs" << totalSales << endl;

    system("pause");
}
