/*
初始时DP[1] = s[1]， 从i = 2时遍历原数列， 将每个遍历的数与DP数列的末尾进行比较， 如果大于末尾， 则把DP数列长度提1将s[i]放在DP数列的最后， 如果小于末尾那么替换掉DP数列中比s[i]大的第一个数。
结束后DP数列的长度就是LIS的长度。
从LIS的性质出发，要想得到一个更长的上升序列，该序列前面的数必须尽量的小。
*/
//无路径标记
dp[1] = s[1];
len = 1;
for(i = 1;i < 20;i++){
    if(s[i] > dp[len])
        dp[++len] = s[i];
    else *lower_bound(dp + 1, dp + len + 1, s[i]) = s[i];//二分查找比s[i]大的第一个数并替换//二分查找比s[i]大的第一个数并替换
}//len为LIS的长度





//路径标记
dp[1] = s[1];
len = 1;
pos[1] = len;
for(i = 2;i <= 20;i++){
    if(s[i] > dp[len]){
        dp[++len] = s[i];
        pos[i] = len;//记录s[i]在dp数组中出现的位置
    }
    else{
        int m = lower_bound(dp + 1, dp + len + 1, s[i]) - dp;
        dp[m] = s[i];
        pos[i] = m;
    }
}
for(i = 20;i > 0;i--){
    if(!len)
        break;
    if(pos[i] == len && maxx > a[i]){//a为原数列
        ans[len] = i;//获得正确路径
        len -= 1;
        maxx = a[i];//确保正确性，严格递增。
    }
}
