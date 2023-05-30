#include <stdio.h>
#include <stdlib.h>

int HFinalScore = 0;
int MFinalScore = 0;
int EFinalScore = 0;
int TFinalScore = 0;
int SFinalScore = 0;
char name[20];

int main(){
   char subject;
   menu ();
   printf("Enter your First Name:");
   scanf("%s",&name);
   printf("Choose what subject do you want to play:");
   scanf("%s",&subject);

   switch(subject)
   {
    case 'H':
    case 'h':
    history();
        break;
    case 'M':
    case 'm':
        math();
        break;
    case 'T':
    case 't':
        technology();
        break;
    case 'S':
    case 's':
        science();
        break;
    case 'E':
    case 'e':
        english();
        break;

    default:
       printf("Invalid Selection the program will now abort");
                 return 0;
   }
    return 0;
}
void menu(){
   printf("WELCOME TO QUIZ GAME\n");
   printf("PRESS [H] FOR HISTORY\n");
   printf("PRESS [M] FOR MATH\n");
   printf("PRESS [T] FOR TECHNOLOGY\n");
   printf("PRESS [S] FOR SCIENCE\n");
   printf("PRESS [E] FOR ENGLISH\n");
}
int history(){
char diff;
    printf("\nWelcome to History\n");
    printf("PRESS [N] FOR NOVICE\n");
    printf("PRESS [E] FOR EXPERT\n");
    printf("PRESS [M] FOR MASTER\n");
    printf("Choose Difficulty:");
    scanf("%s",&diff);
    switch(diff){
    case 'N':
    case 'n':
       N_History();
        break;
    case 'E':
    case 'e':
        E_History();

        break;
    case 'M':
    case 'm':
        M_History();

    break;
        default:
            printf("Invalid Selection the program will now abort");
            return 0;
    }

    }

