# 1015 KMP算法

## input
第一行一个整数N，表示测试数据组数。

接下来的N*2行，每两行表示一个测试数据。在每一个测试数据中，第一行为模式串，由不超过10^4个大写字母组成，第二行为原串，由不超过10^6个大写字母组成。
其中N<=20

## output
对于每一个测试数据，按照它们在输入中出现的顺序输出一行Ans，表示模式串在原串中出现的次数。

## example
input：
```
5
HA
HAHAHA
WQN
WQN
ADA
ADADADA
BABABB
BABABABABABABABABB
DAD
ADDAADAADDAAADAAD
```
output：
```
3
1
3
1
0
```