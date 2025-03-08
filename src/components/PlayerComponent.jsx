import { useState } from "react";



export default function PlayerComponent() {
    const [getPlayer, setPlayer] = useState("");
    const [getEditable, setEditable] = useState(false);
    
    function handeClick(){
        setEditable(prev => !prev);
       
    }
    const handleChange = (event) => {
        setPlayer(event.target.value);
    };

    if(getEditable){
        return(
            <>
                <div className="player_container">
                <h1 className="player_name">{getPlayer}</h1>
                <button className="btn" onClick={handeClick}>Edit</button>
                </div>
            </>
        );
    }
    else{
        return(
            <>
            <div className="player_container">
                <input className="input_name" type="text" value={getPlayer}  onChange={handleChange}  placeholder="Ingresa tu usuario" required/>
                <button className="btn" onClick={handeClick}>Edit</button>
            </div>
            </>
        );
    };


   
}
