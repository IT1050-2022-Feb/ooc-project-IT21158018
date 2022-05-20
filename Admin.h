#include"Enquries.h"
#include"Report.h"
#include"event_and_packages.h"
#define size 5
class admin{
	private:
		Enquries *Enq[size];
		Report *Rp[size];
		event_and_packages *Eap[size];
		char username[20];
		char password[15];
	public:
	     admin();
	     admin(Enquries *En[],Report *Rip[],event_and_packages *Ep[],char u_name[],char pass[]);
		 void loging();
		 void checkpassword();
		 void reply_enquries();
		 void  update_event_and_packages();
		 void  approve_recervation();
		 void  genarate_payment_report();
		 void genarate_recervation_report();
		 void  add_new_event_and_packages();
		 ~admin();	
		
};

