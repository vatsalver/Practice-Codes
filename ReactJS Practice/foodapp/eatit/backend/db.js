const mongoose = require('mongoose');
const mongoURL = 'mongodb+srv://eatIt:eatit12@cluster0.mwgt1rq.mongodb.net/eatitmern?retryWrites=true&w=majority'

const mongoDB = async () => {
  await mongoose.connect(mongoURL, { useNewUrlParser: true, ssl: true })
    .then(() => {
      console.log('Connected Successfully');
      const fetched_data = mongoose.connection.db.collection("food_item");
      fetched_data.find({}).toArray().then((data) => {global.food_items = data;
      console.log(global.food_items)}).catch((err) => { console.error(err); });
})
    .catch ((err) => {
  console.error(err);
});
}

module.exports = mongoDB;
