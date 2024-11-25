int IncDecRec(int n) {
  if (n < 10) {
    if (n % 2 != 0) {
      return n - 1;
    } else {
      return n + 1;
    }
  }
  int uc = n % 10;
  if (uc % 2 != 0) {
    return IncDecRec(n / 10) * 10 + uc - 1;
  } else {
    return IncDecRec(n / 10) * 10 + uc + 1;
  }
}