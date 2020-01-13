using System;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args)
    {
        // Initial input
        string[] input = Console.ReadLine().Split(' ');
        int N = int.Parse(input[0]);
        int Q = int.Parse(input[1]);

        List<char> balls = new List<char>();
        char ball = 'A';
        for (int i = 0; i < N; i++)
        {
            balls.Add(ball);
            ball++;
        }

        // Bubble sort
        int cnt = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                Console.WriteLine("? " + balls[j] + " " + balls[j + 1]);
                string ans = Console.ReadLine();
                if (ans == ">")
                {
                    char tmp = balls[j];
                    balls[j] = balls[j + 1];
                    balls[j + 1] = tmp;
                }

                cnt++;
                if (cnt > N)
                {
                    break;
                }
            }
            if (cnt > N)
            {
                break;
            }
        }

        Console.Write("! ");
        for (int i = 0; i < balls.Count; i++)
        {
            Console.Write(balls[i]);
        }
        Console.WriteLine("");
    }
}
