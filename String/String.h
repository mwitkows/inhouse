/* Created by Matt Witkowski
 * String.h
 * My own version of the string class.
 */

#ifndef STRING_H_
	#define STRING_H_

	#include "../Common/Type.h"

	namespace inhouse
	{
		class String
		{
			private:
				uint _length;
				char* _string;

			public:
				String();
				String(const char* string);
				String(const String& string);
				String(const int& integer);
				String(const uint& integer);
				~String();
			
				char& charAt(uint index);
				int compareTo(String& string);
				int compareToIgnoreCase(String& string);
				bool contains(String& string);
				int indexOf(char character);
				int indexOf(String& string);
				bool isEmpty();
				int lastIndexOf(char character);
				int lastIndexOf(String& string);
				uint length();
				uint length() const;
				String substring(uint begin, uint end);
				String& toLowerCase();
				char* toString();
				char* toString() const;
				String& toUpperCase();
				String trim();

				bool operator==(String& string);
				bool operator==(const char* string);
				bool operator!=(String& string);
				bool operator!=(const char* string);
				String operator+(const String& string);
				String operator+(const char* string);
				String operator+(int integer);
				String operator+(uint integer);
				String operator+(bool boolean);
				void operator+=(const String& string);
				void operator+=(const char* string);
				void operator+=(int integer);
				void operator+=(uint integer);
				void operator+=(bool boolean);
				char& operator[](uint index);
				String& operator=(const String& string);
		};
	}

#endif
