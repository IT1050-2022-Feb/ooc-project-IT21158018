#include "visitor.h"
#include "Enquirie.h"
#include "Reservation.h"
#include "payment.h"
#define size 2
Class RegisterUser : Public visitor{

	Protected:
		Reservation *r1[size];
		payment *p1[size]; 
		Char username;
		Char password;
	Public:
		RegisterUser();
		RegisterUser(Reservation *r[],payment *p[], Char uname,Char psw);
		Void login ();
		Void CheckPassword ();
		Void CheckAvailability ();
		Void AddEnquire( Enquire *e1);
		Void MakeReservation();
		Void MakePayment ();
		Void logout ();
		~RegisterUser ();
	}
