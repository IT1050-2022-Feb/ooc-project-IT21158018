class Report{
	private:
		int ReportID;
		char ReportType[10];
	public:
		Report();
		Report(int rID,char rType[]);
		void ReservationDetailsReport();
		void financialReport();
		void displayReport();
		~Report();		
};
