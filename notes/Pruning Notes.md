# Pruning Notes

## Wie Pruning bei XGBoost funktioniert

During the tree building process, XGBoost automatically stops if there is a node without enough cover (the sum of the Hessians of all the data falling into that node) or if it reaches the maximum depth.

After the trees are built, XGBoost does an optional 'pruning' step that, starting from the bottom (where the leaves are) and working its way up to the root node, looks to see if the gain falls below gamma (a tuning parameter—see below). If the first node encountered has a gain value lower than gamma, then the node is pruned and the pruner moves up the tree to the next node. If, however, the node has gain higher than gamma, the node is left and the pruner does not check the parent nodes.

Now that we have the basics, let's look at the ways a model builder can control overfitting in XGBoost.

## Wie man Pruning steuert

Pruning kann über folgende **Paramenter** gesteuert werden

1. **gamma (min_split_loss)**
2. **min_child_weight**
    a. Bei Regression: Minimale Anzahl an Datenpunkten/Instanzen/Reihen, die der Knoten sehen muss
    b. Bei Klassifizierung: Benötigte Summe aus p*(1-p) mit p als Wahrscheinlichkeit, dass die Daten in diesem Knoten gesplitted werden\
    Mit p[0;1] gilt, dass p*(1-p) [0;0,25], was dazu führt, dass mindestens die **vierfache** Menge an Instanzen benötigt wird, die von dem Knoten gesehen werden, um diesen Knoten zu behalten
3. **max_depth**\
Kein Pruning, sondern eine Begrenzung, wie tief der Baum wachsen kann
