import express from "express";
import { mongoose } from "mongoose";
import dotenv from "dotenv";
import authRouter from "./routes/userRoute.js";
dotenv.config();
const app = express();
const PORT = 3000;
app.use(express.json()); // parse to js object

mongoose
  .connect(process.env.MONGO_URI)
  .then(() => {
    console.log("connected to MONGODB");
  })
  .catch((err) => {
    console.log(err);
  });

app.use("/api/auth", authRouter);
app.listen(PORT, () => {
  console.log(`Server is running on port ${PORT}`);
});

app.use((err, req, res, next) => {
  console.log(err);
  const statusCode = err.statusCode || 500;
  const message = err.message || "Internal Server Error";

  return res.status(statusCode).json({
    success: false,
    statusCode,
    message,
  });
});
