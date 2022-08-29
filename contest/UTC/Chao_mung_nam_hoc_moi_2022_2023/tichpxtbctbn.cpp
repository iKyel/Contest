    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        int n; cin >> n;            
        double a[1000];
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        double cnt_am=0, cnt_duong=0; 
        double tong_am=0,tich_duong=1;
        for(int i=1; i<=n; i++)
        {
            if(a[i]<0)
            {
                cnt_am++;
                tong_am+=a[i];
            }       
            if(a[i]>0)  
            {
                cnt_duong++;
                tich_duong *= a[i];
            }
        }
        if(cnt_am==0) cout << "khong co so am" << endl;
        else cout << tong_am/cnt_am << endl;

        if(cnt_duong==0) cout << "khong co so duong" << endl;
        else cout << pow(tich_duong, 1/cnt_duong);
    }