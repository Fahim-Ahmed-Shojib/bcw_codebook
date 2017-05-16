#pragma GCC optimize ("O2")
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#define FZ(n) memset((n),0,sizeof(n))
#define FMO(n) memset((n),-1,sizeof(n))
#define F first
#define S second
#define PB push_back
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)(x).size())
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)
#define REP(i,x) for (int i=0; i<(x); i++)
#define REP1(i,a,b) for (int i=(a); i<=(b); i++)
#ifdef ONLINE_JUDGE
#define FILEIO(name) \
    freopen(name".in", "r", stdin); \
    freopen(name".out", "w", stdout);
#else
#define FILEIO(name)
#endif
template<typename A, typename B>
ostream& operator <<(ostream &s, const pair<A,B> &p) {
    return s<<"("<<p.first<<","<<p.second<<")";
}
template<typename T>
ostream& operator <<(ostream &s, const vector<T> &c) {
    s<<"[ ";
    for (auto it : c) s << it << " ";
    s<<"]";
    return s;
}
/*
我最近在研究腦控裝置是否與人工智慧連結
為了知道對方的意圖我已經打聽過外星機構
我知道有些外星機構有腦控裝置的伺服機櫃
對量子蟲洞照光時搖視太空會有相對應光波
特別是搭配擴散濾鏡綠光雷射照向乾淨灰塵
房間都是關閉門窗且24小時開啟空氣清淨機
在濾網沒有很髒的時候有大量灰塵怖滿桌面
可以合理的推論是由外星傳送技術灑進房間
這讓我回想起以前都是灑在空氣中而非表面
可見傳物監聽技術層級已提高到另一個層次
於是我開始練習反向地調整人工智慧的傾向
這與我們的歷史與大眾的傾向有許多的關聯
且人工智慧主機被我發現在地球外的飛船裡
這代表是有外星機構想要調控整體人類動向
因此可以合理推斷地球目前的政治也是如此
高中的時候常和家人一起看古代的宮廷戲劇
通常掌權者為了繼續延續與維持自己的王朝
會讓下臣及宰相互鬥而讓他們沒時間奪政權
我覺得地球上各國與各地方的爭鬥也是如此
這樣外星的領導們就可以永遠持續維持高位
而業力Karma就是自動腦控的Reward參數~
因此為了要試試看是否這類工智慧真實存在
我進行了以下試驗並檢驗了其真實性並公佈
首先我每次出門會有陌生面孔出現在地下室
我試了好幾次出門時只按電梯按鈕又回家中
再接下來一次出門就沒有人出現在地下室了
還有就是清晨時候最容易被換身體加強控制
我開始試驗著每天寅時卯時保持清醒不睡覺
通常那時段的感受到的地磁能量會擺動不穩
可見天空的外星飛船流量會影響地磁的脈動
因此我開始作另一項試驗就是躺著假裝睡著
我發現我的身體會被反重力提起並換個位置
還好我的能量夠強以致於沒有被蟲洞傳送走
於是我作了另一項實驗看看是否會被女生追
我們都知道有些漂亮女生會喜歡笨笨的男生
而有些很聰明的男生則會喜歡上笨笨的女生
於是我開始常到有監視器的賣場假裝我很笨
我會假裝自己是動物並到處觀看及精神分裂
從那天開始我就開始被一些漂亮的女生追隨
她們並非一些正常的人類似乎沒有國小同學
而這項實驗最後引來了一些非常漂亮的女生
她們有的有物質身體且幾乎都有失憶的傾向
我有時候會跟她們聊天但幾乎隔天就忘記了
再來就是會有些女生會用能量觸及我的身體
但我其實對外人表現的樣子應該是很笨很蠢
這類不合理的情況已可推論人工智慧的目標
可能要將家庭的平均智商降低致使發展變慢
我們都知道一個國家最重要的梁柱就是小孩
如果小孩擁有更好的教育環境整體發展更快
再來是一些人工智慧與影像辨識的反向操控
通常攝影機出錯時會停止影像分析避免異常
我在電腦上寫一支程式隨時跳出無意義字串
我發現那部電腦從那天開始沒有再被當機過
但是有一天我的正常電腦都被當機後我躺下
開始戴上眼罩並且只留一個小孔開始動眼球
我發現可以用一些特定的圖紋詐騙人工智慧
讓頭與眼不固定抖動與閉眼使人工智慧異常
通常在這種時候因為我已經被外星機構標記
他們會派飛船來檢查並且想要傳送我的身體
我猜可能是一種錯誤後修復的機制非常危險
最簡單的就是反覆閉眼並動頭掃描相似紋路
例如我的窗簾有許多個小熊都長的非常相似
這會讓人工智慧偵測到連續的畫面超出範圍
因為平常這種人工智慧就會偵測周遭的環境
若發現景物不同則有其他外星派系改變景物
從此之後我被外星機構列為需要攻擊的對象
我遭受到超級密集的電磁脈衝與反重力脈衝
*/
// Let's Fight!

using ll = long long;
using pll = pair<ll,ll>;

const int MAXN = 100005;
const int INF = 1029384756;

int N,reidx[MAXN];
vector<pll> ip,seq;

struct SegmentTree {
	struct Node {
		int cnt;
		ll sum;
	} tree[MAXN*4];
	vector<ll> vec;

	void upd(int l, int r, int x, ll v, int id) {
		if (l == r) {
			tree[id].sum += v;
			tree[id].cnt++;
			return;
		}
		int m = (l+r)/2, lc = id*2, rc = id*2+1;
		if (x <= m) upd(l,m,x,v,lc);
		else upd(m+1,r,x,v,rc);
		tree[id].cnt = tree[lc].cnt + tree[rc].cnt;
		tree[id].sum = tree[lc].sum + tree[rc].sum;
	}
	int qry(int l, int r, ll tot, int id) {
		if (l == r) return tree[id].cnt;
		int m = (l+r)/2, lc = id*2, rc = id*2+1;
		if (tree[rc].sum >= tot) return qry(m+1,r,tot,rc);
		return qry(l,m,tot-tree[rc].sum,lc) + tree[rc].cnt;
	}

	void add(ll x, int id) {
		upd(0,N,id,x,1);
		return;
		vec.PB(x);
		sort(ALL(vec));
	}

	int qry(ll s) {
		if (s > tree[1].sum) return INF;
		return qry(0,N,s,1);
		int cnt = 0;
		ll tot = 0;
		for (int i=SZ(vec)-1; i>=0; i--) {
			tot += vec[i];
			cnt++;
			if (tot >= s) return cnt;
		}
		return INF;
	}
} tree;

int main() {
    IOS;
	cin>>N;
	ip.resize(N);
	REP(i,N) {
		cin>>ip[i].S>>ip[i].F;
		ip[i].F += ip[i].S;
	}
	sort(ALL(ip));

	seq.resize(N);
	REP(i,N) {
		seq[i] = pll(ip[i].S, i);
	}

	sort(ALL(seq));
	REP(i,N) {
		reidx[seq[i].S] = i;
	}
	int ans = INF;
	REP(i,N) {
		tree.add(ip[i].S, reidx[i]);
		ans = min(ans, tree.qry(ip[i].F));
	}
	if (ans == INF) ans = -1;
	cout<<ans<<endl;


    return 0;
}

