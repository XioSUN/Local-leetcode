#include <bits/stdc++.h>
using namespace std;

/*
 * STL Playground - 快速复习常用容器与算法
 *
 * 编译: Ctrl+Shift+B (compile)
 * 编译并运行: 终端 -> 运行任务 -> compile and run
 * 调试: F5 (需安装 gdb)
 */

// 暂时不涉及
void io_speedup() {
    // IO 加速，竞赛必备
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// ─── 常见输入模式 ───────────────────────────────────
// 暂时不涉及
void input_patterns() {
    int n;
    cin >> n;

    // 逐行读取 string
    string line;
    while (getline(cin, line)) {
        // 处理 line
    }

    // 读到 EOF
    int x;
    while (cin >> x) {
        // 处理 x
    }
}

// ─── 格式化输出 ─────────────────────────────────────
void output_demo() {
    // 固定小数位
    cout << fixed << setprecision(2) << 3.14159 << '\n';

    // 补零
    cout << setfill('0') << setw(4) << 42 << '\n';  // 0042
}

// ─── vector ─────────────────────────────────────────
void vector_ops() {
    vector<int> v = {3, 1, 4, 1, 5};

    v.push_back(9);
    v.pop_back();
    v.emplace_back(2);        // 原地构造，比 push_back 高效

    sort(v.begin(), v.end());
    sort(v.rbegin(), v.rend());         // 降序
    sort(v.begin(), v.end(), greater<>());

    // 去重 (先排序)
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    [[maybe_unused]] int pos = lower_bound(v.begin(), v.end(), 3) - v.begin();  // >= 3 的位置
    [[maybe_unused]] int pos2 = upper_bound(v.begin(), v.end(), 3) - v.begin(); // > 3 的位置
    [[maybe_unused]] bool found = binary_search(v.begin(), v.end(), 3);

    // 2D vector
    int n = 3, m = 4;
    vector<vector<int>> mat(n, vector<int>(m, 0));
}

void vector_ops_xio()
{
    vector<int> v = {3,1,4,1,5};

    v.push_back(9);
    v.pop_back();

    // 使用sort排序
    sort(v.begin(), v.end());   // 默认是从小到大排序
    sort(v.rbegin(), v.rend(), greater<>());

    // 2-dim vector
    int n = 100, m = 20;   // 申明一个 100*20 初始数值为 -1 的 int 数组
    vector<vector<int>> mat(n, vector<int>(m, -1));

    // 去重
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());   //   unique 返回的是移动后的新end，搭配 erase 去重

    // 高阶基本算法
    // 二分查找：有序数组
    bool found = binary_search(v.begin(), v.end(), 2);
    int pos = lower_bound(v.begin(), v.end(), 3) - v.begin();
    int pos2 = upper_bound(v.begin(), v.end(), 3) - v.begin();
}

// ─── string ─────────────────────────────────────────
void string_ops() {
    string s = "hello world";

    (void)s.substr(0, 5);          // "hello"
    (void)s.find("world");         // 6
    (void)s.find("xyz");           // string::npos
    (void)stoi("42");              // string -> int
    (void)to_string(42);           // int -> string

    // 遍历所有子串
    reverse(s.begin(), s.end());
    sort(s.begin(), s.end());
}

void string_ops_xio() {
    string s = "hello nanbao";

    s.substr(6, 9);
    s.find("nan");         // 6
    s.find("wor");           // string::npos
    int a = stoi("42"); // 字符串转换成数字
    string str = to_string(a);  // 数字转换成字符串

    // 遍历所有子串
    reverse(s.begin(), s.end());
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
}

// ─── stack / queue / priority_queue ─────────────────
void container_adapters() {
    stack<int> stk;
    stk.push(1); (void)stk.top(); stk.pop();

    queue<int> q;
    q.push(1); (void)q.front(); (void)q.back(); q.pop();

    // 大顶堆 (默认)
    priority_queue<int> maxHeap;
    // 小顶堆
    priority_queue<int, vector<int>, greater<int>> minHeap;
    maxHeap.push(3); (void)maxHeap.top(); maxHeap.pop();
}

