import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Home from "/workspaces/Personal-Repository/vite-project/src/Pages/Home.jsx"
import SignUp from "/workspaces/Personal-Repository/vite-project/src/Pages/SignUp.jsx"

const Ap = () => {

    return (   
        <Routes>
            <Route path = "/" element = {<Home />}/>
            <Route path = "/signup" element = {<SignUp />}/>
        </Routes>
        
       )
    }
     


export default Ap