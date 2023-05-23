#ifndef phone_struct
#define phone_struct
struct Phone {
private:
	const char* model;
	int price;
	int year;
	
public:
	Phone() {
		this->model = "";
		this->price = 0;
		this->year = 0;
	}
	Phone(const char* model, int price, int year) {
		this->model = model;
		this->price = price;
		this->year = year;
	}
	void setModel(const char* model) {
		this->model = model;
	}
	void setPrice(int price) {
		this->price = price;
	}
	void setYear(int year) {
		this->year = year;
	}

	void getModel() {
		std::cout << this->model << std::endl;
	}
	void getPrice() {
		std::cout << this->price << std::endl;
	}
	void getYear() {
		std::cout << this->year << std::endl;
	}

	~Phone() {
		std::cout << "Phone destroy";
	}
};
#endif