
#include <cstring>

using namespace std;

   admin::admin(){
   	  
   	
   	for (int i=0;i<size;i++){
   		   Enq[i]=0;
	   };
	for (int p=0;i<size;i++){
		   Rp[p]=0;
   		
	   };
	for (int c=0;i<size;i++){
   		  Eap[c]=0;
	   };
	
   	strcpy(username,"");
   	sctrcpy(password,"");
   };
   admin::admin(Enquries *En[],Report *Rip[],event_and_packages *Ep[],char u_name[],char pass[]){

   	for (int i=0;i<size;i++){
   		   Enq[i]=En[i];
	   };
	for (int p=0;i<size;i++){
		   Rp[p]=Rip[p];
   		
	   };
	for (int c=0;i<size;i++){
   		  Eap[c]=Ep[c];
	};
   		  
   	strcpy(username,u_name);
   	strcpy(password,pass);
   };
    void admin::loging(){
   	 	 
   };
    void admin::checkpassword(){
   };
    void admin::reply_enquries(){
   };
    void admin::update_event_and_packages(){
   };
    void admin::approve_recervation(){
   };
    void admin::genarate_payment_report(){
   };
    void admin::genarate_recervation_report(){
   }
    void admin::add_new_event_and_packages(){
   };
    admin::~admin(){
    	for (int i=0;i<size;i++){
   		  delete Enq[i];
	   };
	for (int p=0;i<size;i++){
		   delete Rp[p];
   		
	   };
	for (int c=0;i<size;i++){
   		  delete Eap[c];
	};
	};
   
   
