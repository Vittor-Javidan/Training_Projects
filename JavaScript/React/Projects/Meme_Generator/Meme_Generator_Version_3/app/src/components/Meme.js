import React from "react"

import handleTextElements from "./handlers/handleTextElements"
import handleInputElements from "./handlers/handleInputElements"
import handleFontChange from "./handlers/handleFontChange"

import addInputElements from "./scripts/addInputElements"
import getNewImage from "./scripts/getNewImage"

export default function Meme() {

   const [allMemes, setAllMemes] = React.useState([])
   const [meme, setMeme] = React.useState(() => {
      return {
         randomImage: "http://i.imgflip.com/1bij.jpg",
         textFont: `${40}px`,
         memeText: []
      }
   })
   const [inputElements, setInputElement] = React.useState([])
   const [textElements, setTextElements] = React.useState([])

   React.useEffect(() => {
      fetch("https://api.imgflip.com/get_memes")
         .then(res => res.json())
         .then(data => setAllMemes(data.data.memes))
   }, [])

   React.useEffect(() => {     
      handleTextElements(meme, setTextElements)
      handleInputElements(meme, setMeme, setInputElement)
   }, [meme])

   return (
      <main>
         <div>
            <input
               type="text"
               placeholder={`Next New Text Font: ${meme.textFont}`}
               onChange={(e)=> handleFontChange(e, setMeme)}
            />

            <div className="form">
               {inputElements}
               <button
                  className="form--button"
                  onClick={(e)=> addInputElements(e, meme, setMeme)}
               >
                  New Text
               </button>
               <button
                  className="form--button"
                  onClick={(e)=> getNewImage(e, allMemes, setMeme)}
               >
                  Get a new meme image 🖼️
               </button>
            </div>
         </div>
         <div
            className="meme"
         >
            <img src={meme.randomImage} className="meme--image" alt="" />
            {textElements}
         </div>
      </main>
   )
}