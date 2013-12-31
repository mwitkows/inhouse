#ifndef STANDARD_H_
	#define STANDARD_H_

	namespace inhouse
	{
		class String;
		int print(String& string);
		int print(char* string);
		int println(String& string);
		int println(char* string);
		int printChar(char c);

		void* memCopy(void* destination, const void* source, int number);
		void* memMove(void* destination, const void* source, int number);

		void error(bool passTest, char* string);
		void error(bool passTest, String& string);
	}

#endif
