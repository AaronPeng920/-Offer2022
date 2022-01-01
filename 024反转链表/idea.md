# <center>**修改next**
## **思路**
<font color='green'>A(next:pB) -> B(next:pC) -> C(next:NULL)</font>  
<font color='red'>A(next:NULL) <- B(next:pA) <- C(next:pB)</font>

只需要从前向后遍历链表，更改每个节点的 next 即可。
## **实现**
每个节点：  
1. 记录下下一个节点指针(next);
2. 修改下一个节点指针(next)为上一个节点指针(last);
3. 记录当前指针为 last;
## **结果**
|执行用时|内存消耗|测试用例|
|:--:|:--:|:--:|
|4ms(90.34%)|8.1MB(57.29%)|28/28|