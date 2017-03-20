using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


namespace demo2
{
    public class Class1
    {
        
        public int add(int a,int b)
        {
            return a + b;
        }
        public void GetValue(ref int length,ref  int []numArray,ref string str)
        {
            Random ran = new Random();
            int ranNum = ran.Next(0, 20);
            length = ranNum;
            for (int i = 0; i < ranNum; i++)
            {
                numArray[i] = i;
             
            }
            str = "this array length is " + ranNum.ToString();
        }
    }
}
