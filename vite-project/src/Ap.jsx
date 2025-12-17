import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

const Texto = ({texto}) => {
    const [count, setCount] = useState(0);
    return (
        <p>
           {texto}
          <button onClick={() => setCount(count + 1)}>
            {count}
          </button>
        </p>
    )
}

const Ap = () => {

    return(   
        <div>
            Hello World

            <Texto texto = "Hello there, mate"/>
           <Texto texto = "Sorry, I can't hear ya"/>
           <Texto texto = "But that's neat"/>
       </div>)
    }
     


export default Ap