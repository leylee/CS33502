int htoi(const char *str)
{
    int result = 0;
    const char *pt = str + 2;
    while (*pt) {
        result = result * 16 + (*pt >= '0' && *pt <= '9'   ? *pt - '0'
                                : *pt >= 'A' && *pt <= 'F' ? *pt - 'A' + 10
                                                           : *pt - 'a' + 10);
        ++pt;
    }
    return result;
}

int otoi(const char *str)
{
    int result = 0;
    const char *pt = str + 1;
    while (*pt) {
        result = result * 8 + *pt - '0';
        ++pt;
    }
    return result;
}