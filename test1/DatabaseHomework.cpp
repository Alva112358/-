// BookSellShop.cpp: 定义控制台应用程序的入口点。
//

#include <iostream>
#include "mysql.h"
#include <string>
#include "BookAccess.h"
using namespace std;
MYSQL mysql;


int main() {
	BookAccess bookAccess;
	cout << bookAccess.getTotalBookNumber("DatabaseBook") << endl;
	cout << bookAccess.getSellBookNumber("DatabaseBook") << endl;
	// bookAccess.sellBook("DatabaseBook", 2);
	 bookAccess.returnBook("DatabaseBook", 1, 1);
	// bookAccess.purchaseBook("Washington Post", "DatabaseBook", 10);
	system("pause");
}
