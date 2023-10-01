// Additional cash options
const cashOptions = ['cash in', 'cash out'];

function createDocuments() {

  const docs = [];
  
  for(let i = 0; i < 20; i++) {

    const name = faker.name.findName();
    const date = faker.date.past();
    const amount = faker.finance.amount();
    const categoriesLength=categories.length;//gets the length
    const RandIdx=Math.floor(Math.random()*categoriesLength);//gets the index we are picking 
    //const category=categories[RandIdx];
    //const subCategory=category.subCat[Math.floor(Math.random()*category.subCat.length)];

    // Rest of data

    let category, subCategory;

    // Chance of empty category
    if(Math.random() < 0.2) {
      category = ''; 
    } else {
      // Get random category
      category = categories[Math.floor(Math.random() * categories.length)].name;
    }

    // Chance of empty sub-category
    if(Math.random() < 0.2) {
      subCategory = '';
    } else if(category) {
      // Get random sub-category if category present
      subCategory = getSubCategory(category); 
    }

    // New cash field
    const cash = cashOptions[Math.floor(Math.random() * 2)];

    docs.push({name, date, amount, category, subCategory, cash});

  }

  return docs;

}