
def pagerank(graph):

    n = len(graph.nodes)
    initial_val = 1.0/n
    ranks = dict(zip(graph.get_nodes(), [initial_val] * n))
    new_rank = ranks
    for node, prev_rank in ranks.items():
        rank_sum = 0.0

        for incoming_node in node.inbound:
            numerator = ranks[incoming_node]
            denominator = len(incoming_node.outbound)
            transfer_amt = numerator/denominator

            new_rank[incoming_node] = new_rank[incoming_node] - transfer_amt
            rank_sum = rank_sum + transfer_amt

        new_rank[node] = ranks[node] + rank_sum

    ranks = new_rank

    return ranks

