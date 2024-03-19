int min(int a, int b) {
    return a < b ? a : b;
}

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int leastInterval(char* tasks, int tasksSize, int n) {
    int frequencies[26] = {0}; 
    for (int i = 0; i < tasksSize; i++) {
        frequencies[tasks[i] - 'A']++;
    }

    bubbleSort(frequencies, 26);

    int maxFreq = frequencies[25]; 
    int idleTime = (maxFreq - 1) * n; 

    for (int i = 24; i >= 0 && idleTime > 0; i--) {
        idleTime -= min(maxFreq - 1, frequencies[i]);
    }

    idleTime = idleTime > 0 ? idleTime : 0;

    return tasksSize + idleTime;
}
