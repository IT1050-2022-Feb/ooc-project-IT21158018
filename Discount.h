class Discount {
protected:
	int staffId;
	int eventId;
public:
	Discount();
	Discount(int sId, int eId);
	void calculateDiscount();
	void displayDiscount();
	~Discount();
};