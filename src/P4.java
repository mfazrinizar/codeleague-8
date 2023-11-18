public class P4 {
    public static void main(String[] args) throws java.io.IOException {
        try (java.io.BufferedReader reader = new java.io.BufferedReader(new java.io.InputStreamReader(System.in))) {
            String noHp = reader.readLine();
            int kodeNo = Integer.parseInt(noHp.startsWith("62") ? noHp.substring(2, 5) : noHp.substring(0, 4));
            System.out.println(kodeNo >= 811 && kodeNo <= 815 ? "Telkomsel" : kodeNo >= 816 && kodeNo <= 819 ? "Indosat" : kodeNo >= 821 && kodeNo <= 823 ? "XL" : kodeNo >= 827 && kodeNo <= 829 ? "Tri" : kodeNo >= 852 && kodeNo <= 853 ? "AS" : kodeNo >= 881 && kodeNo <= 888 ? "Smartfren" : "Invalid");
        }
    }
}