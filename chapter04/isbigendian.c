typedef struct tagRegion{
    unsigned char region1:1;
    unsigned char region2:6;
    unsigned char region3:1;
} REGION;

union {
    REGION bb;
    unsigned char aa;
} cc;

int main(int argc, char* argv[])
{
    cc.bb.region1 =1;
    printf("Hello World! %d/n",cc.aa);   //打印1表示小端，打印128表示大端。 
    return 0;
}
　　

static unsigned char isBigEndian()
{
    const unsigned short test= 0xFF00;
    return *((unsigned char *) &test);
};
