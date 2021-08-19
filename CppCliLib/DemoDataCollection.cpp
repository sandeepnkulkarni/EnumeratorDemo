#include "pch.h"
#include "DemoDataCollection.h"

using namespace CppCliLib;

System::Collections::IEnumerator^ CppCliLib::DemoDataCollection::GetEnumerator2()
{
	return (System::Collections::IEnumerator^)GetEnumerator();
}

System::Collections::Generic::IEnumerator<CppCliLib::DemoData^>^ CppCliLib::DemoDataCollection::GetEnumerator()
{
	return gcnew DemoDataEnumerator();
}
