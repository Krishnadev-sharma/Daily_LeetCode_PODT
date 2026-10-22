# Minimum Operations To Sort A Permutation

**Difficulty:** `Medium` | **Topics:** `Array` | [LeetCode Problem](https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/)

---

### Problem Description

You are given an integer array `nums` of length `n`, where `nums` is a <span data-keyword="permutation-array" class=" cursor-pointer relative text-dark-blue-s text-sm"><button type="button" aria-haspopup="dialog" aria-expanded="false" aria-controls="radix-_r_t_" data-state="closed" class="">permutation</button></span> of the integers from 0 to `n - 1`.

You may perform **only** the following operations:

	- **Reverse** the entire array.

	- **Rotate Left by One**: Move the first element to the end of the array, and rest elements to left by one position.

Return an integer denoting the **minimum** number of operations required to sort the array in **increasing** order. If it is **not possible** to sort the array using only the given operations, return -1.

 

<strong class="example">Example 1:</strong>

<div class="example-block">

**Input:** <span class="example-io">nums = [0,2,1]</span>

**Output:** <span class="example-io">2</span>

**Explanation:**

	- Rotate Left by one: `[2, 1, 0]`

	- Reverse the array: `[0, 1, 2]`

The array becomes sorted in 2 operations, which is minimal
</div>

<strong class="example">Example 2:</strong>

<div class="example-block">

**Input:** <span class="example-io">nums = [1,0,2]</span>

**Output:** <span class="example-io">2</span>

**Explanation:**

	- Reverse the array: `[2, 0, 1]`

	- Rotate Left by one: `[0, 1, 2]`

The array becomes sorted in 2 operations, which is minimal.
</div>

<strong class="example">Example 3:</strong>

<div class="example-block">

**Input:** <span class="example-io">nums = [2,0,1,3]</span>

**Output:** <span class="example-io">-1</span>

**Explanation:**

It is impossible to reach `[2, 0, 1, 3]`. Thus, the answer is -1.
</div>

 

**Constraints:**

	- `1 <= n == nums.length <= 10<sup>5</sup>`

	- `0 <= nums[i] <= n - 1`

	- `nums` is a permutation of integers from 0 to `n - 1`.

---

## 🧠 Logic & Approach Breakdown

### 💡 Approach & Intuition

**Detected Pattern:** `Optimized Single-Pass Traversal`

Processes elements sequentially in a single pass while tracking required state, avoiding redundant nested re-evaluations.

#### 🚫 Why Not Brute Force?
Nested iterations re-checking previously processed states take O(n²) time.

Single-pass execution processes each element in linear O(n) time, scaling cleanly up to large constraints.

#### ⭐️ Key Points
- **Process inputs in a single forward iteration.**
- **Maintain running state dynamically to make immediate decisions.**
- **Early exit as soon as target condition is satisfied.**

---

### 🧪 Step-by-Step Visual Dry Run

**Sample Input:** `Sample testcase`

#### Step 1:
- **State:** `Initial state`
- **Action:** Process element, update state, and check condition.

🎉 **Result:** `Target condition reached.`

---

### ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)` — Single linear pass over the input of size n.
- **Space Complexity:** `O(1)` — Requires minimal auxiliary variables.

---

### 📝 Summary
An optimal linear time approach that processes each element sequentially with minimal memory overhead.


---

*Synced automatically by [CodeCrus](https://github.com/Krishnadev_sharma)*
