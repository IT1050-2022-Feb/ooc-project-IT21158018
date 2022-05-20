#include<iostream>
#include<cstring>
#include "visitor.h"
visitor::visitor (){
	Strcpy(name,"");
	Strcpy(email,"");
	Strcpy(address,"");
	contact_no = 0;
	Strcpy(password,"")
};
visitor::visitor(Char R_name,Char umail, Char adr,int c_no,Char psw) {

	Strcpy(name,R_name);
	Strcpy(email,umail);
	Strcpy(address,adr);
	contact_no = c_no;
	Strcpy(password,psw);
};
void visitor:: PasswordValidation(){
};
Void visitor::registration (){
};
Void visitor::CancelRegistration (){
};
Void visitor::CheckAvailability (){
};
visitor::~visitor (){
};


