# EnumeratorDemo

This demo shows how to implement IEnumerable and IEnumerator in C++/CLI. This is needed because there is no support for `yield` keyword in C++/CLI.

Another project written in C# which shows how to consume it.

Reference
---
Started first by following steps mentioned in stackoverflow post: https://stackoverflow.com/a/5087637

Then implemented a class DemoData which will be returned as result from the enumerator.

Also see: https://startbigthinksmall.wordpress.com/2008/06/09/behind-the-scenes-of-the-c-yield-keyword/