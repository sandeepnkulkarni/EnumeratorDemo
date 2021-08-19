#pragma once

#include "DemoData.h"
#include "DemoDataCollection.h"

using namespace System;
using namespace System::Collections::Generic;

namespace CppCliLib
{
	public ref class DemoDataGenerator
	{
	public:
		IEnumerable<DemoData^>^ GetDemoDataAsEnumerable();
	};
}

