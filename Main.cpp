#include <iostream>
#include “Admin.h ”
#include “Discount.h ”
#include “ Enquiries.h”
#include “ Even and packages.h”
#include “ Payment.h”
#include “Recervation.h ”
#include “ RegisterUser.h”
#include “Report.h ”
#include “ Staff.h”
#include “ visitor.h”

int main ()

{
 	
 	Reservation *re ;
	
	Report *r;
	
	visitor *v1;
	
	RegisterUser *ru1;

	payment *p1;
	
	Enquiries *i1;

	admin *ad;

	Staff *st;

	event_and_packages *ev;

	discount *do;



	delete  re, r, v1, ru1, p1, i1, ad, st, ev, do;
	
}
