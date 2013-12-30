#ifndef UnmockedMethodCallException_h__
#define UnmockedMethodCallException_h__

#include <functional>
namespace mock4cpp {

	struct UnmockedMethodCallException : public std::exception {
		UnmockedMethodCallException()
				//: std::exception("Could not find recorded implementation to support method call")
		{}
	};

	struct MethodCallVerificationException: public std::exception {
		MethodCallVerificationException(const std::string& s) :
				std::exception(), msg { s } {
		}
	private:
		const std::string msg;
	};

	struct IllegalArgumentException: public std::exception {
		IllegalArgumentException(const std::string& s) :
				std::exception(), msg { s } {
		}
	private:
		const std::string msg;
	};

}

#endif // UnmockedMethodCallException_h__
