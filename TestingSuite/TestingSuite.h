#ifndef TESTING_SUITE_H_
#define TESTING_SUITE_H_

#include "../String/String.h"
#include "../Common/Type.h"
#include "UnitTest.h"
#include "FeatureSuite.h"
#include "../DataStructures/DynamicArray/DynamicArray.h"
#include <ctime>

namespace inhouse
{
	class TestingSuite
	{
		private:
			DynamicArray<FeatureSuite> _suites;
			String _timestamp;

			void createTimestamp();
			void printResults();
		public:
			TestingSuite();
			TestingSuite(TestingSuite& testingSuite);
			~TestingSuite();
			void runTests();
			void runTests(DynamicArray<String>& suiteNames);
			void addFeatureSuite(String& suiteName);
			void removeFeatureSuite(String& suiteName);
			TestingSuite& operator=(TestingSuite& testingSuite);
			bool operator==(TestingSuite& testingSuite);
	};
}

#endif
