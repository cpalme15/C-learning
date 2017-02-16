class Account
{



	
public:
	Account();
	~Account();
	double balance;
	int cusnum;
	int pin;
	void setbalance(double d);
	double readbalance();
	void setcusnum(int i);
	void setpin(int j);
	int getcusnum();
	int getpin();
	
};
Account::Account() {
	balance = 0.0;
	cusnum = 001;
	pin = 1234;

}
Account::~Account() {}
void Account::setbalance(double d) 
{
	balance = d;
}
double Account::readbalance() {
	return balance;

}
void Account::setcusnum(int i) {

	cusnum = i;
}
void Account::setpin(int j) {

	pin = j;
}
int Account::getcusnum() { return cusnum; }
int Account::getpin() { return pin; }
