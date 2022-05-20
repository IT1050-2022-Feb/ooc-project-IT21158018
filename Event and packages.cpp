#include<iostream>
#include <cstring>

    
    event_and_packages::event_and_packages(){
    	D1 = new Discount(0);
    	eventid=0;
    	strcpy(eventname,"");
    	eventprice=0;
    	
	};
	event_and_packages::event_and_packages(Discount *D,int e_id,char e_name[],float e_price){
	D1 = new Discount(D);	
	eventid=e_id;
   	strcpy(eventname,e_name);
   	eventprice=e_price;
	};

    event_and_packages::add_new_event_and_packages(){
   	
   };
   void event_and_packages::update_event_and_packages(){
   } ;
   void event_and_packages::display_event_and_packages(){
   } ;
     
    event_and_packages::~event_and_packages(){
     	
		delete D1;
   };
    
   
   
