class Staff {
protected:
	int staff_id;
	int eventId;
	Payment *pm [size] 
public:
	Staff();
	Staff(Payment *mm [],int sID);
	void manageProfile();
	void makeReservation();
	int getStaffDiscount();
	void makePayment();
	~Staff();
};