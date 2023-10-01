const fs = require('fs');
const { MongoClient } = require('mongodb');

async function importJSONToMongoDB() {
  try {
    // Read the JSON file
    const jsonData = fs.readFileSync('/Users/sukheshwarboganadula/Documents/Projects/zobaze/cat.json', 'utf8');
    const data = JSON.parse(jsonData);
    console.log(data);

    // Connect to MongoDB
    const client = new MongoClient('mongodb+srv://myAtlasDBUser:Sairam4132@myatlasclusteredu.bsmrwcc.mongodb.net/?retryWrites=true&w=majority');
    await client.connect();

    // Select the database and collection
    const db = client.db('zobaze');
    const collection = db.collection('cat_co_cat');

    // Insert the data into MongoDB
    const response = await collection.insertMany(data);

    console.log('Data imported successfully!', response);
    client.close();
  } catch (error) {
    console.error('Error importing data:', error);
  } finally {
    // Close the MongoDB connection
  }
}

// Call the function to start importing the JSON data
importJSONToMongoDB();
