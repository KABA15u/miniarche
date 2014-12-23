#ifndef PROPOSITIONSCOURS_H
#define PROPOSITIONSCOURS_H


class PropositionsCours
{
    public:


	 PropositionsCours();
	 void accepterProposition(int index);
	 void refuserProposition(int index);
	void  addProposition(Cours cours);
	void  deleteProposition(int index);
    void  deleteAllPropositions();
          Cours getProposition(int index);
	int   getNbPropositions()
	char  toString();
        virtual ~PropositionsCours();
    protected:
    private:
        private LesCours lesCoursPropose;
};

#endif // PROPOSITIONSCOURS_H
