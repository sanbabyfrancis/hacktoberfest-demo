/* Java program to display the Interest Rate and Period of Repayment*/
import java.util.Scanner;

// Creating an Interface Bank
public interface Bank {

    void personalLoan(double loan);
    void houseLoan(double loan);
    void educationLoan(double loan);
    void goldLoan(double gram);

}

// Creating class SIB which implements Bank
class SIB implements Bank {

    @Override
    public void personalLoan(double loan){          //Method to display Interest Rate and Period of Repayment for personal loan

        if (loan<10000)
            System.out.println(" Interest Rate : 5% \n Period of Repayment : 1 year");
        else if (loan>=10000 && loan <100000)
            System.out.println(" Interest Rate : 10% \n Period of Repayment : 2 year");
        else if (loan>=100000 && loan<500000)
            System.out.println("Interest Rate : 20% \n Period of Repayment : 3 year");
        else if (loan>=500000 && loan<2500000)
            System.out.println("Interest Rate : 40% \n Period of Repayment : 5 year");
        else if(loan>=2500000)
            System.out.println("Interest Rate : 65% \n Period of Repayment : 7 year");

    }

    @Override
    public void educationLoan(double loan) {            //Method to display Interest Rate and Period of Repayment for educational loan

        if (loan<10000)
            System.out.println(" Interest Rate : 2% \n Period of Repayment : 1 year");
        else if (loan>=10000 && loan <100000)
            System.out.println(" Interest Rate : 5% \n Period of Repayment : 2 year");
        else if (loan>=100000 && loan<500000)
            System.out.println("Interest Rate : 10% \n Period of Repayment : 3 year");
        else if (loan>=500000 && loan<2500000)
            System.out.println("Interest Rate : 20% \n Period of Repayment : 4 year");
        else if(loan>=2500000)
            System.out.println("Interest Rate : 30% \n Period of Repayment : 5 year");

    }

    @Override
    public void houseLoan(double loan) {                 //Method to display Interest Rate and Period of Repayment for house loan

        if (loan<10000)
            System.out.println(" Interest Rate : 7% \n Period of Repayment : 1 year");
        else if (loan>=10000 && loan <100000)
            System.out.println(" Interest Rate : 15% \n Period of Repayment : 3 year");
        else if (loan>=100000 && loan<500000)
            System.out.println("Interest Rate : 25% \n Period of Repayment : 4 year");
        else if (loan>=500000 && loan<2500000)
            System.out.println("Interest Rate : 30% \n Period of Repayment : 7 year");
        else if(loan>=2500000)
            System.out.println("Interest Rate : 35% \n Period of Repayment : 10 year");
    }

    @Override
    public void goldLoan(double gram) {                   //Method to display Interest Rate and Period of Repayment for gold loan

        if (gram<100)
            System.out.println(" Interest Rate : 5% \n Period of Repayment : 1 year");
        else if (gram>=300 && gram <500)
            System.out.println(" Interest Rate : 9% \n Period of Repayment : 2 year");
        else if (gram>=500 && gram<750)
            System.out.println("Interest Rate : 15% \n Period of Repayment : 3 year");
        else if (gram>=750 && gram<1000)
            System.out.println("Interest Rate : 20% \n Period of Repayment : 5 year");
        else if(gram>=1000)
            System.out.println("Interest Rate : 22% \n Period of Repayment : 7 year");
    }
}

//Creating a class SBI which implements Bank
class SBI implements Bank {

    @Override
    public void personalLoan(double loan){              //Method to display Interest Rate and Period of Repayment for personal loan

        if (loan<10000)
            System.out.println(" Interest Rate : 5% \n Period of Repayment : 1 year");
        else if (loan>=10000 && loan <100000)
            System.out.println(" Interest Rate : 15% \n Period of Repayment : 2 year");
        else if (loan>=100000 && loan<500000)
            System.out.println("Interest Rate : 25% \n Period of Repayment : 3 year");
        else if (loan>=500000 && loan<2500000)
            System.out.println("Interest Rate : 40% \n Period of Repayment : 5 year");
        else if(loan>=2500000)
            System.out.println("Interest Rate : 60% \n Period of Repayment : 6 year");

    }

