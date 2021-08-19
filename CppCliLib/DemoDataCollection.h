#pragma once

#include "DemoData.h"
#include "DemoDataEnumerator.h"

using namespace System;
using namespace System::Collections::Generic;

namespace CppCliLib {
	ref class DemoDataCollection : IEnumerable<DemoData^>
	{
	public:
		// This is required as IEnumerable<T> also implements IEnumerable
		virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
		// Inherited via IEnumerable<T>
		virtual System::Collections::Generic::IEnumerator<CppCliLib::DemoData^>^ GetEnumerator();
	};
}

