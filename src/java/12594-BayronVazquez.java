import java.util.Scanner;
import java.util.Arrays;

class Main {
    public static void main(String[ ] args) {
        Scanner sc = new Scanner (System.in);
        char caracter;
        String cadena;

        caracter = sc.next().charAt(0);
        cadena = sc.next();

        char [] caracteres = cadena.toCharArray();

        Arrays.sort(caracteres);

        cadena ="";

        for(int i = 0; i < caracteres.length; i++)
            cadena = cadena + caracteres[i];

        cadena = cadena.substring(cadena.indexOf(caracter), cadena.lastIndexOf(caracter)+1);

        System.out.println(cadena.length());
    }
}