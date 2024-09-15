import java.util.Random;
import java.util.Scanner;

public class TicTacToe {
    public static int moves = 1;
    public static Scanner sc = new Scanner(System.in);
    public static Random random = new Random();
    public static void main(String[] args) {
        char[][] gameBoard;
        gameBoard = new char[][]{{' ','|',' ','|',' '},
                {'-','+','-','+','-'},
                {' ','|',' ','|',' '},
                {'-','+','-','+','-'},
                {' ','|',' ','|',' '}
        };

        printGame(gameBoard);
        while (true) {
            userInput(gameBoard);
            printGame(gameBoard);
            check(gameBoard);
            comInput(gameBoard);
            printGame(gameBoard);
            check(gameBoard);

        }
    }
    public static void printGame(char gameBoard[][]){
        for (int i = 0; i < gameBoard.length ; i++) {
            for (int j = 0; j <gameBoard[i].length ; j++) {
                System.out.print(gameBoard[i][j]);
            }
            System.out.println();
        }
        System.out.println();
    }
    public static void userInput(char gameBoard[][]){
        if (moves<10) {
            boolean demand = true;
            while (demand){
            System.out.println("Its your chance Enter the position between 1 to 9 = ");
            int pos = sc.nextInt();
            switch (pos) {
                case 1 -> {
                    if (gameBoard[0][0] == ' ') {
                        gameBoard[0][0] = 'X';
                        demand = false;
                    } else {
                        System.out.println("Space is occupied");
                    }

                }
                case 2 -> {
                    if (gameBoard[0][2] == ' ') {
                        gameBoard[0][2] = 'X';
                        demand = false;
                    } else {
                        System.out.println("Space is occupied");
                    }

                }
                case 3 -> {
                    if (gameBoard[0][4] == ' ') {
                        gameBoard[0][4] = 'X';
                        demand = false;
                    } else {
                        System.out.println("Space is occupied");
                    }

                }
                case 4 -> {
                    if (gameBoard[2][0] == ' ') {
                        gameBoard[2][0] = 'X';
                        demand = false;
                    } else {
                        System.out.println("Space is occupied");
                    }

                }
                case 5 -> {
                    if (gameBoard[2][2] == ' ') {
                        gameBoard[2][2] = 'X';
                        demand = false;
                    } else {
                        System.out.println("Space is occupied");
                    }

                }
                case 6 -> {
                    if (gameBoard[2][4] == ' ') {
                        gameBoard[2][4] = 'X';
                        demand = false;
                    } else {
                        System.out.println("Space is occupied");
                    }

                }
                case 7 -> {
                    if (gameBoard[4][0] == ' ') {
                        gameBoard[4][0] = 'X';
                        demand = false;
                    } else {
                        System.out.println("Space is occupied");
                    }

                }
                case 8 -> {
                    if (gameBoard[4][2] == ' ') {
                        gameBoard[4][2] = 'X';
                        demand = false;
                    } else {
                        System.out.println("Space is occupied");
                    }

                }
                case 9 -> {
                    if (gameBoard[4][4] == ' ') {
                        gameBoard[4][4] = 'X';
                        demand = false;
                    } else {
                        System.out.println("Space is occupied");
                    }
                }
                default -> System.out.println("Wrong position ");
            }
        }
        moves++;
        }
        else{
            System.exit(0);
        }
    }
    public static void comInput(char gameBoard[][]){
        if (moves<10) {
            System.out.println("Computer response");
            boolean demand = true;
            while (demand){
                int pos = random.nextInt(10);
                switch (pos) {
                    case 1 -> {
                        if (gameBoard[0][0] == ' ') {
                            gameBoard[0][0] = 'O';
                            demand = false;
                        }
                    }
                    case 2 -> {
                        if (gameBoard[0][2] == ' ') {
                            gameBoard[0][2] = 'O';
                            demand = false;
                        }
                    }
                    case 3 -> {
                        if (gameBoard[0][4] == ' ') {
                            gameBoard[0][4] = 'O';
                            demand = false;
                        }
                    }
                    case 4 -> {
                        if (gameBoard[2][0] == ' ') {
                            gameBoard[2][0] = 'O';
                            demand = false;
                        }
                    }
                    case 5 -> {
                        if (gameBoard[2][2] == ' ') {
                            gameBoard[2][2] = 'O';
                            demand = false;
                        }
                    }
                    case 6 -> {
                        if (gameBoard[2][4] == ' ') {
                            gameBoard[2][4] = 'O';
                            demand = false;
                        }
                    }
                    case 7 -> {
                        if (gameBoard[4][0] == ' ') {
                            gameBoard[4][0] = 'O';
                            demand = false;
                        }
                    }
                    case 8 -> {
                        if (gameBoard[4][2] == ' ') {
                            gameBoard[4][2] = 'O';
                            demand = false;
                        }
                    }
                    case 9 -> {
                        if (gameBoard[4][4] == ' ') {
                            gameBoard[4][4] = 'O';
                            demand = false;
                        }
                    }
                }
    

            }
            moves++;
        } else {
            System.exit(0);
        }
        
    }
    public static void check(char gameBoard[][]){
        char sign = ' ';
        if (gameBoard[0][0]==gameBoard[0][2]&&gameBoard[0][4]==gameBoard[0][0]){
              sign = gameBoard[0][0];

        }

        else if (gameBoard[2][0]==gameBoard[2][2]&&gameBoard[2][4]==gameBoard[2][0]){
            sign = gameBoard[2][0];
        }

        else if (gameBoard[4][0]==gameBoard[4][2]&&gameBoard[4][4]==gameBoard[4][0]){
            sign = gameBoard[4][0];
        }

        else if (gameBoard[0][0]==gameBoard[2][0]&&gameBoard[4][0]==gameBoard[0][0]){
            sign = gameBoard[0][0];
        }

        else if (gameBoard[0][2]==gameBoard[2][2]&&gameBoard[4][2]==gameBoard[0][2]){
            sign = gameBoard[0][2];
        }

        else if (gameBoard[0][4]==gameBoard[2][4]&&gameBoard[4][4]==gameBoard[0][4]){
            sign = gameBoard[0][4];
        }

        else if (gameBoard[0][0]==gameBoard[2][2]&&gameBoard[4][4]==gameBoard[0][0]){
            sign = gameBoard[0][0];
        }

        else if (gameBoard[4][0]==gameBoard[2][2]&&gameBoard[0][4]==gameBoard[4][0]){
            sign = gameBoard[4][0];
        }
        if(sign =='X'){
            System.out.println("you win");
            System.exit(0);
        } else if (sign == 'O') {
            System.out.println("Computer win");
            System.exit(0);
        }
       
    }
}