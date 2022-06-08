const circle = document.querySelector('#circle')

circle.addEventListener('mouseenter', () =>
{
    if(!circle.classList.contains('hover'))
        circle.classList.add('hover');
})

circle.addEventListener('mouseleave', () =>
{
    if(circle.classList.contains('hover'))
    circle.classList.remove('hover')
})

circle.addEventListener('mouseup', () =>
{
    alert(`Clicked at ${thisclient.clientX} , ${thisclient.clientY}`);
})

let thisclient;

document.addEventListener('mousemove', logKey);

function logKey(e)
{
    thisclient = e;
    circle.style.textAlign = "center"
    circle.innerText = `Triangle\n[${e.clientX}, ${e.clientY}]`;
}