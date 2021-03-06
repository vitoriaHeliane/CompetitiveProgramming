#include <bits/stdc++.h>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* swapPairs(ListNode* head) {
  if (head == nullptr || head.next == nullptr) {
    return head;
  }

  ListNode* tmp = swapPairs(head->next->next);
  ListNode* aux = head->next;
  head->next = tmp;
  aux->next = head;
  return aux;
} 

int main() {



  return 0;
}