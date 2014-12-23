#ifndef LESADMINISTRATEURS_H
#define LESADMINISTRATEURS_H


class LesAdministrateurs
{
    public:

	      LesAdministrateurs();
	 void addAdmin(Administrateur admin);
	 void deleteAdmin(int index);
	 void deleteAllAdmins();
	      Administrateur getAdmin(char login);
	 bool estAdmin(char login, char mdp);
          Administrateur getAdminCourant();
	 void setAdminCourant(Administrateur admin);
	      getNbAdmins();
	char  toString();
          LesAdministrateurs();
    virtual ~LesAdministrateurs();
    protected:
    private:
            Liste<Administrateur> lesAdmin;
	        char adminCourant;
};

#endif // LESADMINISTRATEURS_H
