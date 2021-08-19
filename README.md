# EnumeratorDemo

This demo shows how to implement IEnumerable and IEnumerator in C++/CLI. This is needed because there is no support for `yield` keyword in C++/CLI.

CppCliLib
---
Project written C++/CLI which shows how to implement IEnumerable and IEnumerator. 

`DemoDataCollection`: Implements `IEnumerable<T>`. `T` is `DemoData`. Method `GetEnumerator` returns the object of type `DemoDataEnumerator`. 

`DemoDataEnumerator`: Implements `IEnumerator<T>`. `T` is `DemoData`. Property `Current` returns the current value. Method `MoveNext` creates a new object of type `DemoData` and assign to be current value to be returned. 

`DemoDataGenerator`: Has a method `GetDemoDataAsEnumerable` which returns `IEnumerable<DemoData>`.

CSharpClient
---
Project written in C# which shows how to consume it.

Reference
---
Started first by following steps mentioned in stackoverflow post: https://stackoverflow.com/a/5087637

Then implemented a class DemoData which will be returned as result from the enumerator.

Also see: https://startbigthinksmall.wordpress.com/2008/06/09/behind-the-scenes-of-the-c-yield-keyword/
