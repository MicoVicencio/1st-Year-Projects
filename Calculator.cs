using System;
namespace Mico
{
    class Calculator {
        int firstnum = 0;
        int secondnum = 0;
        int Addition()
        {
            Calculator Add = new Calculator();
            Add.firstnum = firstnum;
            Add.secondnum = secondnum;
            int sum = Add.firstnum + Add.secondnum;
            return sum;
            
        }
        int Subtraction()
        {
            Calculator Sub = new Calculator();
            Sub.firstnum = firstnum;
            Sub.secondnum = secondnum;
            int sub = Sub.firstnum - Sub.secondnum;
            return sub;
        }
        int Multiplication()
        {
            Calculator Multip = new Calculator();
            Multip.firstnum = firstnum; 
            Multip.secondnum = secondnum;
            int product = Multip.firstnum * Multip.secondnum;
            return product;
        }
        float Division()
        {
            Calculator Div = new Calculator();
            Div.firstnum = firstnum;
            Div.secondnum = secondnum;
            float quotient = Div.firstnum / Div.secondnum;
            return quotient;
            
        }
        void Chance()
        {
            char selection;
            Console.WriteLine("Do you want to Try again?");
            Console.Write("Type [Y] if yes, and [N] if no: ");
            selection = Convert.ToChar(Console.ReadLine());
            if(selection == 'Y' || selection == 'y')
            {
                Calculator.Main(null);
            }
            else
            {
                Console.WriteLine("The Program will now exit!");
            }
            

        }
        static void Main(string[] args)
        {
            Console.Title = "Mico Calculator";
            Console.ForegroundColor = ConsoleColor.Red;
            Calculator calculator = new Calculator();
            calculator.firstnum = 0;
            calculator.secondnum = 0;
            int choice;
            Console.WriteLine("------------------------------------------------------------");
            Console.WriteLine("Welcome to my First Calculator in C#!");
            Console.WriteLine("This Calculator Can Do Addition, Subtraction, Multiplication, and Division.");
            Console.Write("Enter the First Number: ");
            calculator.firstnum = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter the Second Number: ");
            calculator.secondnum = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Choose your Operator:");
            Console.WriteLine("[1] Addition");
            Console.WriteLine("[2] Subtraction");
            Console.WriteLine("[3] Multiplication");
            Console.WriteLine("[4] Division");
            Console.WriteLine("[5] Exit");
            Console.Write("Choice: ");
            choice = Convert.ToInt32(Console.ReadLine());
            switch (choice)
            {
                case 1:
                    int add = calculator.Addition();
                    Console.WriteLine("The sum of Two numbers is " + add);
                    calculator.Chance();
                    break;

                case 2:
                    int sub = calculator.Subtraction();
                    Console.WriteLine("The Difference of Two numbers is " + sub);
                    calculator.Chance();
                    break;

                case 3:
                    int mul = calculator.Multiplication();
                    Console.WriteLine("The Product of Two numbers is " + mul);
                    calculator.Chance();
                    break;
                case 4:
                    float div = calculator.Division();
                    Console.WriteLine("The Quotient of Two numbers is " + div);
                    calculator.Chance();
                    break;

                case 5:
                    Console.WriteLine("The Program will now exit");
                    break;

                default:
                    Console.WriteLine("Invalid Selection! Try again.");
                    calculator.Chance();
                    break;
            }
            
        }

    }
}