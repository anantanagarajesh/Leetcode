char* customSortString(char* order, char* s) {
    char *a = (char*)malloc((strlen(s) + 1) * sizeof(char)); // +1 for null terminator
    int k = 0;
    int charCount[26] = {0}; // Count occurrences of characters in s
    
    // Count occurrences of characters in s
    for (int i = 0; i < strlen(s); i++)
        charCount[s[i] - 'a']++;
    
    // Append characters from s according to the order specified in order string
    for (int i = 0; i < strlen(order); i++) {
        for (int j = 0; j < charCount[order[i] - 'a']; j++) {
            a[k++] = order[i];
        }
        // Reset the count of the character in order to avoid duplication
        charCount[order[i] - 'a'] = 0;
    }
    
    // Append remaining characters from s that are not in order string
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < charCount[i]; j++) {
            a[k++] = i + 'a';
        }
    }
    
    a[k] = '\0'; // Assign null terminator
    return a;
}
