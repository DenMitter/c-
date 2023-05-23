#ifndef phone_struct
#define phone_struct
#define MarkPhone 1
	struct MarketPhone {
		private:
			char* model;
			int price;
			int year;

		public:
			MarketPhone() {
				this->model = "";
				this->price = 0;
				this->year = 0;
			}
			MarketPhone(const char* model, int price, int year) {
				this->model = model;
				this->price = price;
				this->year = year;
			}

			void setModel(char* model) {
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

			~MarketPhone() {
				cout << "MarketPhone destroy";
			}
	}; 
#endif