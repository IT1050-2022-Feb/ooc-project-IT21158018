using namespace std;

class enquiries // make inquiries class
{
	private :
		int  enquiries_id;
		char enquiries_description[50];
		char enquiries_status[50];
			
	public :
		
		enquiries();//default constractor
		
		enquiries(int e_id, char e_description[50], char e_status[50]); //over loading constractor
		
		void Add_new_enquiries();
		
		void Replay_enquiries();
		
		void Display_enquiries();
		
		~enquiries();//overloading constructor	
};
