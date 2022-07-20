import java.util.ArrayList;
import java.util.Arrays;
public class BlockChainT {
    
   public static void main(String[] args) {

    ArrayList<Block> blockChain = new ArrayList<Block>();
      
       String[] initialValues= { "Ram has $1300", "Kale has $600"};
       Block firstBlock = new Block(initialValues, 0);
       blockChain.add(firstBlock);
       System.out.println("First block is " + firstBlock.toString());
       System.out.println("The block chain is " + blockChain.toString());

       String[] ramGivesItAway= { "Ram gives Sam $500", "Ram gives Taylor $200"};
       Block secondBlock = new Block(ramGivesItAway, firstBlock.getBlockHash());
       blockChain.add(secondBlock);
       System.out.println("Second block is " + secondBlock.toString());
       System.out.println("The block chain is " + blockChain.toString());

       String[] ramGetsBack= { "Ram gets $800 from Shiv", "Ram gets $900 from Kale"};
       Block thirdBlock = new Block(ramGetsBack, secondBlock.getBlockHash());
       blockChain.add(thirdBlock);
       System.out.println("Third block is " + thirdBlock.toString());
       System.out.println("The block chain is " + blockChain.toString());



       }



}