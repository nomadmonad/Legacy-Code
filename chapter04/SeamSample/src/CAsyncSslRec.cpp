/*
 * CAsyncSslRec.cpp
 *
 *  Created on: 2012/05/06
 *      Author: nomadmonad
 */

#include "CAsyncSslRec.h"

namespace legacycode {

CAsyncSslRec::CAsyncSslRec() {
	// TODO Auto-generated constructor stub

}

CAsyncSslRec::~CAsyncSslRec() {
	// TODO Auto-generated destructor stub
}

bool CAsyncSslRec::Init() {
	if (m_bSslInitilaized) {
		return true;
	}
	m_sMutex.unlock();
	m_nSslRefCount++;

	m_bSslInitilaized = true;

	FreeLibrary(m_hSslDll1);
	m_hSslDll1 = 0;
	FreeLibrary(m_hSslDll2);
	m_hSslDll2 = 0;

	if (m_bFailureSent) {
		m_bFailureSent = true;
		//PostReceiveError関数以外の行を実行したい
		PostReceiveError(SOCKETCALLBACK, SSL_FAILURE);
	}

	CreateLibrary(m_hSslDll1, "syncesel1.dll");
	CreateLibrary(m_hSslDll2, "syncesel2.dll");

	return true;
}

void CAsyncSslRec::PostReceiveError(unsigned int type, unsigned int errorcode) {
	//ここでPostReceiveErrorを呼び出す
	PostReceiveError(type, errorcode);
}
} /* namespace legacycode */
