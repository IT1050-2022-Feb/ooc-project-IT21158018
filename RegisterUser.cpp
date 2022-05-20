#include<iostream>
#include<cstring>
#include "RegisterUser.h"

	
RegisterUser::RegisterUser(){
	for ( int i=0; i<size; i++){
		r1[i] = 0;
	};
	for ( int a=0; i<size; i++){
		p1[i] = 0;
	};
	Strcpy(username,"");
	Strcpy(password,"");
};

RegisterUser::RegisterUser(Reservation *r[],payment *p[],Char uname,Char psw){
	for ( int i=0; i<size; i++){
		r1[i] = r[i];
	};
	for ( int a=0; a<size; a++){
		p1[a] = p[a];
	};
	Strcpy(username,uname);
	Strcpy(password,psw);
};

Void RegisterUser::login(){
};
Void RegisterUser::CheckPassword(){
};
Void RegisterUser::CheckAvailability(){
};
VoidRegisterUser::AddEnquire(Enquire *e1){
};
Void RegisterUser::MakeReservation(){
};
Void RegisterUser::MakePayment(){
};
Void RegisterUser::logout(){
};
RegisterUser::~RegisterUser(){
	for ( int i=0; i<size; i++){
	 	delete r1[i] ;
	};
	for ( int a=0; a<size; a++){
		delete p1[a] ;
	};
};


