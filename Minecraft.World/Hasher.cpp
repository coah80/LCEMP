#include "stdafx.h"
#ifdef _MSC_VER
#include <xhash>
#endif
#include <functional>

#include "Hasher.h"

Hasher::Hasher(wstring &salt)
{
	this->salt = salt;
}

wstring Hasher::getHash(wstring &name)
{
	// 4J Stu - Removed try/catch
	//try {
		wstring s = wstring( salt ).append( name );
		//MessageDigest m;
		//m = MessageDigest.getInstance("MD5");
		//m.update(s.getBytes(), 0, s.length());
		//return new BigInteger(1, m.digest()).toString(16);

		// TODO 4J Stu - Will this hash us with the same distribution as the MD5?
#if _MSC_VER >= 1900
		return _toString( std::hash<wstring>{}( s ) );
#elif defined(_MSC_VER)
		return _toString( stdext::hash_value( s ) );
#else
		return _toString( std::hash<wstring>{}( s ) );
#endif
	//}
	//catch (NoSuchAlgorithmException e)
	//{
	//	throw new RuntimeException(e);
	//}
}