export default function newFontSize(e, setMeme) {
   const { value } = e.target

   setMeme(prev => ({
      ...prev,
      textFont: [`${value}px`]
   }))
}