import { Link } from "react-router-dom";
import "/workspaces/Personal-Repository/vite-project/src/Pages/Home/Home.css";

const Home = () => {
    return (
    <div>
        <p>
            Olá, seja bem vindo!
        </p>

        <p>
            Para registrar clique no botão abaixo.
        </p>

        <Link to = "/signup">
            <button>Clique aqui</button>
        </Link>
    </div>
    );
};

export default Home;