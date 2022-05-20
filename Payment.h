
class payment // make payment class
{
	//declare propties
	private : 
		int payment_id;
		char payment_type[20];
		int payment_card_number;
		char payment_card_type[20];
	
	//declare function
	public :
		
		payment();//default constractor 
		
		payment(int p_id,char p_type[20] , int p_c_number ,char p_c_type [20] ); //over loding constructor(constructor with parameters)
		
		void MakePayment();
		
		int Getamount();
		
		void ComfomationPayment();
		
		void DispayFinalPayment();
		
		~payment();//destructor constructor
			
};
