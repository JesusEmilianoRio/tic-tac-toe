import { use, useState } from "react";
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
    
    return (
        <>
           
            <div className="box">
                <table>
                    <tbody >
                        {board.map((row, rowIndex) => (
                            <tr key={rowIndex}>
                                {row.map((cell, colIndex) => (
                                    <Square key={colIndex}      
                                    value={board[rowIndex][colIndex]} 
                                    onSelect={() => handleClick(rowIndex, colIndex)}
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
