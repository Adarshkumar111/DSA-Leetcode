<h2><a href="https://www.geeksforgeeks.org/problems/parity-of-unsigned-integer4247/1">Parity of unsigned integer</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given an integer <strong>n</strong>, determine its <strong>parity</strong>.</span></p>
<p><span style="font-size: 14pt;">The parity of a number is based on the count of set bits (<strong>1</strong>s) in its binary representation:</span></p>
<ul>
<li><span style="font-size: 14pt;">The number has <strong>even parity</strong> if it contains an even number of set bits.</span></li>
<li><span style="font-size: 14pt;">The number has <strong>odd parity </strong>if it contains an odd number of set bits.</span></li>
</ul>
<p><span style="font-size: 14pt;">Return "<strong>even</strong>" if the number has even parity; otherwise, return "<strong>odd</strong>".</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> n<strong> = </strong>13
<strong>Output: </strong>"odd"
<strong>Explanation: </strong>(13)<sub>10</sub> = (1101)<sub>2</sub>  binary representation has three 1-bits , parity is "odd".</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n <strong>= </strong>9
<strong>Output: </strong>"even"
<strong>Explanation: </strong>(9)<sub>10</sub> = (1001)<sub>2</sub>  binary representation has two 1-bits , parity is "even".</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong></span><br><span style="font-size: 14pt;">1 ≤ n ≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Bit Magic</code>&nbsp;