# Retail Shop Management System 🛒

A comprehensive C++ console-based application designed to efficiently manage product records within a retail store. This system provides essential inventory management functionalities with an intuitive menu-driven interface and colorful console output.

## 👥 Team Members

- **Muhammad Sudais Khalid**
- **Hashir Khan**
- **Naaz Ahmad**

## 📋 Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Program Structure](#program-structure)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Function Details](#function-details)
- [User Interface](#user-interface)
- [Code Structure](#code-structure)
- [Screenshots](#screenshots)
- [Future Enhancements](#future-enhancements)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## 📖 Introduction

The Retail Shop Management System is a simple yet effective C++ program designed to manage product records within a retail store. This console-based application offers comprehensive inventory management capabilities including adding new products, displaying product details, calculating total stock value, searching for products, updating product information, and removing products from inventory.

## ✨ Features

- **Product Management**: Add, update, and delete products from inventory
- **Inventory Display**: View all products in a well-formatted table
- **Search Functionality**: Quickly find specific products by name
- **Stock Valuation**: Calculate total value of entire inventory
- **Colorful Interface**: Enhanced visual presentation with console colors
- **Data Validation**: Basic input validation and error handling
- **Menu-Driven**: Easy-to-navigate menu system
- **Capacity Management**: Supports up to 100 products with overflow protection

## 🏗️ Program Structure

The program follows a modular design approach:

- **Struct-based Data Storage**: Uses `Product` struct to store product information
- **Function-based Operations**: Each functionality is encapsulated in separate functions
- **Console-based Interface**: Interactive menu-driven user experience
- **Array Management**: Efficient product array handling for CRUD operations

### Data Structure
```cpp
struct Product {
    string name;      // Product name
    int price;        // Product price in Rs.
    int quantity;     // Available quantity
};
```

## 🛠️ Technologies Used

- **Programming Language**: C++
- **Libraries**: 
  - `iostream` - Input/output operations
  - `windows.h` - Console color management
- **Development Environment**: Any C++ compiler (Dev-C++, Code::Blocks, Visual Studio, etc.)

## 📦 Installation

1. **Prerequisites**:
   - C++ compiler installed on your system
   - Windows OS (for color functionality)

2. **Clone the repository**:
   ```bash
   git clone https://github.com/muhammadsudaiskhalid/retail-shop-management.git
   cd retail-shop-management
   ```

3. **Compile the program**:
   ```bash
   g++ -o retail_shop main.cpp
   ```

4. **Run the application**:
   ```bash
   ./retail_shop
   ```

## 🚀 Usage

### Main Menu Options

1. **Add a new product** - Register new inventory items
2. **Display product details** - View all products in tabular format  
3. **Calculate total value** - Get total worth of inventory
4. **Search for a product** - Find specific products by name
5. **Update product** - Modify existing product details
6. **Delete product** - Remove products from inventory
7. **Exit** - Close the application

### Sample Workflow

```
1. Start the application
2. Choose option 1 to add products:
   - Enter product name: "Laptop"
   - Enter price: 50000
   - Enter quantity: 10
3. Choose option 2 to view all products
4. Choose option 4 to search for "Laptop"
5. Choose option 3 to see total inventory value
```

## 🔧 Function Details

### `adding(Product record[], int& count)`
- Adds new products to the inventory
- Validates against maximum capacity (100 products)
- Prompts for product name, price, and quantity

### `displaying(const Product record[], int count)`
- Displays all products in tabular format
- Shows product name, price, and quantity
- Handles empty inventory gracefully

### `TotalValue(const Product record[], int count)`
- Calculates total value of entire stock
- Returns sum of (price × quantity) for all products

### `search(const Product record[], int count)`
- Searches for products by name
- Displays product details if found
- Provides "not found" feedback

### `update(Product record[], int count)`
- Updates existing product information
- Allows modification of price and quantity
- Validates product existence

### `remove(Product record[], int& count)`
- Removes products from inventory
- Maintains contiguous array structure
- Updates product count accordingly

## 🎨 User Interface

The program features:
- **Colorful Console Output**: Different colors for various operations
- **Menu-Driven Navigation**: Numbered options for easy selection
- **Formatted Tables**: Clean display of product information
- **User Feedback**: Confirmation messages for all operations
- **Error Handling**: Appropriate messages for invalid operations

### Color Scheme
- Yellow: Product addition
- Red: Product display
- Magenta: Total value calculation
- White: Product updates
- Green: Product deletion
- Blue: Menu options

## 📁 Code Structure

```
retail-shop-management/
├── main.cpp              # Main program file
├── README.md            # Project documentation
├── screenshots/         # Application screenshots
└── docs/               # Additional documentation
```

## 📸 Screenshots

*Screenshots showing the application interface and functionality would be displayed here*

## 🚀 Future Enhancements

- [ ] **File I/O**: Save/load inventory data from files
- [ ] **Advanced Search**: Search by price range or quantity
- [ ] **Sorting Options**: Sort products by name, price, or quantity
- [ ] **Low Stock Alerts**: Notifications for low inventory
- [ ] **Sales Tracking**: Record and track sales transactions
- [ ] **GUI Version**: Develop Windows Forms or Qt-based interface
- [ ] **Database Integration**: Connect to MySQL or SQLite
- [ ] **Reports Generation**: Generate inventory and sales reports
- [ ] **User Authentication**: Add login system for multiple users
- [ ] **Backup/Restore**: Data backup and recovery features

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 📞 Contact

**Muhammad Sudais Khalid** *(Project Lead)*
- 📧 Email: [muhammadsudaiskhalid.artificialintelligence@stmu.edu.pk](mailto:muhammadsudaiskhalid.artificialintelligence@stmu.edu.pk)
- 💼 LinkedIn: [https://www.linkedin.com/in/sudais-khalid/](https://www.linkedin.com/in/sudais-khalid/)
- 💬 Discord: [https://discord.com/invite/cfjfrec9](https://discord.com/invite/cfjfrec9)
- 🌐 Project Link: [https://github.com/muhammadsudaiskhalid/retail-shop-management](https://github.com/muhammadsudaiskhalid/retail-shop-management)

**Team Members:**
- **Hashir Khan** - Co-Developer
- **Naaz Ahmad** - Co-Developer


---

⭐ **If you found this project helpful, please give it a star!** ⭐

## 🙏 Acknowledgments

- Thanks to **Ma'am Samina Mushtaq** and **Sir Ghulam Mustafa** for their guidance and support
- Team members for collaborative development effort
- C++ community for excellent documentation and resources
- Programming Fundamentals course for providing the foundation

## 📊 Project Statistics

- **Language**: C++
- **Lines of Code**: ~150
- **Functions**: 6 main functions
- **Max Capacity**: 100 products
- **Team Size**: 3 developers
- **Development Time**: 1 semester project

---

*This project demonstrates fundamental programming concepts including struct usage, array manipulation, function implementation, and user interface design in C++.*
