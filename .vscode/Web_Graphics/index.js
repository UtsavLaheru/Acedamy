const Background = "#101010"
const Point_Color = "Red"

console.log(game)                    //We Can Just Call The Value id Directly Without Using GetDoc or Dom in Js
game.width = 900
game.height = 900
const ctx = game.getContext("2d")
console.log(ctx)
function clear()
{
    ctx.fillStyle = Background
    ctx.fillRect(0,0,game.width,game.height)
}

function line(p1,p2){
    ctx.lineWidth = 3;
    ctx.strokeStyle = Point_Color
    ctx.beginPath();
    ctx.moveTo(p1.x,p1.y);
    ctx.lineTo(p2.x,p2.y);
    ctx.stroke();
}

function point({x, y}) {
    const s = 20;
    ctx.fillStyle = Point_Color
    ctx.fillRect(x-s/2, y-s/2, s, s) 
}

function screen(p)
{
    return {
        x: (p.x + 1)/2*game.width,
        y: (1 - (p.y + 1)/2)*game.height
    }
}

function project({x, y, z})
{
    return{
        x: x/z,
        y: y/z
    }

}

const FPS = 60;
let dz = 1;
let angle = 0;

function translate_z({x, y, z}, dz){
    return {x, y, z: z + dz};
}

//Great Expermental Ground
function rotate_xz({x, y, z}, angle){
    const c = Math.cos(angle);
    const s = Math.sin(angle);
    return {
        x: x*c-z*s,
        y,
        z: x*s+z*c
    }
}

const vs = [
    {x:  0.25, y:  0.25, z: 0.25},
    {x: -0.25, y:  0.25, z: 0.25},
    {x: -0.25, y: -0.25, z: 0.25},
    {x:  0.25, y: -0.25, z: 0.25},

    {x:  0.25, y:  0.25, z: -0.25},
    {x: -0.25, y:  0.25, z: -0.25},
    {x: -0.25, y: -0.25, z: -0.25},
    {x:  0.25, y: -0.25, z: -0.25},

    // {x:  0.5, y:  0.5, z: -0.25},
    // {x: -0.5, y:  0.5, z: -0.25},
    // {x: -0.5, y: -0.5, z: -0.25},
    // {x:  0.5, y: -0.5, z: -0.25},
    
]

const fs = [
    [0,1,2,3],
    [4,5,6,7],
    // [8,9,10,11],
    [0,4],
    [1,5],
    [2,6],
    [3,7],
    // [4,8],
    // [5,9],
    // [6,10],
    // [7,11]
]

function frame(){
    const dt = 1/FPS;                           //Created a DeltaTime
    // dz += 1*dt
    angle += Math.PI*dt;
    clear()
    //Vertex's Point
    for (const v of vs)
    {
        point(screen(project(translate_z(rotate_xz(v, angle), dz))))
    }
    for (const f of fs){
        for (let i = 0; i < f.length; ++i){
            const a = vs[f[i]];
            const b = vs[f[(i+1)%f.length]];
            // const c = vs[f[(i+2)%f.length]];
            line(screen(project(translate_z(rotate_xz(a, angle), dz))),
                 screen(project(translate_z(rotate_xz(b, angle), dz))))
                // screen(project(translate_z(rotate_xz(c, angle), dz))))
        }   
    }
    setTimeout(frame, 1000/FPS)
}

setTimeout(frame, 1000/FPS)