
public class LL {

    class Node {
        int val;
        Node next;

        Node(int data) {
            this.val = data;
            this.next = null;
        }
    }

    Node head = null;
    int size = 0;

    public void addFirst(int data) {
        Node newNode = new Node(data);
        size++;
        if (head == null) {
            head = newNode;
            return;
        }
        newNode.next = head;
        head = newNode;
    }

    public void addLast(int data) {
        Node newNode = new Node(data);
        Node tempHead = head;
        size++;
        if (head == null) {
            head = newNode;
            return;
        }
        while (tempHead.next != null) {
            tempHead = tempHead.next;
        }
        tempHead.next = newNode;

    }

    public void printNodes() {
        Node tempHead = head;
        System.out.print( size+" NODES . ");
        while (tempHead != null) {
            System.out.print(tempHead.val + " -> ");
            tempHead = tempHead.next;
        }
        System.out.println("NULL");
    }


    public void deleteFirstNode(){
        if(head == null){
            return;
        }
        size--;
        head = head.next;
    }

    public void deleteLastNode() {
        Node currentNode = head;
        if(head == null){
            return;
        }
        size--;

        if(currentNode.next == null){
            head = null;
            return;
        }

        while(currentNode.next.next != null){
            currentNode = currentNode.next;
        }

        currentNode.next = null;

    }

    public static void main(String args[]) {
        System.out.println("Basic linkedList");
        LL list = new LL();
        list.addFirst(11);
        list.addFirst(12);
        list.addLast(110);
        list.addLast(111);
        list.printNodes();
        System.out.println("let me delete :(");
        list.deleteLastNode();
        list.printNodes();

        System.out.println(" *** END *** ");
    }
}
