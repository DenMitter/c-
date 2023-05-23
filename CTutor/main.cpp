#include <iostream>
#include "Phone.h"
#include "MarketPhone.h"
using namespace std; 


#if MarkPhone 0
int main() {
	MarketPhone marketphone("M", 14000, 2021);

	marketphone.getModel();
	marketphone.getPrice();
	marketphone.getYear();
	return 0;
}

#else
int main() {
	Phone phone("P", 12000, 2021);

	phone.getModel();
	phone.getPrice();
	phone.getYear();
	return 0;
}
#endif