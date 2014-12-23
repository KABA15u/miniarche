#ifndef LESDEVOIRS_H
#define LESDEVOIRS_H


class LesDevoirs
{
    public:

	       LesDevoirs();
	       void addDevoir(Devoir devoir);
	       void deleteDevoir(int index);
	       void deleteAllDevoirs();
	       Devoir getDevoir(int index);
	       String getNomDevoir(int index);
	       void setNomDevoir(int index, string nomDevoir);

        virtual ~LesDevoirs();
      protected:
        private:
                 List<Devoir> lesDevoirs;
};

#endif // LESDEVOIRS_H
