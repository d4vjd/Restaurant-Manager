#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Order.h"
#include "Product.h"
#include "Restaurant.h"
#include "Client.h"
#include "OrderDate.h"
using namespace std;


//Application for managing the delivery activity of a restaurant identified by an id and name.
//Orders are being taken (order id, customer name, date, time, list of ordered products and related prices) 
//and information will be obtained about the total value of a customer's orders over a period, respectively 
//the total value of orders per day.


void main() {

	Product p1, p2, p3, p4, p5;
	p1.setProductName("Pizza");
	p1.setPrice(30.00);
	p1.setId(1);
	p2.setProductName("Pasta");
	p2.setPrice(27.50);
	p2.setId(2);
	p3.setProductName("Burger");
	p3.setPrice(23.50);
	p3.setId(3);
	p4.setProductName("Water");
	p4.setPrice(5.50);
	p4.setId(4);
	p5.setProductName("Pancakes");
	p5.setPrice(15.00);
	p5.setId(5);

	Restaurant r;
	r.setProductList(p1);
	r.setProductList(p2);
	r.setProductList(p3);
	r.setProductList(p4);
	r.setProductList(p5);

	OrderDate d, startDate, endDate;
	string day, month, year, clientName;
	Order o;
	int x;
	cout << "To place an order, enter 1" << endl << " " << endl;
	cin >> x;
	while (x) {
		switch (x)
		{
		case 1:
			r.coutMenu();
			o.placeOrder(r.getProductList());
			r.addToOrderList(o);
			o.coutOrder();
			break;
		case 2:
			cout << "Introduce date:" << endl << " " << endl;
			cin >> day;
			d.setDay(day);
			cin >> month;
			d.setMonth(month);
			cin >> year;
			d.setYear(year);
			cout << "The total price of the orders from the selected date is: " << r.coutTotalFromDate(d) << " $" << endl << " " << endl;
			break;
		case 3:
			cout << "Introduce client name:" << endl;
			cin >> clientName;
			cout << "Introduce date period:" << endl << " " << endl;
			cin >> day;
			startDate.setDay(day);
			cin >> month;
			startDate.setMonth(month);
			cin >> year;
			startDate.setYear(year);
			cin >> day;
			endDate.setDay(day);
			cin >> month;
			endDate.setMonth(month);
			cin >> year;
			endDate.setYear(year);
			cout << "Client " << clientName << " has placed during the selected period orders worth " << r.coutTotalFromPeriod(startDate, endDate, clientName)<<" $" << endl << " " << endl;
		default:
			break;
		}
		cout << "To place another order, enter 1" << endl;
		cout << "To see the total price of orders from a certain date, enter 2" << endl;
		cout << "To see a customer's total over a period, enter 3" << endl;
		cout << "To exit app, enter 0" << endl << " " << endl;
		cin >> x;
	}
	
}