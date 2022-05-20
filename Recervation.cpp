#include<iostream>
#include <cstring>
#include"Recervation.h"

Reservation::Reservation(){
	strcpy(ReservationID,"");
	strcpy(Date,"");
	Price=0;
	EventId=0;	
};
Reservation::Reservation(char rID[],char date[],double price,int eID){
 	strcpy(ReservationID,rID);
	strcpy(Date,date);
	Price=price;
	EventId=eID;	
 };
 
int Reservation::calculateReservationAmount(){		
};
void Reservation::DisplayBillAmount(){	
};
Reservation::~Reservation(){
};
 int main (){
 	
 	Reservation *re;
 	
 	return 0;
	
}
