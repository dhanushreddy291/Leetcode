class Solution {
private:
    vector <string> Thousands = {"", "Thousand ", "Million ", "Billion "};
    vector <string> lessThanTwenty = {"", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
    vector <string> Tens = {"", "", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
    string helper(int a) {
        if (a == 0) return "";
        if (a < 20) return lessThanTwenty[a];
        if (a < 100) return Tens[a / 10] + helper(a % 10);
        return lessThanTwenty[a / 100] + "Hundred " + helper(a % 100);
    }
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        string Number = "";
        int pos = 0;
        while (num) {
            if (num % 1000) {
                Number = helper(num % 1000) + Thousands[pos] + Number;
            } 
            pos++;
            num /= 1000;
        }
        Number.pop_back();
        return Number;
    }
};