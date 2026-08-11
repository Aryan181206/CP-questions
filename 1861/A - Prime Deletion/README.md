<h2><a href="https://codeforces.com/contest/1861/problem/A" target="_blank" rel="noopener noreferrer">1861A — Prime Deletion</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1861A](https://codeforces.com/contest/1861/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Prime Deletion</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A <span class="tex-font-style-it">prime</span> number is a positive integer that has exactly two different positive divisors: $$$1$$$ and the integer itself. For example, $$$2$$$, $$$3$$$, $$$13$$$ and $$$101$$$ are prime numbers; $$$1$$$, $$$4$$$, $$$6$$$ and $$$42$$$ are not.</p><p>You are given a sequence of digits from $$$1$$$ to $$$9$$$, in which <span class="tex-font-style-bf">every digit from $$$1$$$ to $$$9$$$ appears exactly once</span>.</p><p>You are allowed to do the following operation <span class="tex-font-style-bf">several (maybe zero) times</span>: choose any digit from the sequence and delete it. <span class="tex-font-style-bf">However, you cannot perform this operation if the sequence consists of only two digits.</span></p><p>Your goal is to obtain a sequence which represents a prime number. Note that you cannot reorder the digits in the sequence.</p><p>Print the resulting sequence, or report that it is impossible to perform the operations so that the resulting sequence is a prime number.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 5000$$$) — the number of test cases.</p><p>Each test case consists of one line containing a string of $$$9$$$ digits (without any characters between them). Each digit from $$$1$$$ to $$$9$$$ appears in this string exactly once.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer on a separate line as follows:</p><ul> <li> if it is impossible to perform the described operations, print $$$-1$$$; </li><li> otherwise, print any sequence that represents a prime number, which can be obtained from the given string performing several (maybe zero) operations described in the statement. If there are multiple such sequences, you can print any one of them. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010250118578949308" id="id002891104574526202" class="input-output-copier">Copy</div></div><pre id="id0010250118578949308"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">123456789</div><div class="test-example-line test-example-line-even test-example-line-2">987654321</div><div class="test-example-line test-example-line-odd test-example-line-3">243567918</div><div class="test-example-line test-example-line-even test-example-line-4">576318429</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003873270451933465" id="id003954552017752936" class="input-output-copier">Copy</div></div><pre id="id003873270451933465">167
53
3571
57638429</pre></div></div></div>