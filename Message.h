#ifndef MESSAGE_H
#define MESSAGE_H


class Message
{
    public:

	       Message();
	       Message(string objet, string corps);
	       String getObjet();
      void setObjet(string objet);
    string getCorps();
	  void setCorps(string corps);
}

        Message();
        virtual ~Message();
    protected:
              string objet;
	          string corps;
      private:
};

#endif // MESSAGE_H
