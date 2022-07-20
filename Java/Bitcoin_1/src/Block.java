import java.util.Arrays;

public class Block{
    
       private String[] transactions;
       private int blockHash;
       private int previousBlockHash;   
    @Override
    public String toString() {
       return "Block [transactions=" + Arrays. toString(transactions) + ", blockHash=" + blockHash + ", previousBlockHash=" + previousBlockHash + "]";
}        
    public  Block(String[] transactions, int previousBlockHash) {
      super();
      this.transactions = transactions;
      this.previousBlockHash= previousBlockHash;
      this.blockHash = Arrays.hashCode(new int[]{ Arrays.hashCode(transactions), this.previousBlockHash});
}

    public String[] getTransactions() {
      return transactions;
}
    public void setTransactions(String[] transactions) {
      this.transactions = transactions;
}
    public int getBlockHash() {
      return blockHash;
}
}