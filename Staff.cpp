#include<iostream>
#include"Payment.h"
#define size 2

using namespace std;

Staff::Staff() {
	staff_id = 0;
	for(int i=0;i<size;i++){
		pm[i]=0;
	}
}
Staff::Staff(Payment *mm [],int sID){
	staff_id = sID;
	for(int i=0;i<size;i++){
		pm[i]=mm[i];
	}
}
void Staff::manageProfile() {}

void Staff::makeReservation() {}

int Staff::getStaffDiscount() {}

void Staff::makePayment() {}

Staff :: ~staff(){
		for(int i=0;i<size;i++){
			delete pm[i];
	}
	
}