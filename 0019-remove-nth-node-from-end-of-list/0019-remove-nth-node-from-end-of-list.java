/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head==null||head.next==null && n==1) return null;
        ListNode first = head;
        ListNode second = head;
        for(int i=0;i<n;i++){
            first = first.next;
        }
        if(first!=null){
        while(first.next!=null){
            first = first.next;
            second =second.next;
        }
        second.next = second.next.next;}
        else{
            return second.next;
        }
        return head;
        
    }
}