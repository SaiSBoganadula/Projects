db.originalCollection.aggregate([
    {
      $project: {
        category: 1,
        subcategory: 1,
        name: {
          $concat: [
            { $sample: { size: 1, input: ["John", "Jane", "Bob", "Alice"] } }, 
            " ",
            { $sample: { size: 1, input: ["Smith", "Johnson", "Williams", "Brown"] } } 
          ]
        },
        organization: {
          $concat: [
            { $sample: { size: 1, input: ["Acme", "Apex", "Global"] } },
            " ", 
            { $sample: { size: 1, input: ["Inc", "LLC", "Company"] } }
          ]  
        }
      }
    }
  ]).out('newCollection')