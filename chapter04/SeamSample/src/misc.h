/*
 * misc.h
 *
 *  Created on: 2012/05/06
 *      Author: nomadmonad
 */

#ifndef MISC_H_
#define MISC_H_

namespace legacycode {
const int SOCKETCALLBACK = 0;
const int SSL_FAILURE = 0;

class misc {
public:
	void Init();
};

} /* namespace legacycode */

void FreeLibrary(int m_hSslDll) {
	//Win32API�̂��߃_�~�[�Ŏ����B
}
void CreateLibrary(int dll, char* dllName) {
	//Win32API�̂��߃_�~�[�Ŏ����B
}
void PostReceiveError(int callback, int errorcode) {
	//Win32API�̂��߃_�~�[�Ŏ����B
}


#endif /* MISC_H_ */
