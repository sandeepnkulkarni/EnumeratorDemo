using System;
using System.Linq;
using CppCliLib;

namespace CSharpClient
{
    class Program
    {
        static void Main(string[] args)
        {
            DemoDataGenerator demoDataGenerator = new DemoDataGenerator();
            var demoDataEnum = demoDataGenerator.GetDemoDataAsEnumerable();
            foreach (var item in demoDataEnum.Take(5))
            {
                Console.Write($"DataId: [{item.DataId}], DataLength: [{item.DataLength}]");
                Console.WriteLine($", Data: [{string.Join(", ", item.Data)}]");
            }
        }
    }
}