int N_History(){
        int score1 = 0;
        char ans1, ans2, ans3, ans4, ans5,choice;
        printf("\nWelcome to Novice Questions\n");
        printf("1.What is the date when Ferdinand Magellan discover the Philippines?\n");
        printf("A.March 15, 1521 \n");
        printf("B.March 16, 1521 \n");
        printf("C.March 15, 1621 \n");
        printf("D.March 16, 1621 \n");
        printf("Enter your Answer:");
        scanf("%s",&ans1);
        if(ans1 == 'A' || ans1 == 'a'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.A religion that historian's said Dr. Jose Rizal retracted.\n");
        printf("A. Catholic \n");
        printf("B.Hinduism \n");
        printf("C.Buddhism \n");
        printf("D.Taoism \n");
        printf("Enter your Answer:");
        scanf("%s",&ans2);
        if(ans2 == 'A' || ans2 == 'a'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.What Dr. Jose Rizal's novel that he wrote for GomBurZa?\n");
        printf("A.Ibong Adarna \n");
        printf("B.Noli me Tangere \n");
        printf("C.El Filibusterismo \n");
        printf("D.Florante at Laura \n");
        printf("Enter your Answer:");
        scanf("%s",&ans3);
        if(ans3 == 'C' || ans3 == 'c'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.Sino naman sumulat ng Florante at Laura?\n");
        printf("A.Dr. Jose Rizal \n");
        printf("B.Francisco Balagtas \n");
        printf("C.Francisco Buencaminto Sr. \n");
        printf("D.José De la Cruz \n");
        printf("Enter your Answer:");
        scanf("%s",&ans4);
        if(ans4 == 'B' || ans4 == 'b'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.Who conquered the country of the philippines that reached 333 years of conquest before they left the country?\n");
        printf("A.Spaniards \n");
        printf("B.Japanese \n");
        printf("C.Korean \n");
        printf("D.American \n");
        printf("Enter your Answer:");
        scanf("%s",&ans5);
        if(ans5 == 'A' || ans5 == 'a'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s",name);
        printf("\nYour score in Novice Difficulty is:%d\n",score1);
        HFinalScore = score1 + HFinalScore;
        printf("Your Final score is %d points \n",HFinalScore);
        printf("Do you want to proceed to Expert difficulty? [Y] for yes and \[N] for no:");
        scanf("%s",&choice);
        if(choice == 'Y' || choice == 'y'){
            E_History();
        }
        else{
            printf("The program will now exit");
            exit (0);
        }


    }
int E_History(){
        char ans6, ans7, ans8, ans9, ans10, choice;
        int score2 = 0;
        printf("\nWelome to Expert Questions\n");
        printf("1.Who named the Philippines?\n");
        printf("A.Jon-jon Ducog \n");
        printf("B.Emilio Aguinaldo \n");
        printf("C.Ruy Lopez de Villalobos \n");
        printf("D.King Philip II \n");
        printf("Enter your Answer:");
        scanf("%s",&ans6);
        if(ans6 == 'C' || ans6 == 'c'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.Who is the first President of the Phillipines?\n");
        printf("A.Andres Bonifacio \n");
        printf("B.Emilio Aguinaldo \n");
        printf("C.Cindy Joy Fedelin \n");
        printf("D.Apolinario Mabini \n");
        printf("Enter your Answer:");
        scanf("%s",&ans7);
        if(ans7 == 'B' || ans7 == 'b'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.Who killed Magellan?\n");
        printf("A.Raja Solayman \n");
        printf("B.Edmar Suarez Jr \n");
        printf("C.Meliodas \n");
        printf("D.Lapu-Lapu \n");
        printf("Enter your Answer:");
        scanf("%s",&ans8);
        if(ans8 == 'D' || ans8 == 'd'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.Who is the founder of KKK? \n");
        printf("A.Andres Bonifacio \n");
        printf("B.Emilio Aguinaldo \n");
        printf("C.Emilio Jacinto \n");
        printf("D.Mico Vicencio \n");
        printf("Enter your Answer:");
        scanf("%s",&ans9);
        if(ans9 == 'A' || ans9 == 'a'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.Who created the desisgns for the Philippine national flag?\n");
        printf("A.Andres Bonifacio \n");
        printf("B.Emilio Aguinaldo \n");
        printf("C.Apolinario Mabini \n");
        printf("D.Sebastiane Vargas \n");
        printf("Enter your Answer:");
        scanf("%s",&ans10);
        if(ans10 == 'B' || ans10 == 'b'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("Your Score in Expert Difficulty is %d points\n",score2);
        HFinalScore = score2 + HFinalScore;
        printf("Your Final Score is %d points \n",HFinalScore);
        printf("Do you want to proceed to Master difficulty? [Y] for yes and \[N] for no:");
        scanf("%s",&choice);
        if(choice == 'Y' || choice == 'y'){
            M_History();
        }
        else{
            printf("The program will now exit");
            exit (0);
        }

    }
    int M_History(){
        int score3 = 0;
        char ans11, ans12, ans13, ans14, ans15;
        printf("\nWelome to Master Questions\n");
        printf("1.The circumstances behind the founding of Manila remain unclear. However, it is known that in its early history Manila was ruled from which nearby settlement that is the oldest-known named settlement in the Philippines?\n");
        printf("A.Leyte \n");
        printf("B.Tondo \n");
        printf("C.Bohol \n");
        printf("D.Macau \n");
        printf("Enter your Answer:");
        scanf("%s",&ans11);
        if(ans11 == 'B' || ans11 == 'b'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
       printf("\n2.She was the first woman member of the Katipunan (July 1893).\n");
        printf("A.Marina Dizon  \n");
        printf("B.Gregoria de Jesús \n");
        printf("C.Segunda Katigbak \n");
        printf("D.Gabriela Silang \n");
        printf("Enter your Answer:");
        scanf("%s",&ans12);
        if(ans12 == 'B' || ans12 == 'b'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.She is a Filipino heroine. After her husband died, she continued the war against Spain, was caught and hanged.\n");
        printf("A.Gabriela Silang  \n");
        printf("B.Leonor Rivera  \n");
        printf("C.Gregoria de Jesus  \n");
        printf("D.Teodora Alonso \n");
        printf("Enter your Answer:");
        scanf("%s",&ans13);
        if(ans13 == 'A' || ans13 == 'a'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.She/He was a Filipino schoolteacher and guerrilla commander who fought the Japanese in Tacloban during World War II.\n");
        printf("A.Segunda Katigbak \n");
        printf("B.Nieves Fernandez \n");
        printf("C.Gabriela Silang \n");
        printf("D.Marina Dizon \n");
        printf("Enter your Answer:");
        scanf("%s",&ans14);
        if(ans14 == 'B' || ans14 == 'b'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.Better known as Tandang Sora was a Filipina Revolutionary.\n");
        printf("A.Melchora Aquino \n");
        printf("B.Nieves Fernandez \n");
        printf("C.Gabriela Silang \n");
        printf("D.Marina Dizon \n");
        printf("Enter your Answer:");
        scanf("%s",&ans15);
        if(ans15 == 'A' || ans15 == 'a'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
    printf("Your Score in Master Difficulty is %d points\n",score3);
    HFinalScore = score3 + HFinalScore;
    printf("Your Final Score is %d points\n",HFinalScore);
    printf("The program will now abort");
    exit (0);

    }
    int math(){
    char diff;
    printf("\nWelcome to Math\n");
    printf("PRESS [N] FOR NOVICE\n");
    printf("PRESS [E] FOR EXPERT\n");
    printf("PRESS [M] FOR MASTER\n");
    printf("Choose Difficulty:");
    scanf("%s",&diff);
    switch(diff){
    case 'N':
    case 'n':
        N_Math();
        break;
    case 'E':
    case 'e':
        E_Math();
        break;
    case 'M':
    case 'm':
        M_Math();
        break;
            default:
             printf("Invalid Selection the program will now abort");
             return 0;

}
}

    int N_Math(){
        int score1 = 0;
        char ans1, ans2, ans3, ans4, ans5,choice;
        printf("\nWelcome to Novice Questions\n");
        printf("1.What is 3 * 3?\n");
        printf("A.9\n");
        printf("B.11\n");
        printf("C.6\n");
        printf("D.8\n");
        printf("Enter your answer:");
        scanf("%s",&ans1);
        if(ans1 == 'A' || ans1 == 'a'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.What is 63 / 9 ? \n");
        printf("A.6\n");
        printf("B.7\n");
        printf("C.8\n");
        printf("D.9\n");
        printf("Enter your Answer:");
        scanf("%s",&ans2);
        if(ans2 == 'B' || ans2 == 'b'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.What is 86+57? \n");
        printf("A.126\n");
        printf("B.138\n");
        printf("C.159\n");
        printf("D.143\n");
        printf("Enter your Answer:");
        scanf("%s",&ans3);
        if(ans3 == 'D' || ans3 == 'd'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.What is 3,086 - 2,153?\n");
        printf("A.873\n");
        printf("B.543\n");
        printf("C.933\n");
        printf("D.473\n");
        printf("Enter your Answer:");
        scanf("%s",&ans4);
        if(ans4 == 'C' || ans4 == 'c'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.MDAS stands for?\n");
        printf("A.Me, Deal, An, Self\n");
        printf("B.Minus, Dividend, Ace, Size\n");
        printf("C.Multiplication, Division, Addition, Subtraction\n");
        printf("D.More, Dad, Aw, Six\n");
        printf("Enter your Answer:");
        scanf("%s",&ans5);
        if(ans5 == 'C' || ans5 == 'c'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Novice Difficulty is:%d\n",score1);
        MFinalScore = score1 + MFinalScore;
        printf("Your Final score is %d points \n",MFinalScore);
        printf("Do you want to proceed to Expert difficulty? [Y] for yes and \[N] for no:");
        scanf("%s",&choice);
        if(choice == 'Y' || choice == 'y'){
            E_Math();
        }
        else{
            printf("The program will now exit");
            exit (0);
        }
    }
    int E_Math(){
        char ans6, ans7, ans8, ans9, ans10, choice;
        int score2 = 0;
        printf("\nWelome to Expert Questions\n");
        printf("1.What is the solution for (x+2)²?\n");
        printf("A.x² + 8x + 9\n");
        printf("B.x² + 4x + 6\n");
        printf("C.x² + 4x + 4\n");
        printf("D.x² + 3 + 4x\n");
        printf("Enter your Answer:");
        scanf("%s",&ans6);
        if(ans6 == 'C' || ans6 == 'c'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.What is the solution set of the equations x² + x - 2 = 0 in roster form\n");
        printf("A.(3,2)\n");
        printf("B.(4,3)\n");
        printf("C.(1,-2)\n");
        printf("D.(-2,-1)\n");
        printf("Enter your Answer:");
        scanf("%s",&ans7);
        if(ans7 == 'C' || ans7 == 'c'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.Find the product of (x + 4)².\n");
        printf("A. x² + 8x + 16\n");
        printf("B.x² + 9x + 16\n");
        printf("C.x² + 11x + 16\n");
        printf("D.x² + 12x + 16\n");
        printf("Enter your Answer:");
        scanf("%s",&ans8);
        if(ans8 == 'a' || ans8 == 'A'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.Give me the square root of 625\n");
        printf("A.15\n");
        printf("B.25\n");
        printf("C.35\n");
        printf("D.45\n");
        printf("Enter your Answer:");
        scanf("%s",&ans9);
        if(ans9 == 'B' || ans9 == 'b'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.What is the quadratic equation of x² = √9?\n");
        printf("A.x = 3\n");
        printf("B.x = 2\n");
        printf("C.x = 1\n");
        printf("D.x = 4\n");
        printf("Enter your Answer:");
        scanf("%s",&ans10);
        if(ans10 == 'A' || ans10 == 'a'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Expert Difficulty is:%d\n",score2);
        MFinalScore = score2 + MFinalScore;
        printf("Your Final score is %d points \n",MFinalScore);
        printf("Do you want to proceed to Expert difficulty? [Y] for yes and \[N] for no:");
        scanf("%s",&choice);
        if(choice == 'Y' || choice == 'y'){
            M_Math();
        }
        else{
            printf("The program will now exit");
            exit (0);
        }
    }
    int M_Math(){
        char ans11, ans12, ans13, ans14, ans15, choice;
        int score3 = 0;
        printf("\nWelome to Master Questions\n");
        printf("1.The three solutions of the equation f(x) = 0 are -2, 0, and 3. .Therefore, the three solutions of the equation f(x - 2) = 0 are\n");
        printf("A.- 4, -2, and 1\n");
        printf("B.-2, 0 and 3\n");
        printf("C.4, 2, and 5\n");
        printf("D.0, 2 and 5\n");
        printf("Enter your Answer:");
        scanf("%s",&ans11);
        if(ans11 == 'D' || ans11 == 'd'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.The exam scores of all 500 students were recorded and it was determined that these scores were normally distributed. If Jane's score is 0.8 standard deviation above the mean, then how many, to the nearest unit, students scored above Jane?\n");
        printf("A.394\n");
        printf("B.250\n");
        printf("C.400\n");
        printf("D.106\n");
        printf("Enter your Answer:");
        scanf("%s",&ans12);
        if(ans12 == 'D' || ans12 == 'd'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.The graphs of the two equations y = a x 2 + b x + c and y = A x 2 + B x + C, such that a and A have different signs and that the quantities b 2 - 4 a c and B 2 - 4 A C are both negative,\n");
        printf("A.intersect at two points\n");
        printf("B.intersect at one point\n");
        printf("C.do not intersect\n");
        printf("D.none of the above\n");
        printf("Enter your Answer:");
        scanf("%s",&ans13);
        if(ans13 == 'C' || ans13 == 'c'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.The period of 2 sin x cos x is\n");
        printf("A.4 π 2\n");
        printf("B.2 π\n");
        printf("C.4 π\n");
        printf("D.π\n");
        printf("Enter your Answer:");
        scanf("%s",&ans14);
        if(ans14 == 'D' || ans14 == 'd'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.What is the equation of x²-625?\n");
        printf("A.{-25,25}\n");
        printf("B.{45,-45}\n");
        printf("C.{-25,-25}\n");
        printf("D.{-25,15}\n");
        printf("Enter your Answer:");
        scanf("%s",&ans15);
        if(ans15 == 'C' || ans15 == 'c'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Master Difficulty is %d points\n",score3);
        MFinalScore = score3 + MFinalScore;
        printf("Your Final score is %d points \n",MFinalScore);
        printf("The program will now abort");
        return 0;

    }
    int technology(){
    char diff;
    printf("\nWelcome to Technology\n");
    printf("PRESS [N] FOR NOVICE\n");
    printf("PRESS [E] FOR EXPERT\n");
    printf("PRESS [M] FOR MASTER\n");
    printf("Choose Difficulty:");
    scanf("%s",&diff);
    switch(diff){
    case 'N':
    case 'n':
        N_Technology();
        break;
    case 'E':
    case 'e':
        E_Technology();
        break;
    case 'M':
    case 'm':
        M_Technology();

        break;
            default:
                 printf("Invalid Selection the program will now abort");
                 return 0;
}
}

int N_Technology(){
    int score1 = 0;
        char ans1, ans2, ans3, ans4, ans5,choice;
        printf("\nWelcome to Novice Questions\n");
        printf("1.The application of scientific knowledge for practical purposes, especially in industry.\n");
        printf("A.Mouse\n");
        printf("B.CPU\n");
        printf("C.Technology\n");
        printf("D.System\n");
        printf("Enter your Answer:");
        scanf("%s",&ans1);
        if(ans1 == 'C' || ans1 == 'c'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.What is CPU?\n");
        printf("A.Center Project Unit\n");
        printf("B.Central Propose Unit\n");
        printf("C.Central Processing Unit\n");
        printf("D.Counter Price Unit\n");
        printf("Enter your Answer:");
        scanf("%s",&ans2);
        if(ans2 == 'c' || ans2 == 'C'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.What is the name for a computer pointing device?\n");
        printf("A.A Mouse\n");
        printf("B.Sound Card\n");
        printf("C.Ram\n");
        printf("D.Monitor\n");
        printf("Enter your Answer:");
        scanf("%s",&ans3);
        if(ans3 == 'A' || ans3 == 'a'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.It is an electronic device for storing and processing data, typically in binary form, according to instructions given to it in a variable program.\n");
        printf("A.Compass\n");
        printf("B.Cellphone\n");
        printf("C.Hardware\n");
        printf("D.Computer\n");
        printf("Enter your Answer:");
        scanf("%s",&ans4);
        if(ans4 == 'D' || ans4 == 'd'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.Who is the founder of computer?\n");
        printf("A.Mark Angelo Penales\n");
        printf("B.Phoebe Lumor\n");
        printf("C.Charles Babbage\n");
        printf("D.Albert Einstein\n");
        printf("Enter your Answer:");
        scanf("%s",&ans5);
        if(ans5 == 'C' || ans5 == 'c'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Novice Difficulty is:%d\n",score1);
        TFinalScore = score1 + TFinalScore;
        printf("Your Final score is %d points \n",TFinalScore);
        printf("Do you want to proceed to Expert difficulty? [Y] for yes and \[N] for no:");
        scanf("%s",&choice);
        if(choice == 'Y' || choice == 'y'){
            E_Technology();
        }
        else{
            printf("The program will now exit");
            exit (0);
        }

}
int E_Technology(){
char ans6, ans7, ans8, ans9, ans10, choice;
        int score2 = 0;
        printf("\nWelome to Expert Questions\n");
        printf("1.How many computer languages are in use?\n");
        printf("A.20\n");
        printf("B.8000\n");
        printf("C.30\n");
        printf("D.2000\n");
        printf("Enter your Answer:");
        scanf("%s",&ans6);
        if(ans6 == 'D' || ans6 == 'd'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.Which of these is not an early computer?\n");
        printf("A.ENEUC\n");
        printf("B.UNIVAS\n");
        printf("C.SAGE\n");
        printf("D.NASA\n");
        printf("Enter your Answer:");
        scanf("%s",&ans7);
        if(ans7 == 'D' || ans7 == 'd'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.Which of the following is not one of the early “protocols,” or ways to use the Internet?\n");
        printf("A.Telnet\n");
        printf("B.Blogging\n");
        printf("C.Fishing\n");
        printf("D.Blocking\n");
        printf("Enter your Answer:");
        scanf("%s",&ans8);
        if(ans8 == 'B' || ans8 == 'b'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.Who founded Apple Computer?\n");
        printf("A.Stephen \n");
        printf("B.Bill Board\n");
        printf("C.Steve Jobs\n");
        printf("D.Stephen Curry\n");
        printf("Enter your Answer:");
        scanf("%s",&ans9);
        if(ans9 == 'C' || ans9 == 'c'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.Which of these is not a peripheral, in computer terms?\n");
        printf("A.Keyboard\n");
        printf("B.Monitor\n");
        printf("C.Mouse\n");
        printf("D.Motherboard\n");
        printf("Enter your Answer:");
        scanf("%s",&ans10);
        if(ans10 == 'D' || ans10 == 'd'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Expert Difficulty is:%d\n",score2);
        TFinalScore = score2 + TFinalScore;
        printf("Your Final score is %d points \n",TFinalScore);
        printf("Do you want to proceed to Expert difficulty? [Y] for yes and \[N] for no:");
        scanf("%s",&choice);
        if(choice == 'Y' || choice == 'y'){
            M_Technology();
        }
        else{
            printf("The program will now exit");
            exit (0);
        }
}
int M_Technology(){
char ans11, ans12, ans13, ans14, ans15, choice;
        int score3 = 0;
        printf("\nWelome to Master Questions\n");
        printf("1.Who invented flexible photographic film?\n");
        printf("A.Leonardo da Vinci\n");
        printf("B.Linda Easter\n");
        printf("C.Louis Dager\n");
        printf("D.George Eastman\n");
        printf("Enter your Answer:");
        scanf("%s",&ans11);
        if(ans11 == 'D' || ans11 == 'd'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.When did the compact disc first appear on the market?\n");
        printf("A.1982\n");
        printf("B.1992\n");
        printf("C.1955\n");
        printf("D.1989\n");
        printf("Enter your Answer:");
        scanf("%s",&ans12);
        if(ans12 == 'A' || ans12 == 'a'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.What does the Internet prefix WWW stand for?\n");
        printf("A.Wide Width Wickets\n");
        printf("B.World Wide Web\n");
        printf("C.Worldwide Weather\n");
        printf("D.Western Wide World\n");
        printf("Enter your Answer:");
        scanf("%s",&ans13);
        if(ans13 == 'B' || ans13 == 'b'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.Which of these products is not made by the Apple Corporation?\n");
        printf("A.NMAX\n");
        printf("B.iPhone\n");
        printf("C.iMac\n");
        printf("D.iPod\n");
        printf("Enter your Answer:");
        scanf("%s",&ans14);
        if(ans14 == 'A' || ans14 == 'a'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.A network designed to allow communication within an organization is called:\n");
        printf("A.the browser\n");
        printf("B.Yahoo\n");
        printf("C.an intranet\n");
        printf("D.the Internet\n");
        printf("Enter your Answer:");
        scanf("%s",&ans15);
        if(ans15 == 'C' || ans15 == 'c'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Master Difficulty is %d points\n",score3);
        TFinalScore = score3 + TFinalScore;
        printf("Your Final score is %d points \n",TFinalScore);
        printf("The program will now abort");
        return 0;
}
int science(){
char diff;
    printf("\nWelcome to Science\n");
    printf("PRESS [N] FOR NOVICE\n");
    printf("PRESS [E] FOR EXPERT\n");
    printf("PRESS [M] FOR MASTER\n");
    printf("Choose Difficulty:");
    scanf("%s",&diff);
    switch(diff){
    case 'N':
    case 'n':
        N_Science();
        break;
    case 'E':
    case 'e':
        E_Science();
        break;
    case 'M':
    case 'm':
        M_Science();
        break;
            default:
                printf("Invalid Selection the program will now abort");
                 return 0;
}
}

int N_Science(){
    int score1 = 0;
        char ans1, ans2, ans3, ans4, ans5,choice;
        printf("\nWelcome to Novice Questions\n");
        printf("1.What Table of Element is Al?\n");
        printf("A.Iron\n");
        printf("B.Calcium\n");
        printf("C.Baron\n");
        printf("D.Aluminium\n");
        printf("Enter your Answer:");
        scanf("%s",&ans1);
        if(ans1 == 'D' || ans1 == 'd'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.The fastest animal in land.\n");
        printf("A.Lion\n");
        printf("B.Dog\n");
        printf("C.Cheetah\n");
        printf("D.Horse\n");
        printf("Enter your Answer:");
        scanf("%s",&ans2);
        if(ans2 == 'C' || ans2 == 'c'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.It is one of the important system in our body because it is the main control and coordinating system of the body.\n");
        printf("A.Reproductive System\n");
        printf("B.Nervous System\n");
        printf("C.Digestive System\n");
        printf("D.Respiratory System\n");
        printf("Enter your Answer:");
        scanf("%s",&ans3);
        if(ans3 == 'B' || ans3 == 'b'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.This system supports and protects the body's internal organs.\n");
        printf("A.Skeletal System\n");
        printf("B.Muscular System\n");
        printf("C.Endocrine System\n");
        printf("D.Circulatory System\n");
        printf("Enter your Answer:");
        scanf("%s",&ans4);
        if(ans4 == 'A' || ans4 == 'a'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.Carry food/water throughout leaf.\n");
        printf("A.Margin\n");
        printf("B.Apex\n");
        printf("C.Midrib\n");
        printf("D.Veins\n");
        printf("Enter your Answer:");
        scanf("%s",&ans5);
        if(ans5 == 'D' || ans5 == 'd'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Novice Difficulty is:%d\n",score1);
        SFinalScore = score1 + SFinalScore;
        printf("Your Final score is %d points \n",SFinalScore);
        printf("Do you want to proceed to Expert difficulty? [Y] for yes and \[N] for no:");
        scanf("%s",&choice);
        if(choice == 'Y' || choice == 'y'){
            E_Science();
        }
        else{
            printf("The program will now exit");
            exit (0);
        }
}
int E_Science(){
  char ans6, ans7, ans8, ans9, ans10, choice;
        int score2 = 0;
        printf("\nWelome to Expert Questions\n");
        printf("1.Brass gets discoloured in air because of the presence of which of the following gases in air?\n");
        printf("A.Oxygen\n");
        printf("B.Hydrogen Sulphide\n");
        printf("C.Carbon dioxide\n");
        printf("D.Nitrogen\n");
        printf("Enter your Answer:");
        scanf("%s",&ans6);
        if(ans6 == 'B' || ans6 == 'b'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.Which of the following is a non metal that remains liquid at room temperature?\n");
        printf("A.Phosphorous\n");
        printf("B.Bromine\n");
        printf("C.Chlorine\n");
        printf("D.Helium\n");
        printf("Enter your Answer:");
        scanf("%s",&ans7);
        if(ans7 == 'B' || ans7 == 'b'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.Which of the following is used in pencils?\n");
        printf("A.Graphite\n");
        printf("B.Silicon\n");
        printf("C.Charcoal\n");
        printf("D.Phosphorous\n");
        printf("Enter your Answer:");
        scanf("%s",&ans8);
        if(ans8 == 'A' || ans8 == 'a'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.Which of the following metals forms an amalgam with other metals?\n");
        printf("A.Tin\n");
        printf("B.Lead\n");
        printf("C.Mercury\n");
        printf("D.Zinc\n");
        printf("Enter your Answer:");
        scanf("%s",&ans9);
        if(ans9 == 'C' || ans9 == 'c'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.Chemical formula for water is\n");
        printf("A.NaAlO2\n");
        printf("B.H2O\n");
        printf("C.Al2O3\n");
        printf("D.CaSiO3\n");
        printf("Enter your Answer:");
        scanf("%s",&ans10);
        if(ans10 == 'B' || ans10 == 'b'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Expert Difficulty is:%d\n",score2);
        SFinalScore = score2 + SFinalScore;
        printf("Your Final score is %d points \n",SFinalScore);
        printf("Do you want to proceed to Expert difficulty? [Y] for yes and \[N] for no:");
        scanf("%s",&choice);
        if(choice == 'Y' || choice == 'y'){
            M_Science();
        }
        else{
            printf("The program will now exit");
            exit (0);
        }
}
int M_Science(){
char ans11, ans12, ans13, ans14, ans15, choice;
        int score3 = 0;
        printf("\nWelome to Master Questions\n");
        printf("1.Washing soda is the common name for\n");
        printf("A.Sodium carbonate\n");
        printf("B.Calcium bicarbonate\n");
        printf("C.Sodium bicarbonate\n");
        printf("D.Calcium carbonate\n");
        printf("Enter your Answer:");
        scanf("%s",&ans11);
        if(ans11 == 'A' || ans11 == 'a'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.Which of the gas is not known as green house gas?\n");
        printf("A.Methane\n");
        printf("B.Nitrous oxide\n");
        printf("C.Carbon dioxide\n");
        printf("D.Hydrogen\n");
        printf("Enter your Answer:");
        scanf("%s",&ans12);
        if(ans12 == 'D' || ans12 == 'd'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.Bromine is a\n");
        printf("A.Black solid\n");
        printf("B.Red liquid\n");
        printf("C.Colorless gas\n");
        printf("D.Highly inflammable gas\n");
        printf("Enter your Answer:");
        scanf("%s",&ans13);
        if(ans13 == 'B' || ans13 == 'b'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.The hardest substance available on earth is\n");
        printf("A.Gold\n");
        printf("B.Iron\n");
        printf("C.Diamond\n");
        printf("D.Platinum\n");
        printf("Enter your Answer:");
        scanf("%s",&ans14);
        if(ans14 == 'C' || ans14 == 'c'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.Tetraethyl lead is used a\n");
        printf("A.Pain killer\n");
        printf("B.Fire extinguisher\n");
        printf("C.Mosquito repellent\n");
        printf("D.Petrol additive\n");
        printf("Enter your Answer:");
        scanf("%s",&ans15);
        if(ans15 == 'D' || ans15 == 'd'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Master Difficulty is %d points\n",score3);
        SFinalScore = score3 + SFinalScore;
        printf("Your Final score is %d points \n",SFinalScore);
        printf("The program will now abort");
        return 0;
}
int english(){
char diff;
   printf("\nWelcome to English\n");
    printf("PRESS [N] FOR NOVICE\n");
    printf("PRESS [E] FOR EXPERT\n");
    printf("PRESS [M] FOR MASTER\n");
    printf("Choose Difficulty:");
    scanf("%s",&diff);
    switch(diff){
    case 'N':
    case 'n':
        N_English();
        break;
    case 'E':
    case 'e':
        E_English();
        break;
    case 'M':
    case 'm':
        M_English();
        break;
            default:
                 printf("Invalid Selection the program will now abort");
                 return 0;
}
}



int N_English(){
int score1 = 0;
        char ans1, ans2, ans3, ans4, ans5,choice;
        printf("\nWelcome to Novice Questions\n");
        printf("1.Anna is Fishing in the pond. What is noun in the sentence?\n");
        printf("A.Fishing\n");
        printf("B.Pond\n");
        printf("C.Anna\n");
        printf("D.Is\n");
        printf("Enter your Answer:");
        scanf("%s",&ans1);
        if(ans1 == 'C' || ans1 == 'c'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.Lar is handsome, and he is good in academics. Find the Pronoun in the sentence.\n");
        printf("A.Lar\n");
        printf("B.Handsome\n");
        printf("C.Academics\n");
        printf("D.He\n");
        printf("Enter your Answer:");
        scanf("%s",&ans2);
        if(ans2 == 'D' || ans2 == 'd'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.I believe Zymin is more beautiful than her. What is the adjective in the given sentence?\n");
        printf("A.I\n");
        printf("B.Zymin\n");
        printf("C.Her\n");
        printf("D.Beautiful\n");
        printf("Enter your Answer:");
        scanf("%s",&ans3);
        if(ans3 == 'D' || ans3 == 'd'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.My mommy is busy cooking in the kitchen. What is the verb in the given sentence?\n");
        printf("A.Mommy\n");
        printf("B.Cooking\n");
        printf("C.Kitchen\n");
        printf("D.Is\n");
        printf("Enter your Answer:");
        scanf("%s",&ans4);
        if(ans4 == 'B' || ans4 == 'b'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.My teacher is handsome yet he is strict. What is the cojunction in the given sentence.\n");
        printf("A.Yet\n");
        printf("B.Teacher\n");
        printf("C.My\n");
        printf("D.Handsome\n");
        printf("Enter your Answer:");
        scanf("%s",&ans5);
        if(ans5 == 'A' || ans5 == 'a'){
            printf("Correct!\n");
            score1 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Novice Difficulty is:%d\n",score1);
        EFinalScore = score1 + EFinalScore;
        printf("Your Final score is %d points \n",EFinalScore);
        printf("Do you want to proceed to Expert difficulty? [Y] for yes and \[N] for no:");
        scanf("%s",&choice);
        if(choice == 'Y' || choice == 'y'){
            E_English();
        }
        else{
            printf("The program will now exit");
            exit (0);
        }
}
int E_English(){
  char ans6, ans7, ans8, ans9, ans10, choice;
        int score2 = 0;
        printf("\nWelome to Expert Questions\n");
        printf("1.It is a piece of writing that is written to convince someone of something or to simply inform the reader about a particular topic.\n");
        printf("A.Letter\n");
        printf("B.Biography\n");
        printf("C.Essay\n");
        printf("D.Sentence\n");
        printf("Enter your Answer:");
        scanf("%s",&ans6);
        if(ans6 == 'B' || ans6 == 'b'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.It contains basic information about the subject's life—like their place of birth, education, and interests.\n");
        printf("A.Letter\n");
        printf("B.Biography\n");
        printf("C.Essay\n");
        printf("D.Sentence\n");
        printf("Enter your Answer:");
        scanf("%s",&ans7);
        if(ans7 == 'B' || ans7 == 'b'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.a written, typed, or printed communication, especially one sent in an envelope by mail or messenger.\n");
        printf("A.Essay\n");
        printf("B.Sentence\n");
        printf("C.Phrase\n");
        printf("D.Letter\n");
        printf("Enter your Answer:");
        scanf("%s",&ans8);
        if(ans8 == 'D' || ans8 == 'd'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.the most intense, exciting, or important point of something; a culmination or apex.\n");
        printf("A.Settings\n");
        printf("B.Plot\n");
        printf("C.Climax\n");
        printf("D.Theme\n");
        printf("Enter your Answer:");
        scanf("%s",&ans9);
        if(ans9 == 'C' || ans9 == 'c'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.It is the context in a scene or story that describes the elements in which a story is taking place, including time, place, and environment.\n");
        printf("A.Settings\n");
        printf("B.Plot\n");
        printf("C.Climax\n");
        printf("D.Theme\n");
        printf("Enter your Answer:");
        scanf("%s",&ans10);
        if(ans10 == 'A' || ans10 == 'a'){
            printf("Correct!\n");
            score2 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Expert Difficulty is:%d\n",score2);
        EFinalScore = score2 + EFinalScore;
        printf("Your Final score is %d points \n",EFinalScore);
        printf("Do you want to proceed to Expert difficulty? [Y] for yes and \[N] for no:");
        scanf("%s",&choice);
        if(choice == 'Y' || choice == 'y'){
            M_English();
        }
        else{
            printf("The program will now exit");
            exit (0);
        }
}
int M_English(){
char ans11, ans12, ans13, ans14, ans15, choice;
        int score3 = 0;
        printf("\nWelome to Master Questions\n");
        printf("1.Who wrote the Rome and Juliet?\n");
        printf("A.Charles Dickens\n");
        printf("B.William Shakespeare\n");
        printf("C.Jane Austen\n");
        printf("D.Geoge Orwell\n");
        printf("Enter your Answer:");
        scanf("%s",&ans11);
        if(ans11 == 'B' || ans11 == 'b'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n2.In Norse mythology who is the God of thunder?\n");
        printf("A.Zeus\n");
        printf("B.Athena\n");
        printf("C.Thor\n");
        printf("D.Ares\n");
        printf("Enter your Answer:");
        scanf("%s",&ans12);
        if(ans12 == 'C' || ans12 == 'c'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n3.A poem of fourteen lines using any of a number of formal rhyme schemes, in English typically having ten syllables per line.\n");
        printf("A.Sonnet\n");
        printf("B.Ode\n");
        printf("C.Elegy\n");
        printf("D.Acrostic\n");
        printf("Enter your Answer:");
        scanf("%s",&ans13);
        if(ans13 == 'A' || ans13 == 'a'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n4.Stories composed in verse or prose, usually for theatrical performance, where conflicts and emotion are expressed through dialogue and action\n");
        printf("A.Drama\n");
        printf("B.Fantasy\n");
        printf("C.Fiction\n");
        printf("D.Fable\n");
        printf("Enter your Answer:");
        scanf("%s",&ans14);
        if(ans14 == 'A' || ans14 == 'a'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("\n5.How many parts does sonnet have?\n");
        printf("A.18\n");
        printf("B.14\n");
        printf("C.10\n");
        printf("D.8\n");
        printf("Enter your Answer:");
        scanf("%s",&ans15);
        if(ans15 == 'B' || ans15 == 'b'){
            printf("Correct!\n");
            score3 += 1;
        }
        else{
            printf("Wrong!\n");
        }
        printf("Hello %s\n",name);
        printf("\nYour score in Master Difficulty is %d points\n",score3);
        EFinalScore = score3 + EFinalScore;
        printf("Your Final score is %d points \n",EFinalScore);
        printf("The program will now abort");
        return 0;
}