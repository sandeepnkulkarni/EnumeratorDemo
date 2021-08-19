#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace CppCliLib {
	public ref struct DemoData
	{
		UInt32 DataId;
		UInt64 DataLength;
		array<Object^>^ Data;

		DemoData()
		{
			Console::WriteLine("DemoData constructor called");
		}

		DemoData(UInt32 dataId, UInt64 dataLength, ...array<Object^>^ data)
		{
			Console::WriteLine("DemoData parameterized constructor called");

			DataId = dataId;
			DataLength = dataLength;
			array<Object^>^ dataTemp = gcnew array<Object^>(data->Length);
			for (int i = 0; i < data->Length; i++)
			{
				dataTemp[i] = data[i];
			}
			Data = dataTemp;
		}

		~DemoData()
		{
			delete[] Data;
			this->!DemoData();
			Console::WriteLine("DemoData destructor called");
		}

	protected:
		!DemoData()
		{
			Console::WriteLine("DemoData finalizer called");
		}
	};
}