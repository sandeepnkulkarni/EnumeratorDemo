#include "pch.h"
#include "DemoDataGenerator.h"

using namespace CppCliLib;

IEnumerable<DemoData^>^ CppCliLib::DemoDataGenerator::GetDemoDataAsEnumerable()
{
	DemoDataCollection^ demoDataCollection = gcnew DemoDataCollection();
	return demoDataCollection;
}
