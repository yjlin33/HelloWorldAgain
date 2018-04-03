//==============================================================================================================================================
// Copyright (C) 2002-2008,  L Labs Inc. All Rights Reserved. 
// This program is an unpublished copyrighted work which is proprietary to L Labs Inc. and contains confidential information that is 
// not to be reproduced or disclosed to any other person or entity without prior written consent from L Labs Inc. in each and every instance. 
// WARNING: Unauthorized reproduction of this program as well as unauthorized preparation of derivative works based upon the program or 

// distribution of copies by sale, rental, lease or lending are violations of federal copyright laws and state trade secret laws, punishable by 

// civil and criminal penalties. 

// http://www.LLabs.com

//==============================================================================================================================================

// SerialNo.h: interface for the CSerialNo class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SERIALNO_H__FB6065A7_222F_4BFF_9041_414FE854990E__INCLUDED_)
#define AFX_SERIALNO_H__FB6065A7_222F_4BFF_9041_414FE854990E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Checksum.h"

class __declspec(dllexport) CSerialNo  
{
public:
	void SetSerialNo(const CString& rhs);
	CString GetSerialNo();
	int GetNo();
	CString GetVersion();
	CString GetLanguage();
	CString GetProductCode();
	void SetNo(const int rhs);
	void SetVersion(const CString& rhs);
	void SetLanguage(const CString& rhs);
	void SetProductCode(const CString& rhs);
	CString GetDashedNo();
	void Decompose();
	void Compose();
	void Clear();
	CSerialNo();
	virtual ~CSerialNo();

private:
	bool VerifyChecksum();
	void Scramble(CString& strSource, int nChecksum);
	CString GetFullNumber();
	int m_nNo;
	CString m_strVersion;
	CString m_strLanguage;
	CString m_strProductCode;
	CString m_strSerialNo;
	CChecksum *pChecksum1;
	CChecksum *pChecksum2;
};

#endif // !defined(AFX_SERIALNO_H__FB6065A7_222F_4BFF_9041_414FE854990E__INCLUDED_)
