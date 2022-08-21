class Solution {
    public int calculateTime(String keyboard, String word) {
        int[] Keyboard = new int[26];
        for (int i = 0; i < keyboard.length(); i++) {
            Keyboard[keyboard.charAt(i) - 'a'] = i;
        }
        int val = 0, time = 0;
        for (int i = 0; i < word.length(); i++) {
            char ch = word.charAt(i);
            time += Math.abs(val - Keyboard[ch - 'a']);
            val = Keyboard[ch - 'a'];
        }
        return time;
    }
}