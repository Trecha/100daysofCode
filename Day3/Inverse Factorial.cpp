int solve(int a) {
    int f=1;
    while(f<=a)
    {
        int fa=1;
        for(int i=1;i<=f;i++)
          fa=fa*i;
        if(fa==a)
        {
            return f;
            break;
        }
        f++;
    }
    return -1;    
}
