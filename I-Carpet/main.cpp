#include <iostream>
#include <vector>

int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
struct my {
    int _i;
    int _j;
    my(int x, int y) : _i(x), _j(y) {}
};

void Kovrix(std::vector<std::vector<char>> &a, int i, int j, int N, int M) {
    a[i][j]='.';
    int ii, jj;
    std::vector<my> xxx;
    for(int k=0; k<4; k++) {
        jj=j+dx[k];
        ii=i+dy[k];
        if(ii>=0 && ii<N && jj>=0 && jj<M)
            if(a[ii][jj]=='+') {
                //Kovrix(a,ii,jj,N,M);
                a[ii][jj]='.';
                int iii, jjj;
                for(int kk=0; kk<4; kk++) {
                    iii=ii+dy[kk];
                    jjj=jj+dx[kk];
                        if(iii>=0 && iii<N && jjj>=0 && jjj<M)
                            if(a[iii][jjj]=='+') {
                                a[iii][jjj]='.';
                                int iiii, jjjj;
                                for(int kkk=0; kkk<4; kkk++) {
                                    iiii=iii+dy[kkk];
                                    jjjj=jjj+dx[kkk];
                                        if(iiii>=0 && iiii<N && jjjj>=0 && jjjj<M)
                                            if(a[iiii][jjjj]=='+') {
                                                a[iiii][jjjj]='.';
                                                int iiiii, jjjjj;
                                                for(int kkkk=0; kkkk<4; kkkk++) {
                                                    iiiii=iiii+dy[kkkk];
                                                    jjjjj=jjjj+dx[kkkk];
                                                        if(iiiii>=0 && iiiii<N && jjjjj>=0 && jjjjj<M)
                                                            if(a[iiiii][jjjjj]=='+') {
                                                                a[iiiii][jjjjj]='.';
                                                                int iiiiii, jjjjjj;
                                                                for(int kkkkk=0; kkkkk<4; kkkkk++) {
                                                                    iiiiii=iiiii+dy[kkkkk];
                                                                    jjjjjj=jjjjj+dx[kkkkk];
                                                                        if(iiiiii>=0 && iiiiii<N && jjjjjj>=0 && jjjjjj<M)
                                                                            if(a[iiiiii][jjjjjj]=='+') {
                                                                                a[iiiiii][jjjjjj]='.';
                                                                                int iiiiiii, jjjjjjj;
                                                                                for(int kkkkkk=0; kkkkkk<4; kkkkkk++) {
                                                                                    iiiiiii=iiiiii+dy[kkkkkk];
                                                                                    jjjjjjj=jjjjjj+dx[kkkkkk];
                                                                                        if(iiiiiii>=0 && iiiiiii<N && jjjjjjj>=0 && jjjjjjj<M)
                                                                                            if(a[iiiiiii][jjjjjjj]=='+') {
                                                                                                a[iiiiiii][jjjjjjj]='.';
                                                                                                int iiiiiiii, jjjjjjjj;
                                                                                                for(int kkkkkkk=0; kkkkkkk<4; kkkkkkk++) {
                                                                                                    iiiiiiii=iiiiiii+dy[kkkkkkk];
                                                                                                    jjjjjjjj=jjjjjjj+dx[kkkkkkk];
                                                                                                        if(iiiiiiii>=0 && iiiiiiii<N && jjjjjjjj>=0 && jjjjjjjj<M)
                                                                                                            if(a[iiiiiiii][jjjjjjjj]=='+') {
                                                                                                                a[iiiiiiii][jjjjjjjj]='.';
                                                                                                                int iiiiiiiii, jjjjjjjjj;
                                                                                                                for(int kkkkkkkk=0; kkkkkkkk<4; kkkkkkkk++) {
                                                                                                                    iiiiiiiii=iiiiiiii+dy[kkkkkkkk];
                                                                                                                    jjjjjjjjj=jjjjjjjj+dx[kkkkkkkk];
                                                                                                                        if(iiiiiiiii>=0 && iiiiiiiii<N && jjjjjjjjj>=0 && jjjjjjjjj<M)
                                                                                                                            if(a[iiiiiiiii][jjjjjjjjj]=='+') {
                                                                                                                                a[iiiiiiiii][jjjjjjjjj]='.';
                                                                                                                                int iiiiiiiiii, jjjjjjjjjj;
                                                                                                                                for(int kkkkkkkkk=0; kkkkkkkkk<4; kkkkkkkkk++) {
                                                                                                                                    iiiiiiiiii=iiiiiiiii+dy[kkkkkkkkk];
                                                                                                                                    jjjjjjjjjj=jjjjjjjjj+dx[kkkkkkkkk];
                                                                                                                                        if(iiiiiiiiii>=0 && iiiiiiiiii<N && jjjjjjjjjj>=0 && jjjjjjjjjj<M)
                                                                                                                                            if(a[iiiiiiiiii][jjjjjjjjjj]=='+') {
                                                                                                                                                a[iiiiiiiiii][jjjjjjjjjj]='.';
                                                                                                                                                int iiiiiiiiiii, jjjjjjjjjjj;
                                                                                                                                                for(int kkkkkkkkkk=0; kkkkkkkkkk<4; kkkkkkkkkk++) {
                                                                                                                                                    iiiiiiiiiii=iiiiiiiiii+dy[kkkkkkkkkk];
                                                                                                                                                    jjjjjjjjjjj=jjjjjjjjjj+dx[kkkkkkkkkk];
                                                                                                                                                        if(iiiiiiiiiii>=0 && iiiiiiiiiii<N && jjjjjjjjjjj>=0 && jjjjjjjjjjj<M)
                                                                                                                                                            if(a[iiiiiiiiiii][jjjjjjjjjjj]=='+') {
                                                                                                                                                                a[iiiiiiiiiii][jjjjjjjjjjj]='.';
                                                                                                                                                                int iiiiiiiiiiii, jjjjjjjjjjjj;
                                                                                                                                                                for(int kkkkkkkkkkk=0; kkkkkkkkkkk<4; kkkkkkkkkkk++) {
                                                                                                                                                                    iiiiiiiiiiii=iiiiiiiiiii+dy[kkkkkkkkkkk];
                                                                                                                                                                    jjjjjjjjjjjj=jjjjjjjjjjj+dx[kkkkkkkkkkk];
                                                                                                                                                                        if(iiiiiiiiiiii>=0 && iiiiiiiiiiii<N && jjjjjjjjjjjj>=0 && jjjjjjjjjjjj<M)
                                                                                                                                                                            if(a[iiiiiiiiiiii][jjjjjjjjjjjj]=='+') {
                                                                                                                                                                                a[iiiiiiiiiiii][jjjjjjjjjjjj]='.';
                                                                                                                                                                                int iiiiiiiiiiiii, jjjjjjjjjjjjj;
                                                                                                                                                                                for(int kkkkkkkkkkkk=0; kkkkkkkkkkkk<4; kkkkkkkkkkkk++) {
                                                                                                                                                                                    iiiiiiiiiiiii=iiiiiiiiiiii+dy[kkkkkkkkkkkk];
                                                                                                                                                                                    jjjjjjjjjjjjj=jjjjjjjjjjjj+dx[kkkkkkkkkkkk];
                                                                                                                                                                                        if(iiiiiiiiiiiii>=0 && iiiiiiiiiiiii<N && jjjjjjjjjjjjj>=0 && jjjjjjjjjjjjj<M)
                                                                                                                                                                                            if(a[iiiiiiiiiiiii][jjjjjjjjjjjjj]=='+') {
                                                                                                                                                                                                a[iiiiiiiiiiiii][jjjjjjjjjjjjj]='.';
                                                                                                                                                                                                int iiiiiiiiiiiiii, jjjjjjjjjjjjjj;
                                                                                                                                                                                                for(int kkkkkkkkkkkkk=0; kkkkkkkkkkkkk<4; kkkkkkkkkkkkk++) {
                                                                                                                                                                                                    iiiiiiiiiiiiii=iiiiiiiiiiiii+dy[kkkkkkkkkkkkk];
                                                                                                                                                                                                    jjjjjjjjjjjjjj=jjjjjjjjjjjjj+dx[kkkkkkkkkkkkk];
                                                                                                                                                                                                        if(iiiiiiiiiiiiii>=0 && iiiiiiiiiiiiii<N && jjjjjjjjjjjjjj>=0 && jjjjjjjjjjjjjj<M)
                                                                                                                                                                                                            if(a[iiiiiiiiiiiiii][jjjjjjjjjjjjjj]=='+') {
                                                                                                                                                                                                                a[iiiiiiiiiiiiii][jjjjjjjjjjjjjj]='.';
                                                                                                                                                                                                                int iiiiiiiiiiiiiii, jjjjjjjjjjjjjjj;
                                                                                                                                                                                                                for(int kkkkkkkkkkkkkk=0; kkkkkkkkkkkkkk<4; kkkkkkkkkkkkkk++) {
                                                                                                                                                                                                                    iiiiiiiiiiiiiii=iiiiiiiiiiiiii+dy[kkkkkkkkkkkkkk];
                                                                                                                                                                                                                    jjjjjjjjjjjjjjj=jjjjjjjjjjjjjj+dx[kkkkkkkkkkkkkk];
                                                                                                                                                                                                                        if(iiiiiiiiiiiiiii>=0 && iiiiiiiiiiiiiii<N && jjjjjjjjjjjjjjj>=0 && jjjjjjjjjjjjjj<M)
                                                                                                                                                                                                                            if(a[iiiiiiiiiiiiiii][jjjjjjjjjjjjjjj]=='+') {
                                                                                                                                                                                                                                a[iiiiiiiiiiiiiii][jjjjjjjjjjjjjjj]='.';
                                                                                                                                                                                                                                int iiiiiiiiiiiiiiii, jjjjjjjjjjjjjjjj;
                                                                                                                                                                                                                                for(int kkkkkkkkkkkkkkk=0; kkkkkkkkkkkkkkk<4; kkkkkkkkkkkkkkk++) {
                                                                                                                                                                                                                                    iiiiiiiiiiiiiiii=iiiiiiiiiiiiiii+dy[kkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                    jjjjjjjjjjjjjjjj=jjjjjjjjjjjjjjj+dx[kkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                        if(iiiiiiiiiiiiiiii>=0 && iiiiiiiiiiiiiiii<N && jjjjjjjjjjjjjjjj>=0 && jjjjjjjjjjjjjjj<M)
                                                                                                                                                                                                                                            if(a[iiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjj]=='+') {
                                                                                                                                                                                                                                                a[iiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjj]='.';
                                                                                                                                                                                                                                                int iiiiiiiiiiiiiiiii, jjjjjjjjjjjjjjjjj;
                                                                                                                                                                                                                                                for(int kkkkkkkkkkkkkkkk=0; kkkkkkkkkkkkkkkk<4; kkkkkkkkkkkkkkkk++) {
                                                                                                                                                                                                                                                    iiiiiiiiiiiiiiiii=iiiiiiiiiiiiiiii+dy[kkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                    jjjjjjjjjjjjjjjjj=jjjjjjjjjjjjjjjj+dx[kkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                        if(iiiiiiiiiiiiiiiii>=0 && iiiiiiiiiiiiiiiii<N && jjjjjjjjjjjjjjjjj>=0 && jjjjjjjjjjjjjjjj<M)
                                                                                                                                                                                                                                                            if(a[iiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjj]=='+') {
                                                                                                                                                                                                                                                                a[iiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjj]='.';
                                                                                                                                                                                                                                                                int iiiiiiiiiiiiiiiiii, jjjjjjjjjjjjjjjjjj;
                                                                                                                                                                                                                                                                for(int kkkkkkkkkkkkkkkkk=0; kkkkkkkkkkkkkkkkk<4; kkkkkkkkkkkkkkkkk++) {
                                                                                                                                                                                                                                                                    iiiiiiiiiiiiiiiiii=iiiiiiiiiiiiiiiii+dy[kkkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                                    jjjjjjjjjjjjjjjjjj=jjjjjjjjjjjjjjjjj+dx[kkkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                                        if(iiiiiiiiiiiiiiiiii>=0 && iiiiiiiiiiiiiiiiii<N && jjjjjjjjjjjjjjjjjj>=0 && jjjjjjjjjjjjjjjjj<M)
                                                                                                                                                                                                                                                                            if(a[iiiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjjj]=='+') {
                                                                                                                                                                                                                                                                                a[iiiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjjj]='.';
                                                                                                                                                                                                                                                                                int iiiiiiiiiiiiiiiiiii, jjjjjjjjjjjjjjjjjjj;
                                                                                                                                                                                                                                                                                for(int kkkkkkkkkkkkkkkkkk=0; kkkkkkkkkkkkkkkkkk<4; kkkkkkkkkkkkkkkkkk++) {
                                                                                                                                                                                                                                                                                    iiiiiiiiiiiiiiiiiii=iiiiiiiiiiiiiiiiii+dy[kkkkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                                                    jjjjjjjjjjjjjjjjjjj=jjjjjjjjjjjjjjjjjj+dx[kkkkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                                                        if(iiiiiiiiiiiiiiiiiii>=0 && iiiiiiiiiiiiiiiiiii<N && jjjjjjjjjjjjjjjjjjj>=0 && jjjjjjjjjjjjjjjjjj<M)
                                                                                                                                                                                                                                                                                            if(a[iiiiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjjjj]=='+') {
                                                                                                                                                                                                                                                                                                a[iiiiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjjjj]='.';
                                                                                                                                                                                                                                                                                                int iiiiiiiiiiiiiiiiiiii, jjjjjjjjjjjjjjjjjjjj;
                                                                                                                                                                                                                                                                                                for(int kkkkkkkkkkkkkkkkkkk=0; kkkkkkkkkkkkkkkkkkk<4; kkkkkkkkkkkkkkkkkkk++) {
                                                                                                                                                                                                                                                                                                    iiiiiiiiiiiiiiiiiiii=iiiiiiiiiiiiiiiiiii+dy[kkkkkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                                                                    jjjjjjjjjjjjjjjjjjjj=jjjjjjjjjjjjjjjjjjj+dx[kkkkkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                                                                        if(iiiiiiiiiiiiiiiiiiii>=0 && iiiiiiiiiiiiiiiiiiii<N && jjjjjjjjjjjjjjjjjjjj>=0 && jjjjjjjjjjjjjjjjjjj<M)
                                                                                                                                                                                                                                                                                                            if(a[iiiiiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjjjjj]=='+') {
                                                                                                                                                                                                                                                                                                                a[iiiiiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjjjjj]='.';
                                                                                                                                                                                                                                                                                                                int iiiiiiiiiiiiiiiiiiiii, jjjjjjjjjjjjjjjjjjjjj;
                                                                                                                                                                                                                                                                                                                for(int kkkkkkkkkkkkkkkkkkkk=0; kkkkkkkkkkkkkkkkkkkk<4; kkkkkkkkkkkkkkkkkkkk++) {
                                                                                                                                                                                                                                                                                                                    iiiiiiiiiiiiiiiiiiiii=iiiiiiiiiiiiiiiiiiii+dy[kkkkkkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                                                                                    jjjjjjjjjjjjjjjjjjjjj=jjjjjjjjjjjjjjjjjjjj+dx[kkkkkkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                                                                                        if(iiiiiiiiiiiiiiiiiiiii>=0 && iiiiiiiiiiiiiiiiiiiii<N && jjjjjjjjjjjjjjjjjjjjj>=0 && jjjjjjjjjjjjjjjjjjjj<M)
                                                                                                                                                                                                                                                                                                                            if(a[iiiiiiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjjjjjj]=='+') {
                                                                                                                                                                                                                                                                                                                                a[iiiiiiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjjjjjj]='.';
                                                                                                                                                                                                                                                                                                                                int iiiiiiiiiiiiiiiiiiiiii, jjjjjjjjjjjjjjjjjjjjjj;
                                                                                                                                                                                                                                                                                                                                for(int kkkkkkkkkkkkkkkkkkkkk=0; kkkkkkkkkkkkkkkkkkkkk<4; kkkkkkkkkkkkkkkkkkkkk++) {
                                                                                                                                                                                                                                                                                                                                    iiiiiiiiiiiiiiiiiiiiii=iiiiiiiiiiiiiiiiiiiii+dy[kkkkkkkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                                                                                                    jjjjjjjjjjjjjjjjjjjjjj=jjjjjjjjjjjjjjjjjjjjj+dx[kkkkkkkkkkkkkkkkkkkkk];
                                                                                                                                                                                                                                                                                                                                        if(iiiiiiiiiiiiiiiiiiiiii>=0 && iiiiiiiiiiiiiiiiiiiiii<N && jjjjjjjjjjjjjjjjjjjjjj>=0 && jjjjjjjjjjjjjjjjjjjjj<M)
                                                                                                                                                                                                                                                                                                                                            if(a[iiiiiiiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjjjjjjj]=='+') {
                                                                                                                                                                                                                                                                                                                                                a[iiiiiiiiiiiiiiiiiiiiii][jjjjjjjjjjjjjjjjjjjjjj]='.';
                                                                                                                                                                                                                                                                                                                                                xxx.push_back(my(iiiiiiiiiiiiiiiiiiiiii,jjjjjjjjjjjjjjjjjjjjjj));
                                                                                                                                                                                                                                                                                                                                            }


                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiiiiiiiiiiiii,jjjjjjjjjjjjjjjjjjjjj));
                                                                                                                                                                                                                                                                                                                            }


                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiiiiiiiiiiii,jjjjjjjjjjjjjjjjjjjj));
                                                                                                                                                                                                                                                                                                            }


                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiiiiiiiiiii,jjjjjjjjjjjjjjjjjjj));
                                                                                                                                                                                                                                                                                            }


                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiiiiiiiiii,jjjjjjjjjjjjjjjjjj));
                                                                                                                                                                                                                                                                            }


                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiiiiiiiii,jjjjjjjjjjjjjjjjj));
                                                                                                                                                                                                                                                            }


                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiiiiiiii,jjjjjjjjjjjjjjjj));
                                                                                                                                                                                                                                            }


                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiiiiiii,jjjjjjjjjjjjjjj));
                                                                                                                                                                                                                            }


                                                                                                                                                                                                                }
                                                                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiiiiii,jjjjjjjjjjjjjj));
                                                                                                                                                                                                            }


                                                                                                                                                                                                }
                                                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiiiii,jjjjjjjjjjjjj));
                                                                                                                                                                                            }


                                                                                                                                                                                }
                                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiiii,jjjjjjjjjjjj));
                                                                                                                                                                            }


                                                                                                                                                                }
                                                                                                                                                                //xxx.push_back(my(iiiiiiiiiii,jjjjjjjjjjj));
                                                                                                                                                            }


                                                                                                                                                }
                                                                                                                                                //xxx.push_back(my(iiiiiiiiii,jjjjjjjjjj));
                                                                                                                                            }


                                                                                                                                }
                                                                                                                                //xxx.push_back(my(iiiiiiiii,jjjjjjjjj));
                                                                                                                            }


                                                                                                                }
                                                                                                                //xxx.push_back(my(iiiiiiii,jjjjjjjj));
                                                                                                            }


                                                                                                }
                                                                                                //xxx.push_back(my(iiiiiii,jjjjjjj));
                                                                                            }


                                                                                }
                                                                                //xxx.push_back(my(iiiiii,jjjjjj));
                                                                            }


                                                                }
                                                                //xxx.push_back(my(iiiii,jjjjj));
                                                            }


                                                }
                                                //xxx.push_back(my(iiii,jjjj));
                                            }


                                }
                                //xxx.push_back(my(iii,jjj));//Kovrix(a,iii,jjj,N,M);
                            }


                }

            }

    }

    for(auto T:xxx) {
        Kovrix(a,T._i,T._j,N,M);
    }
}


int main() {
    int N,M,z=0; char tmp;
    std::cin>>N>>M;
    std::vector<std::vector<char>> a;
    for(int j=0; j<N; j++) {
        std::vector<char> line;
        for(int i=0; i<M; i++) {
            std::cin>>tmp;
            line.push_back(tmp);
        }
        a.push_back(line);
    }
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(a[i][j]=='+') {
                Kovrix(a,i,j,N,M);
                z++;
            }
    std::cout<<z;


}