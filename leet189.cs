using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProblemSolve.Problems
{
    public class Leet189_RotateArray
    {
        public static void Solve(int[] nums, int k)
        {


            int n = nums.Length;
            k = k%n;

            // Create a new list with the same length as nums
            List<int> list = new List<int>(new int[n]);

            for (int i = 0; i < n; i++)
            {
                list[((i+k)%n)] = nums[i];
            }

            foreach (var item in list)
            {
                Console.WriteLine(item);
            }
        }
    }
    }

