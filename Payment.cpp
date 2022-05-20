#include<iostream>
#include"Payment.h"

using namespace std;


payment::payment()//default constructor
{
	payment_id=0;//payment id initalizing to zero
	
	strcpy(payment_type,""); //set payment type to blank
	
	payment_card_number=0;// payment card number initalizing to zero
	
	strcpy(payment_card_type,""); //set payment card type to blank
	
};

payment::payment(int p_id,char p_type[20] , int p_c_number ,char p_c_type[20]) //overloaded constructor
{
	payment_id = p_id;
	
	strcpy(payment_type,p_type);
	
	payment_card_number=p_c_number;
	
	strcpy(payment_card_type,p_c_type);
	
};

void payment::MakePayment()// makepayment function implementataion
{
	
};


int payment::Getamount()//getammout function implementataion
{
	
};


void payment::ComfomationPayment()//conformation function implementataion
{
	
};

void payment::DispayFinalPayment()//displayfinalpayment function implementataion
{
	
};
		
payment::~payment()// destructor
{
	
};
