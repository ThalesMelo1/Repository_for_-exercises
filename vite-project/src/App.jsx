import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import { Routes, Route } from "react-router-dom";
import './App.css'
import Home from "./Pages/Home/Home.jsx"
import SignUp from "./Pages/Signup/SignUp.jsx"

const App = () => {

    return (   
        <Routes>
            <Route path = "/" element = {<Home />}/>
            <Route path = "/signup" element = {<SignUp />}/>
        </Routes>
        
       );
    };
     

export default App;