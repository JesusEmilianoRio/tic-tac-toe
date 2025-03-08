import { useState } from "react";
import Square from "./Square";
export const board = [
    [null, null, null],
    [null, null, null],
    [null, null, null]
];

//export const board = [
//  [1, 1, 1],
//  [1, 1, 1],
//  [1, 1, 1]
//];

export default function Board() {
    const [getPosition, setPosition] = useState('X');
    const [getPlayer, setPlayer] = useState('Player X');
    const [getBoard, setBoard] = useState();
    function handeClick(rowIndex, colIndex){
        const newBoard = [...board.map(items => [...items])];
        
        if(newBoard[rowIndex][colIndex] === null){
            newBoard[rowIndex][colIndex] = getPosition;
        }
        setBoard(newBoard);
        
    }
   
    

 
  
    return (
        <>
           
            <div className="box">
                <table>
                    <tbody >
                        {board.map((row, rowIndex) => (
                            <tr key={rowIndex}>
                                {row.map((cell, colIndex) => (
                                    <Square key={colIndex}  
                                      
                                    onSelect={() => handeClick(rowIndex, colIndex)}
                                    />
                                       
                        ))}
                            </tr>
                        ))}
                    </tbody>
                </table>
          </div>
        </>
    );
};