void container_adapters_xio() {
    // stack：依次塞入1,3，访问栈顶后删除栈顶元素
    stack<int> s;
    s.push(1);
    s.push(3);
    int a = s.top();
    s.pop();

    // queue：依次塞入1,3，访问队首和队尾后删除队首
    queue<int> q;
    q.push(1);
    q.push(3);
    int qf = q.front();
    int qb = q.back();
    q.pop();

    // 堆：默认大顶堆，依次塞入3,1,4,1,5，访问堆顶后删除；初始化小顶堆
    priority_queue<int> pq;
    pq.push(3);
    pq.push(1);
    pq.push(4);
    pq.push(1);
    pq.push(5);
    pq.top();
    pq.pop();
    pq.top();
    // output: 4

    priority_queue<int, vector<int>, greater<int>> rpq;
    rpq.push(3);
    rpq.push(1);
    rpq.push(4);
    rpq.push(1);
    rpq.push(5);
    // output: 1
}

// ─── deque ──────────────────────────────────────────
void deque_ops() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    (void)dq.front();
    (void)dq.back();
    dq.pop_front();
    dq.pop_back();
}

void deque_ops_xio() {
    // 双向队列：front依次插入3,1；back依次插入4,1；删除front和back，剩余3,4
    deque<int> dq;
    dq.push_front(3);
    dq.push_front(1);
    dq.push_back(4);
    dq.push_back(1);
    dq.pop_front();
    dq.pop_back();
}

// ─── set / multiset ─────────────────────────────────
void set_ops() {
    set<int> s = {3, 1, 4};
    s.insert(5);
    s.erase(3);
    s.count(1);               // 0 或 1
    s.lower_bound(2);         // >= 2 的迭代器
    s.upper_bound(2);         // > 2 的迭代器

    multiset<int> ms;         // 允许重复
    ms.insert(1);
    ms.insert(1);
    ms.erase(ms.find(1));     // 只删一个
}

void set_ops_xio() {
    // 集合：初始化为{3,1,4}，并插入1,5；从中查找2；查找数值的边界：3；从中删除3。
    set<int> s = {3,1,4};
    s.insert(1);
    s.insert(5);
    if (s.find(2) != s.end())
    {
        s.erase(2);
    }
    auto idx = lower_bound(s.begin(), s.end(), 3);
    auto idx1 = upper_bound(s.begin(), s.end(), 3);

    // 多元集合：初始化为{3,1,4,1,5}，依次插入9,2,6；从中查找2，并删除2。
    multiset<int> ms = {3,1,4,1,5};
    ms.insert(9);
    ms.insert(2);
    ms.insert(6);
    if (ms.count(1) != 0)
    {
        ms.erase(1);
    }
}

// ─── map ─────────────────────────────────────────────
void map_ops() {
    map<string, int> mp;
    mp["abc"] = 1;
    mp.insert({"def", 2});
    mp.count("abc");
    mp.erase("abc");

    // 遍历
    for (auto& [k, v] : mp) {
        (void)k; (void)v;
    }

    unordered_map<string, int> ump;  // O(1) 查找
}

void map_ops_xio() {
    // map：<string, int>，插入{"def", 2}，查找"abc"并删除
    map<string, int> mp;
    mp.insert({"def", 2});
    if (mp.count("def") != 0)
    {
        cout << "found 'def' with: " << mp["def"] << endl;
        mp.erase("def");
    }
    if (mp.count("adc") != 0)
    {
        cout << "found 'abc'" << endl;
    }
    mp.insert({"cde", 9});

    int s = mp.size();
    cout << "map size: " << s << endl;

    for (auto& [k,v]: mp)
    {
        cout << "key:" << k << ", value:" << v << endl;
    }

    for (auto& i: mp)
    {
        cout << "key:" << i.first << ", value:" << i.second << endl;
    }

    // unordered_map: 
    unordered_map<string, int> ump;
    ump.insert({"adc", 1});
    // ump.insert({"adc", 2});  无法修改value
    ump["adc"] = 2;
    ump.insert({"bc", 4});

    if (ump.find("adc") != ump.end()) {
        cout << "found 'abc' with " << ump["adc"] << endl;  // 若key adc在使用前未被定义，将在使用中value默认初始化为0，不符合预期
    }

    if (ump.find("abc") == ump.end()) {
        cout << "DONT found 'abc'" << endl;
    }
}

// ─── pair / tuple ───────────────────────────────────
void pair_ops() {
    pair<int, int> p = {1, 2};
    (void)p.first; (void)p.second;

    vector<pair<int, int>> vp = {{1, 3}, {2, 1}};
    sort(vp.begin(), vp.end());  // 默认按 first 排序
    sort(vp.begin(), vp.end(), [](auto& a, auto& b) {
        return a.second < b.second;   // 按 second 排序
    });
}

