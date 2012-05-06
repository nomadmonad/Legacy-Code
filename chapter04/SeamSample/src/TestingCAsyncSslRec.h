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

// 単体テストを実行する際、TestingCAsyncSslRecクラスを生成する。
// そのあとInit()を呼び出すと、PostReceiveError()を呼び出さずにテストを実行できる。
class TestingCAsyncSslRec: public legacycode::CAsyncSslRec {
public:
	TestingCAsyncSslRec();
	virtual ~TestingCAsyncSslRec();

	virtual void PostReceiveError(unsigned int type, unsigned int errorcode);
};

} /* namespace legacycode */
#endif /* TESTINGCASYNCSSLREC_H_ */
