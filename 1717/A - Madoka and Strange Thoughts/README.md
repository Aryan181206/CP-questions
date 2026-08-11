<h2><a href="https://codeforces.com/contest/1717/problem/A" target="_blank" rel="noopener noreferrer">1717A — Madoka and Strange Thoughts</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1717A](https://codeforces.com/contest/1717/problem/A) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Madoka and Strange Thoughts</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Madoka is a very strange girl, and therefore she suddenly wondered how many pairs of integers $$$(a, b)$$$ exist, where $$$1 \leq a, b \leq n$$$, for which $$$\frac{\operatorname{lcm}(a, b)}{\operatorname{gcd}(a, b)} \leq 3$$$.</p><p>In this problem, $$$\operatorname{gcd}(a, b)$$$ denotes <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor ">the greatest common divisor</a> of the numbers $$$a$$$ and $$$b$$$, and $$$\operatorname{lcm}(a, b)$$$ denotes <a href="https://en.wikipedia.org/wiki/Least_common_multiple ">the smallest common multiple</a> of the numbers $$$a$$$ and $$$b$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Description of the test cases follows.</p><p>The first and the only line of each test case contains the integer $$$n$$$ ($$$1 \le n \le 10^8$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output a single integer — the number of pairs of integers satisfying the condition.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007280214225548461" id="id004186151062460438" class="input-output-copier">Copy</div></div><pre id="id007280214225548461"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-even test-example-line-6">100000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0004345353839733612" id="id006542482593555622" class="input-output-copier">Copy</div></div><pre id="id0004345353839733612">1
4
7
10
11
266666666
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For $$$n = 1$$$ there is exactly one pair of numbers — $$$(1, 1)$$$ and it fits.</p><p>For $$$n = 2$$$, there are only $$$4$$$ pairs — $$$(1, 1)$$$, $$$(1, 2)$$$, $$$(2, 1)$$$, $$$(2, 2)$$$ and they all fit.</p><p>For $$$n = 3$$$, all $$$9$$$ pair are suitable, except $$$(2, 3)$$$ and $$$(3, 2)$$$, since their $$$\operatorname{lcm}$$$ is $$$6$$$, and $$$\operatorname{gcd}$$$ is $$$1$$$, which doesn't fit the condition.</p></div>