import java.io.*;
import java.util.*;


public class euler11 {

    public static void main(String[] args)throws IOException {

        FileInputStream fstream = new FileInputStream("input.txt");
        BufferedReader br = new BufferedReader(new InputStreamReader(fstream));

        String strLine;
        int array[][] = new int[20][20];
        int j=0;
        int i, k;
        int sum = 0, max =0;

        //Read File Line By Line
        while ((strLine = br.readLine()) != null)   {
            // Print the content on the console
            StringTokenizer str = new StringTokenizer(strLine);
            for(i=0;i<20;i++) {
                array[j][i] =  Integer.parseInt(str.nextToken());
            }
            j++;
        }


    //Close the input stream
    br.close();
    //int max = 0;

    //Horizontal

    for(i=0;i<20;i++) {
        for(j=i;j<20-3;j++){
            sum = 0;
            sum = array[j][i]*array[j+1][i]*array[j+2][i]*array[j+3][i];
                            
            if (sum > max) 
                max = sum;

            sum = array[i][j]*array[i][j+1]*array[i][j+2]*array[i][j+3];
            
            if (sum > max) 
                max = sum;
            
            
        }
    }

   







    //Left diagonal and right diagonal

    for(i = 0; i < 20-3; i++)
      for(j = 0; j < 20-3; j++) {
        sum = array[i][j] * array[i+1][j+1] * array[i+2][j+2] * array[i+3][j+3];
        if (sum > max)
          max = sum;

        sum = array[i][j+3] * array[i+1][j+2] * array[i+2][j+1] * array[i+3][j];
        if (sum > max)
          max = sum;
      }

    System.out.println(max);



    }

}