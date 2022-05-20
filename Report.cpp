#include <iostream>
#include <cstring>
#include"Reort.h"
Report::Report(){
	ReportID=0;
	strcpy(ReportType,"");
	};
	
Report::Report(int rID,char rType[]){
	ReportID=rID;
	strcpy(ReportType,rType);
	
};
void ReservationDetailsReport(){
	
};
void Report::financialReport(){
};
void Report::displayReport(){	
};
Report::~Report(){
};

