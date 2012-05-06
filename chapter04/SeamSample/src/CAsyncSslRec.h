/*
 * CAsyncSslRec.h
 *
 *  Created on: 2012/05/06
 *      Author: nomadmonad
 */

#ifndef CASYNCSSLREC_H_
#define CASYNCSSLREC_H_

#include <boost/thread.hpp>
#include <misc.h>

using namespace std;
using namespace boost;

namespace legacycode {

class CAsyncSslRec {
    int m_bSslInitilaized;
    boost::mutex m_sMutex;
    int m_nSslRefCount;
    int m_bFailureSent;
    int m_hSslDll1;
    int m_hSslDll2;
public:
	CAsyncSslRec();
	virtual ~CAsyncSslRec();

	bool Init();
};

} /* namespace legacycode */
#endif /* CASYNCSSLREC_H_ */
