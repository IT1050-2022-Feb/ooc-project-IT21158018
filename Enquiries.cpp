enquiries::enquiries()
{
	enquiries_id=0;  //inquiries id initalizing to zero
	
	strcpy(enquiries_description,""); // set inquiries description to blank
	
	strcpy(enquiries_status,""); //set inquiries description to blank
	
};


enquiries::enquiries(int e_id, char e_description[50] , char e_status[50]) //overloaded constructor
{

	enquiries_id=e_id; //set inquiries_id=i_id
	
	strcpy(enquiries_description,e_description); //set inquiries_description to i_description
	
	strcpy(enquiries_status,e_status);	//set inquiries_status to i_status
};



void enquiries::Add_new_enquiries()//implement fuction
{
	
};

void enquiries::Replay_enquiries()//implement fuction
{
	
};

void enquiries::Display_enquiries()//implement fuction
{
	
};

enquiries::~enquiries() // destructor
{
	
};
