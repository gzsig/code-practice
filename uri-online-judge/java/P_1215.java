import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

/**
 * P_1215
 */
public class P_1215 {

  public static void main(String[] args) {
    Scanner keyboard = new Scanner(System.in);
    String input;
    int n;
    String[] words;
    Set<String> set = new HashSet<String>();
    List<String> wordsInput = new ArrayList<String>();

    while (keyboard.hasNext()) {
      input = keyboard.nextLine();
      words = input.split(" ");
      for (String s : words) {
        set.add(s.toLowerCase());
      }
  }

    for (String s : set) {
      if(isStr(s)){
         wordsInput.add(s);
      }
    }
    Collections.sort(wordsInput);
    if (wordsInput.size() <= 5000) {
      n = wordsInput.size();
    } else {
      n = 5000;
    }
    for (int i = 0; i < n; i++) {
      System.out.println(wordsInput.get(i));
    }
    keyboard.close();
  }
  public static boolean isStr(String str){
    return ((str != null) 
            && (!str.equals("")) 
            && (str.matches("^[a-zA-Z]*$")));
  }

}
