/*
 * TestingCAsyncSslRec.h
 *
 *  Created on: 2012/05/06
 *      Author: nomadmonad
 */

#ifndef TESTINGCASYNCSSLREC_H_
#define TESTINGCASYNCSSLREC_H_

#include "CAsyncSslRec.h"

namespace legacycode {

// �P�̃e�X�g�����s����ہATestingCAsyncSslRec�N���X�𐶐�����B
// ���̂���Init()���Ăяo���ƁAPostReceiveError()���Ăяo�����Ƀe�X�g�����s�ł���B
class TestingCAsyncSslRec: public legacycode::CAsyncSslRec {
public:
	TestingCAsyncSslRec();
	virtual ~TestingCAsyncSslRec();

	virtual void PostReceiveError(unsigned int type, unsigned int errorcode);
};

} /* namespace legacycode */
#endif /* TESTINGCASYNCSSLREC_H_ */
