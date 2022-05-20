
class visitor {
	Protected:
        Char name;
        Char email;
        Char address;
        int contact_no;
        Char password;

	Public: 
        visitor ();
        visitor ( Char R_name,Char umail, Char adr,int c_no,Char psw);
        void PasswordValidation();
		Void registration ();
		Void CancelRegistration ();
		Void CheckAvailability ();
		~visitor ();
};
