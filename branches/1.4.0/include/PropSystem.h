#pragma once
#include "Hook.h"
#include "ULLibNS.h"
class CPropSystem :
	public CULPropPage
{
public:
	BOOL m_fAutoRun;

	enum enUpdateType
	{
		utNever,
		utAtStart,
		utEvery24,
		utAtStartEvery24
	};
	enUpdateType m_UpdateType;

	CULComboBox m_comboSizeMethodBy;
public:
	CPropSystem(void);
	~CPropSystem(void);
protected:
	virtual LRESULT OnInitDialog(WPARAM,LPARAM);
	virtual LRESULT OnApply(BYTE nReturn);
	void OnBtnCheckNow(WORD,HWND);
	void OnRadioSizeMethod(WORD,HWND);
};
