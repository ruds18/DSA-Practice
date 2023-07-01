# Optimal Strategy For A Game
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>A of size N</strong>. The array contains integers and is of <strong>even length</strong>. The elements of the array represent N <strong>coin </strong>of <strong>values V<sub>1</sub>, V<sub>2</sub>, ....V<sub>n</sub></strong>. You play against an opponent in an <strong>alternating </strong>way. </span></p>

<p><span style="font-size:18px">In each <strong>turn</strong>, a player selects either the <strong>first or last coin</strong> from the <strong>row</strong>, removes it from the row permanently, and <strong>receives the value</strong> of the coin.</span></p>

<p><span style="font-size:18px">You need to determine the <strong>maximum possible amount of money </strong>you can win if you <strong>go first</strong>.<br>
<strong>Note:</strong> Both the players are playing optimally.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 4
A[] = {5,3,7,10}
<strong>Output: </strong>15<strong>
Explanation: </strong>The user collects maximum
value as 15(10 + 5)</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 4
A[] = {8,15,3,7}
<strong>Output: </strong>22<strong>
Explanation: </strong>The user collects maximum
value as 22(7 + 15)</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function&nbsp;<strong>maximumAmount()</strong>&nbsp;which takes an array arr[] (represent values of N coins) and N as number of coins as a parameter and returns&nbsp;the <strong>maximum possible amount of money </strong>you can win if you <strong>go first</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(N*N)<br>
<strong>Expected Auxiliary Space</strong>: O(N*N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 &lt;= N &lt;= 10<sup>3</sup></span><br>
<span style="font-size:18px">1 &lt;= A<sub>i</sub> &lt;= 10<sup>6</sup></span></p>
</div>