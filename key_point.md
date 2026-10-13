# 考点分析

以下为 8 个核心题型、每类精选的 Top 5 典型题目，供针对性练习。

## 双指针

**283. [移动零](https://leetcode-cn.com/problems/move-zeroes)**（简单，快慢指针填充，已完成）

**11. [盛最多水的容器](https://leetcode-cn.com/problems/container-with-most-water)**（中等，对撞双指针）

**15. [三数之和](https://leetcode-cn.com/problems/3sum)**（中等，排序 + 双指针）

**16. [最接近的三数之和](https://leetcode-cn.com/problems/3sum-closest)**（中等，双指针逼近）

**26. [删除有序数组中的重复项](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array)**（简单，快慢指针去重）

## 滑动窗口

**3. [无重复字符的最长子串](https://leetcode-cn.com/problems/longest-substring-without-repeating-characters)**（中等，变长窗口入门，已完成）

**904. [水果成篮](https://leetcode-cn.com/problems/fruit-into-baskets)**（中等，变长窗口 + 计数）

**438. [找到字符串中所有字母异位词](https://leetcode-cn.com/problems/find-all-anagrams-in-a-string)**（中等，定长窗口匹配）

**209. [长度最小的子数组](https://leetcode-cn.com/problems/minimum-size-subarray-sum)**（中等，变长窗口求最短）

**1004. [最大连续 1 的个数 III](https://leetcode-cn.com/problems/max-consecutive-ones-iii)**（中等，窗口 + 允许翻转 K 次）

## 二分法

**704. [二分查找](https://leetcode-cn.com/problems/binary-search)**（简单，标准二分模板，已完成）

**35. [搜索插入位置](https://leetcode-cn.com/problems/search-insert-position)**（简单，二分左边界）

**34. [在排序数组中查找元素的第一个和最后一个位置](https://leetcode-cn.com/problems/find-first-and-last-position-of-element-in-sorted-array)**（中等，左右边界二分）

**33. [搜索旋转排序数组](https://leetcode-cn.com/problems/search-in-rotated-sorted-array)**（中等，旋转数组二分）

**162. [寻找峰值](https://leetcode-cn.com/problems/find-peak-element)**（中等，二分逼近局部极值）

## 树（二叉树）

**94. [二叉树的中序遍历](https://leetcode-cn.com/problems/binary-tree-inorder-traversal)**（简单，迭代中序（栈），已完成）

**104. [二叉树的最大深度](https://leetcode-cn.com/problems/maximum-depth-of-binary-tree)**（简单，DFS 递归）

**226. [翻转二叉树](https://leetcode-cn.com/problems/invert-binary-tree)**（简单，递归交换子树）

**101. [对称二叉树](https://leetcode-cn.com/problems/symmetric-tree)**（简单，递归对比）

**102. [二叉树的层序遍历](https://leetcode-cn.com/problems/binary-tree-level-order-traversal)**（中等，BFS 队列层序）

## DFS/BFS

**200. [岛屿数量](https://leetcode-cn.com/problems/number-of-islands)**（中等，DFS/BFS 染色连通块，已完成）

**994. [腐烂的橘子](https://leetcode-cn.com/problems/rotting-oranges)**（中等，多源 BFS）

**79. [单词搜索](https://leetcode-cn.com/problems/word-search)**（中等，网格 DFS 回溯）

**207. [课程表](https://leetcode-cn.com/problems/course-schedule)**（中等，BFS 拓扑排序）

**130. [被围绕的区域](https://leetcode-cn.com/problems/surrounded-regions)**（中等，从边界 DFS/BFS）

## 自定义排序

**179. [最大数](https://leetcode-cn.com/problems/largest-number)**（中等，拼接字符串自定义比较，已完成）

**451. [根据字符出现频率排序](https://leetcode-cn.com/problems/sort-characters-by-frequency)**（中等，按频率自定义排序）

**937. [重新排列日志文件](https://leetcode-cn.com/problems/reorder-data-in-log-files)**（简单，多关键字自定义排序）

**56. [合并区间](https://leetcode-cn.com/problems/merge-intervals)**（中等，按左端点排序 + 扫描）

**452. [用最少数量的箭引爆气球](https://leetcode-cn.com/problems/minimum-number-of-arrows-to-burst-balloons)**（中等，按右端点排序贪心）

## 优先队列

**347. [前 K 个高频元素](https://leetcode-cn.com/problems/top-k-frequent-elements)**（中等，小顶堆维护 TopK，已完成）

**215. [数组中的第 K 个最大元素](https://leetcode-cn.com/problems/kth-largest-element-in-an-array)**（中等，堆 / 快速选择）

**973. [最接近原点的 K 个点](https://leetcode-cn.com/problems/k-closest-points-to-origin)**（中等，大顶堆维护 TopK）

**264. [丑数 II](https://leetcode-cn.com/problems/ugly-number-ii)**（中等，小顶堆生成序列）

**767. [重构字符串](https://leetcode-cn.com/problems/reorganize-string)**（中等，大顶堆贪心）

## STL 灵活运用

**20. [有效的括号](https://leetcode-cn.com/problems/valid-parentheses)**（简单，`stack` 配对，已完成）

**155. [最小栈](https://leetcode-cn.com/problems/min-stack)**（中等，辅助 `stack`）

**739. [每日温度](https://leetcode-cn.com/problems/daily-temperatures)**（中等，单调 `stack`）

**49. [字母异位词分组](https://leetcode-cn.com/problems/group-anagrams)**（中等，`unordered_map` + 排序/计数）

**146. [LRU 缓存](https://leetcode-cn.com/problems/lru-cache)**（中等，`list` + `unordered_map`（splice））
