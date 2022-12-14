# 前情提要
這邊的練習純粹是為了解題<br>
並沒有考慮到效率或是可讀性（當然我有儘量地顧及可讀性）或是程式結構<br>
以下會解說三個題目的解題方向：<br>
Compile code: `make`<br>
Run the certain exercise: `./XXXXX.out`<br>

## Ancient Cipher
*參考檔案*`ancient_cipher.c`<br>
解題思路：<br>
1. scanf輸入的cipher text及plain text
2. 對cipher及plain進行分析，我這邊是分析字母數量，以及對相對應的字母數量及字母進行排序，使用的排序法是insertion sort。
3. 排序好之後，只需要對最多數量的字母進行比對即可。
4. 比對方式：固定某一最多數量字母後，計算p&rarr;c的移動數量。然後往後面的字串進行比對。

## List of Conquests 2
*參考檔案*`ex2.c`<br>
解題思路：<br>
1. 首先處理檔案中第一個數字，將其轉換成int格式
2. 用`fscanf`來處理後續的文字格式，這邊使用fscanf(FILE \*, "%s, %\*s, %\*s", string)來執行，%\*s是忽略這個字串的意思。
3. 第三步之後還沒處理，但思路是將新的字串儲存並排列在array中，並且重複出現就++。

## Pyramid
*參考檔案*`Pyramid.c`<br>
解題思路：<br>
1. 定義初始字母`char c = 'A';`，然後隨著層數去累加。
2. 每層前面會有空格，計算方式是：總層數(rows)、當前層數(i&in;[0,rows])，當前空格會等於(rows-1-i)。
3. 列印當前字母為(c+i)
