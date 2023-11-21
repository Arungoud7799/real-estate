import express from "express";
import { mongoose } from "mongoose";
import dotenv from "dotenv";
dotenv.config();
const app = express();
const PORT = 3000;

mongoose
  .connect(process.env.MONGO_URI)
  .then(() => {
    console.log("connected to MONGODB");
  })
  .catch((err) => {
    console.log(err);
  });

app.listen(PORT, () => {
  console.log(`Server is running on port ${PORT}`);
});
