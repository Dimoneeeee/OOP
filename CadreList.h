#pragma once
#include <iostream>

struct list {
	Cadre	*pData;
	list	*pNext;
};

class CadreList {
	private:
		list		*apTail;
		static list	*aspHead;
	public:		
		static CadreList asList;
		CadreList();
		CadreList(const CadreList&);
		~CadreList();
		list		*GetHead() const;
		void		SetHead(list*);
		list		*GetTail() const;
		void		SetTail(list*);
		static void	View();				
};

CadreList	CadreList::asList	= { };
list		*CadreList::aspHead	= nullptr;
CadreList::CadreList() {  
	aspHead = nullptr;
	apTail = nullptr;
}
CadreList::CadreList(const CadreList& rCadreList) { }
CadreList::~CadreList() {
	while (aspHead != nullptr) {
		list *pTemp = aspHead->pNext;
		delete aspHead;
		aspHead = pTemp;
	}
}
list *CadreList::GetHead() const		{ return aspHead; }
void CadreList::SetHead(list *pHead)	{ this->aspHead = pHead; }
list *CadreList::GetTail() const		{ return apTail; }
void CadreList::SetTail(list *pTail)	{ this->apTail = pTail; }
void CadreList::View() {
	if (nullptr == CadreList::aspHead) {
		std::cout << "No cadre in the list!";
	} else {
		list *pTemp = new list;
		pTemp = CadreList::aspHead;
		while (pTemp != nullptr) {
			pTemp->pData->Show();
			pTemp = pTemp->pNext;
		}
	}
}