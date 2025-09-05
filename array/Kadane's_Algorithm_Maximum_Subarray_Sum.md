Got it 👍 Here’s the **modified short note** with your **exact core logic**:

---

# 📌 Kadane’s Algorithm — Quick Note

**Goal:** Find maximum sum of a contiguous subarray.

**Core Logic:**

```cpp
int maxSum = v[0];
int currentSum = v[0];

for (int i = 1; i < n; i++) {
    currentSum = max(v[i], currentSum + v[i]);
    maxSum = max(maxSum, currentSum);
}

cout << maxSum << el;
```

---

### 🔹 Step-by-step with Example

Input: `v = [-2, 1, -3, 4, -1, 2, 1, -5, 4]`

* Start: `currentSum = -2`, `maxSum = -2`
* i=1 → `currentSum = max(1, -2+1) = 1`, `maxSum = 1`
* i=2 → `currentSum = max(-3, 1-3) = -2`, `maxSum = 1`
* i=3 → `currentSum = max(4, -2+4) = 4`, `maxSum = 4`
* i=4 → `currentSum = max(-1, 4-1) = 3`, `maxSum = 4`
* i=5 → `currentSum = max(2, 3+2) = 5`, `maxSum = 5`
* i=6 → `currentSum = max(1, 5+1) = 6`, `maxSum = 6`
* i=7 → `currentSum = max(-5, 6-5) = 1`, `maxSum = 6`
* i=8 → `currentSum = max(4, 1+4) = 5`, `maxSum = 6`

✅ Final Answer: `6` (subarray `[4, -1, 2, 1]`)

---


**Complexity:**

* Time → `O(n)`
* Space → `O(1)`

**Key Points:**

* Always initialize with `v[0]` (important for all-negative arrays).
* Formula essence:

  ```
  currentSum = max(v[i], currentSum + v[i])
  maxSum = max(maxSum, currentSum)
  ```
* If empty subarray allowed → initialize `maxSum = 0`.

---

Would you like me to also compress this into a **one-page revision sheet style** (Problem + Formula + Code + Complexity) so you can keep it handy during ICPC prep?
