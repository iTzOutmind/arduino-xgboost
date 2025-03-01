# Model Complexity

## Determining model complexity

Typically, modelers only look at the parameters set during training. However, the structure of XGBoost models makes it difficult to really understand the results of the parameters. One way to understand the total complexity is to count the total number of internal nodes (splits). We can count up the number of splits using the XGBoost text dump:

```python
trees_strings = booster.get_dump(dump_format='text')
total_splits = 0
for tree_string in trees_strings:
    n_nodes = len(tree_string.split('\n')) - 1
    n_leaves = tree_string.count('leaf')
    total_splits += n_nodes - n_leaves
print(total_splits)
```

![Model Depth Complexity](https://ecm.capitalone.com/WCM/tech/blog-images/ai-ml/gradient_boosting_theoretical-max-number/tablet.png)
<!-- https://www.capitalone.com/tech/machine-learning/how-to-control-your-xgboost-model/ -->