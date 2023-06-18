double geometricSum(int k) {
        if (k == 0) {
        return 1.0;
    }

    double sm = 1.0 / pow(2, k);

    return sm +geometricSum(k - 1);

}