    @Override
    public void educationLoan(double loan) {                //Method to display Interest Rate and Period of Repayment for educational loan

        if (loan<10000)
            System.out.println(" Interest Rate : 2% \n Period of Repayment : 1 year");
        else if (loan>=10000 && loan <100000)
            System.out.println(" Interest Rate : 5% \n Period of Repayment : 2 year");
        else if (loan>=100000 && loan<500000)
            System.out.println("Interest Rate : 10% \n Period of Repayment : 3 year");
        else if (loan>=500000 && loan<2500000)
            System.out.println("Interest Rate : 20% \n Period of Repayment : 4 year");
        else if(loan>=2500000)
            System.out.println("Interest Rate : 50% \n Period of Repayment : 6 year");

    }

    @Override
    public void houseLoan(double loan) {               //Method to display Interest Rate and Period of Repayment for house loan

        if (loan<10000)
            System.out.println(" Interest Rate : 8% \n Period of Repayment : 1 year");
        else if (loan>=10000 && loan <100000)
            System.out.println(" Interest Rate : 15% \n Period of Repayment : 3 year");
        else if (loan>=100000 && loan<500000)
            System.out.println("Interest Rate : 30% \n Period of Repayment : 4 year");
        else if (loan>=500000 && loan<2500000)
            System.out.println("Interest Rate : 55% \n Period of Repayment : 7 year");
        else if(loan>=2500000)
            System.out.println("Interest Rate : 70% \n Period of Repayment : 8 year");
    }

    @Override
    public void goldLoan(double gram) {            //Method to display Interest Rate and Period of Repayment for gold loan

        if (gram<100)
            System.out.println(" Interest Rate : 5% \n Period of Repayment : 1 year");
        else if (gram>=300 && gram <500)
            System.out.println(" Interest Rate : 9% \n Period of Repayment : 2 year");
        else if (gram>=500 && gram<750)
            System.out.println("Interest Rate : 15% \n Period of Repayment : 3 year");
        else if (gram>=750 && gram<1000)
            System.out.println("Interest Rate : 20% \n Period of Repayment : 5 year");
        else if(gram>=1000)
            System.out.println("Interest Rate : 30% \n Period of Repayment : 7 year");
    }

}

class InterestCalculator{

    public static void main(String[] args) {

        double loan;
        String bank;
        int typeloan;
        Bank b=new SBI();

        Scanner in=new Scanner(System.in);
        System.out.print("\n Select your bank (SIB / SBI)  : ");
        bank=in.nextLine();      // Reaading name of bank

        if (bank.equals("SIB"))
            b =new SIB();           // Creating instance of SIB class
        else if(bank.equals("SBI"))
            b =new SBI();         // Creating Instance of SBI class
        else
            System.out.println("NOT an appropriate bank ");

        System.out.println("""
                Select the type of loan :\s
                1. Personal Loan
                2. Educational Loan\s
                3. House Loan
                4. Gold Loan""".indent(1));
        typeloan= in.nextInt();    // Reading type of loan
        switch (typeloan) {
            case 1 -> {
                System.out.println("Enter the amount needed : ");
                loan = in.nextDouble();
                b.personalLoan(loan);
            }
            case 2 -> {
                System.out.println("Enter the amount needed : ");
                loan = in.nextDouble();
                b.educationLoan(loan);
            }
            case 3 -> {
                System.out.println("Enter the amount needed : ");
                loan = in.nextDouble();
                b.houseLoan(loan);
            }
            case 4 -> {
                System.out.println("Enter the amount of gold needed(in grams) : ");
                loan = in.nextDouble();
                b.goldLoan(loan);
            }

            default -> System.out.println(" Invalid entry");
        }
    }
}
