#include <iostream>
#include <windows.h>
using namespace std;

struct Product {
    string name;
    int price;
    int quantity;
};

void adding(Product record[], int& count) 
{
    if (count < 100)
	 {
	 	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,6);
        cout << "Enter product name: ";
        cin >> record[count].name;

        cout << "Enter product price: Rs.";
        cin >> record[count].price;

        cout << "Enter quantity available: ";
        cin >> record[count].quantity;

        count++;

        cout << "\t-----Product added-----\n";
    }
	 else
	  {
        cout << "Sorry, the range is full.\n";
    }
}

void displaying(const Product record[], int count)
 {
    if (count == 0) 
	{
        cout << "No products available.\n";
        
    }
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,4);
    cout << "Product Name" << "\t" << "Price" << "\t\t" << "Quantity" << endl;
    for (int i = 0; i < count; ++i)
	 {
        cout << record[i].name << "\t\t" << "Rs." << record[i].price << "\t\t" << record[i].quantity << endl;
    }
    
    
}

double TotalValue(const Product record[], int count)

 {
 	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,5);
    double total = 0.0;
    for (int i = 0; i < count; ++i) 
	
	{
		
        total += record[i].price * record[i].quantity;
    }
    return total;
}

void search(const Product record[], int count)
 {
 	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,4);
    string searchName;
    cout << "\nEnter the name of the product you want to search: ";
    cin >> searchName;
    bool found = false;
    for (int i = 0; i < count; ++i) 
	{
        if (record[i].name == searchName) 
		{
            found = true;
            cout << "Product Name" << "\t" << "Price" << "\t\t" << "Quantity" << endl;
            cout << record[i].name << "\t\t" << "Rs." << record[i].price << "\t\t" << record[i].quantity << endl;
            break;
        }
    }
    if (!found) 
	{
		
        cout << "Product not found." << endl;
    }
}

void update(Product record[], int count) 
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,7);
    string updateName;
    cout << "\nEnter the name of the product you want to update: ";
    cin >> updateName;
    bool found = false;
    for (int i = 0; i < count; ++i) 
	{
        if (record[i].name == updateName)
		 {
            found = true;
            cout << "Enter new price for " << record[i].name << ": Rs.";
            cin >> record[i].price;
            cout << "Enter new quantity for " << record[i].name << ": ";
            cin >> record[i].quantity;
            cout << "\nProduct details updated successfully.\n";
            break;
        }
    }
    if (!found) 
	{
        cout << "Product not found." << endl;
    }
}

void remove(Product record[], int& count) 
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
    string deleteName;
    cout << "\nEnter the name of the product you want to delete: ";
    cin >> deleteName;
    bool found = false;
    for (int i = 0; i < count; ++i)
	 {
        if (record[i].name == deleteName)
		 {
            found = true;
            for (int j = i; j < count - 1; ++j) 
			{
                record[j] = record[j + 1];
            }
            count--;
            cout << "\n\tProduct deleted successfully.";
            break;
        }
        
    }
    if (!found) {
        cout << "Product not found." << endl;
    }
}

int main() 
{
    Product record[100];
    int count = 0;
    int choice;
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,16);
    cout<<"\n\t\t\t RETAIL SHOP MANGEMENT ";
    while (true ) {
    	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,11);
    	
        cout << "\n\n****************************************\n";
        cout << "--- Shop Menu ---\n";
        cout << "1. Add a new product\n";
        cout << "2. Display product details\n";
        cout << "3. Calculate total value\n";
        cout << "4. Search for a product\n";
        cout << "5. Update product\n";
        cout << "6. Delete product\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"****************************************"<<endl<<endl;
        
        switch (choice) 
		{
            case 1:
                adding(record, count);
                break;
            case 2:
                displaying(record, count);
                break;
            case 3:
                cout << "\n\tTotal value of stock: Rs = " << TotalValue(record, count) << endl;
                break;
            case 4:
                search(record, count);
                break;
            case 5:
                update(record, count);
                break;
            case 6:
                remove(record, count);
                break;
            case 7:
            	cout<<"\n\t\t [ THANK YOU ] "<<endl;
            	exit(0);
                
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
        
    } 

    return 0;
}
