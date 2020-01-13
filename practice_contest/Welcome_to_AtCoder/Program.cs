using System;

class Program
{
    static void Main(string[] args)
    {
        // Input
        int a = int.Parse(Console.ReadLine());
        string[] input = Console.ReadLine().Split(' ');
        int b = int.Parse(input[0]);
        int c = int.Parse(input[1]);
        string s = Console.ReadLine();

        // Output
        Console.WriteLine((a + b + c) + " " + s);
    }
}
