#pragma once
class CInherit
{
public:
	int iAge;

public:
	CInherit(void);
	~CInherit(void);

	void cNature();

};

class CInheritSub : public CInherit{
public:
	CInheritSub();
	~CInheritSub();

	void getAge();
};