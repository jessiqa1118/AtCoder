using System;

class Program
{
    public static void Main(string[] args)
    {
        string input = Console.ReadLine();

        int cnt = 0;
        for (int i = 0; i < input.Length; i++)
        {
            if (input[i] == '1')
            {
                cnt++;
            }
        }

        Console.WriteLine(cnt);
    }
}
