import User from "../models/userModel.js";
import { errorHandler } from "../utils/error.js";
import bcryptjs from "bcryptjs";

const signUp = async (req, res, next) => {
  const { username, email, password } = req.body;

  const emailExists = await User.findOne({ email });
  if (emailExists) return next(errorHandler(409, "Email already exists"));

  const hashedPassword = bcryptjs.hashSync(password, 10);

  const newUser = new User({ username, email, password: hashedPassword });

  try {
    await newUser.save();
    res.status(201).json(newUser); // in stringify
  } catch (err) {
    next(err);
  }
};

export { signUp };