void pair_ops_xio() {
    // pair：初始化{1,2}并访问、修改
    pair<int, int> pr = {1, 2};
    pr.first = pr.first + pr.second == 3? 3: 0;
    pr.second = pr.first + pr.second == 3? 0: 3;

    // pair排序：默认使用first，自定义使用second
    vector<pair<int, int>> vpr = {{5, 4}, {1, 2}, {2, 3}, {3, 4}};
    sort(vpr.begin(), vpr.end());
    sort(vpr.begin(), vpr.end(), [&](pair<int, int> pa, pair<int, int> pb){
        return pa.second > pb.second;
    });

    for (auto& i: vpr)
    {
        if (i.first > 2) {
            cout << "GOT YOU!" << endl;
        }
    }
}

// ─── bitset ─────────────────────────────────────────
void bitset_ops() {
    bitset<32> bs(5);          // 000...0101
    bs.count();                // 1 的个数
    bs.test(0);                // 第 0 位
    bs.set(1); bs.reset(1); bs.flip(1);
    bs.to_string(); bs.to_ulong();
}

void bitset_ops_xio() { // 依赖头文件 bitset
    // 二进制显示：十进制5转换为二进制
    // 分析1的个数
    // 设置第二位
    // 重置第二位
    // 翻转第二位
    bitset<32> bt = 5;
    cout << bt.count() << endl;
    cout << bt[1] << endl;
    bt.set(1);
    bt.reset(1);
    bt.flip(1);
    cout << bt[1] << endl;

    // 转换为字符串并打印
    // 转换为十进制并打印
    cout << bt.to_string() << endl;
    cout << bt.to_ulong() << endl;
}

// ─── <algorithm> 常用 ───────────────────────────────
void algo_ops() {
    vector<int> v = {5, 3, 1, 4, 2};

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    *min_element(v.begin(), v.end());
    *max_element(v.begin(), v.end());

    [[maybe_unused]] int sum = accumulate(v.begin(), v.end(), 0);

    count(v.begin(), v.end(), 3);
    (void)(find(v.begin(), v.end(), 3) != v.end());

    fill(v.begin(), v.end(), 0);
    swap(v[0], v[1]);

    next_permutation(v.begin(), v.end());
    // 循环生成全排列:
    // sort(v.begin(), v.end());
    // do { ... } while (next_permutation(v.begin(), v.end()));

    // 随机打乱
    mt19937 rng(42);
    shuffle(v.begin(), v.end(), rng);
}

void algo_ops_xio() {
    // 初始化vector为{5,3,1,4,2}
    // 排序并倒置=倒置并排序
    vector<int> v = {5,3,1,4,2};
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<>());
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), [](int a, int b){
        return a > b;
    });

    // 找出最小、最大的元素
    int a = *min_element(v.begin(), v.end());
    int b = *max_element(v.begin(), v.end());

    // 计算总和
    int sum = accumulate(v.begin(), v.end(), 0);

    // 数组中查找：两种方式，计数和遍历
    if (count(v.begin(), v.end(),  1) != 0)
    {
        cout << "FOUND 1 with num: " << count(v.begin(), v.end(), 1) << endl;
    }

    if (find(v.begin(), v.end(), 2) != v.end())
    {
        cout << "FOUND 2" << endl;
    }

    // 以特定value填充数组
    fill(v.begin(), v.end(), 5);

    v = {5,3,1,4,2};    // 重新初始化
    // 交换数组元素
    swap(v[1], v[2]);
    
    // 遍历的牛刀
    while(next_permutation(v.begin(), v.end())) //  排列组合遍历完赋成字典序最小排列
    {
        cout << "still HAVING permutation" << endl;
    }

    // 循环生成全排列:
    // sort(v.begin(), v.end());
    // do { ... } while (next_permutation(v.begin(), v.end()));

    // 使用shuffle进行随机打乱
    mt19937 gen(43);    // 我种下一个种子，终于长出了果实
    shuffle(v.begin(), v.end(), gen);
}

// ─── <numeric> ──────────────────────────────────────
void numeric_ops() {
    vector<int> a = {1, 2, 3}, b = {4, 5, 6};

    int a = gcd(12, 8);         // C++17
    int b = lcm(12, 8);         // 24, C++17

    // 内积
    int dot = inner_product(a.begin(), a.end(), b.begin(), 0);

    // 前缀和 (原地)
    partial_sum(a.begin(), a.end(), a.begin());
}

int main() {
    io_speedup();
    cout << "STL playground ready.\n";

    algo_ops_xio();
    return 0;
}
