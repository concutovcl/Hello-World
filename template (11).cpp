
struct Diem
{
    int x;
    int y;
};
void nhapDSDiem(Diem a[], int &n)
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i].x>>a[i].y;
}
void xuatDSDiem(Diem a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"("<<a[i].x<<","<<a[i].y<<")"<<endl;
    }
}
string gocPhanTu(Diem M)
{
    if(M.x>0 && M.y>0) return "thuoc goc phan tu thu I";
    if(M.x>0 && M.y<0) return "thuoc goc phan tu thu IV";
    if(M.x<0 && M.y>0) return "thuoc goc phan tu thu II";
    if(M.x<0 && M.y<0) return "thuoc goc phan tu thu III";
    if(M.x==0 && M.y!=0) return "nam tren truc tung";
    if(M.x!=0 && M.y==0) return "nam tren truc hoanh";
    if(M.x==0 && M.y==0) return "la goc toa do";
}
void gocPhanTu(Diem a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"("<<a[i].x<<","<<a[i].y<<") "<<gocPhanTu(a[i])<<endl;
    }
}

