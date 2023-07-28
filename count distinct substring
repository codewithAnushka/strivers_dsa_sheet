class node
{
public:
    char data;
    node* child_arr[26];
    bool isTerminal;
    node(char data)
    {
        this->data = data;
        for(int i = 0; i < 26; i++)
            child_arr[i] = NULL;
        isTerminal = false;
    }       
};
class Trie {
    node* root;
public:
    Trie() 
    {
       root = new node('\0');
    }
    void insert(string word) {
        node* temp = root;
        for(auto ch : word)
        {
            if(temp->child_arr[ch-'a'] != NULL)
                temp = temp->child_arr[ch-'a'];
            else
            {
                node* new_node = new node(ch);
                temp->child_arr[ch-'a'] = new_node;
                temp = new_node;
            }
        }
        temp->isTerminal = true;
    }
    bool search(string word) 
    {
        node* temp = root;
        for(auto ch : word)
        {
            if(temp->child_arr[ch - 'a'] == NULL)
                return false;
            else
                temp = temp->child_arr[ch - 'a'];
        }
        return temp->isTerminal;
    }


};
int countDistinctSubstrings(string &s)
{
    Trie a;
    int count = 1; // 1 bcoz of ""
    for(int i = 0; i < s.length(); i++)
    {
        for(int len = 1; len <= s.length() - i; len++)
        {
            string word = s.substr(i, len);
            if(!a.search(word))
            {
                a.insert(word);
                count++;
            }
        }
    }
    return count;
}
