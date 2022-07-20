import hashlib
class BlockChain:
    def __init__(self,previous_block_hash,transaction_list):
        self.previous_block_hash=previous_block_hash
        self.transaction_list=transaction_list

        self.block_data="-".join(transaction_list)+"-"+previous_block_hash
        self.block_hash=hashlib.sha256(self.block_data.encode()).hexdigest() 
        
transaction1="Raju send 10 Crypto to Sara"
transaction2="James send 5 Crypto to Haris"
transaction3="Cole send 2 Crypto to Raju"
transaction4="Sara send 8.5 Crypto to Haris"

initial_block=BlockChain("",[transaction1,transaction2])

print(initial_block.block_data)
print(initial_block.block_hash)

second_block=BlockChain(initial_block.block_hash,[transaction3,transaction4])

print(second_block.block_data)
print(second_block.block_hash)

third_block=BlockChain(second_block.block_hash,[transaction1,transaction3])

print(third_block.block_data)
print(third_block.block_hash)