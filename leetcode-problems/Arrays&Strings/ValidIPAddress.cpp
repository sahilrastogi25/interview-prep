int isValid(string input) {
    //This is for IPv4 Addresses
    stringstream ss(input);
    vector<string>tokens;
    string token;
    while (getline(ss, token, '.')) {
        tokens.push_back(token);
    }
    if (tokens.size() != 4) {
        return 0;
    }
    for (auto token : tokens) {
        int num = stoi(token);
        if (num<0 or num>255) {
            return 0;
        }
    }
    return 1;
}