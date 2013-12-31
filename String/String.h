/* Created by Matt Witkowski
 * String.h
 * My own version of the string class.
 */

#ifndef STRING_H_
	#define STRING_H_

	#include "../Common/Common.h"

	namespace inhouse
	{
		class String
		{
			private:
				uint _length;
				char* _string;

			public:
				String();
				String(char string[]);
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
				bool operator!=(String& string);
				String operator+(String& string);
				String operator+(int integer);
				String operator+(bool boolean);
				char& operator[](uint index);
				String& operator=(const String& string);
		};
	}

#endif
