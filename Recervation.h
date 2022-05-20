class Reservation{
	private:
		char ReservationID[8];
		char Date[10];
		double Price;
		int EventId;	
	public:
		Reservation();
		Reservation(char rID[],char date[],double price,int eID);
	 	void AddReservation();
		int calculateReservationAmount(); 
		void DisplayBillAmount();
		~Reservation();		
};
