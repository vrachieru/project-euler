import java.io.*;
import java.util.Map;
import java.util.LinkedHashMap;

public class project_euler_89
{
    public static String shorten(String roman) {
        LinkedHashMap<String, String> replacements = new LinkedHashMap<String, String>();
        
        replacements.put("VIIII", "IX"); 
        replacements.put("IIII" , "IV");
        replacements.put("LXXXX", "XC"); 
        replacements.put("XXXX" , "XL");
        replacements.put("DCCCC", "CM"); 
        replacements.put("CCCC" , "CD");

        for (Map.Entry<String, String> entry : replacements.entrySet()) {
            roman = roman.replace(entry.getKey(), entry.getValue());
        }
        
        return roman;
    }
    
    public static void main(String [ ] args)
    {
        try {
            BufferedReader br = new BufferedReader(new FileReader("../resources/p89-roman.txt"));
            
            String line;
            int original = 0, improved = 0;
            
            while (br.ready()) {
                line = br.readLine().trim();
                original += line.length();
                improved += shorten(line).length();
            }
            
            System.out.println(original - improved);
            
            br.close();
        } catch (Exception ex) {
            System.out.println(ex);
        }
    }
}
