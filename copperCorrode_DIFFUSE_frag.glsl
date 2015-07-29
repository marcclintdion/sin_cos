uniform         sampler2D   NormalMAP;
uniform         sampler2D   ColorMAP_HIGH;
                          //shadow
uniform         samplerCube EnvMap;
//--------------------------------------------
uniform         float   f_0;
//--------------------------------------------
uniform         vec4    light0_POS;
uniform         vec4    light1_POS;
uniform         vec4    light2_POS;
//------------------------------------
uniform         vec4    generic_Vec4_00;
//--------------------------------------------
varying         vec2    uv0_PASS;
//======================================
varying         vec4    normal_PASS;
//======================================
varying         vec4    light0_posPASS;
varying         vec4    light1_posPASS;
varying         vec4    light2_posPASS;
//======================================
                float   nDotL0;
                float   nDotL1;
                float   nDotL2;
//--------------------------------------------
                vec4    baseColor;
                vec4    bakedNormals;
                      //shadow
                vec3    cubeMapColor;
//--------------------------------------------

//======================================
varying         vec4    Vertex;
varying         vec4    inverseEye;
varying         vec3    invertView;
//---------
                vec3    Reflect;
                vec3    RH;
                float   fresnel_R;

                float   fresnelReflectance = 0.1;

//======================================
                vec4   color_A;
                vec4   color_B;
                vec4   color_C;

//======================================
                vec4   specColor_HIGH;
//======================================

varying         vec4    VertexCubeMap;
varying         vec3    wsI;
                vec3    wsR;




//================================================================================================================

void main()
{


    nDotL0                  =   max(dot(normalize(normal_PASS.xyz), normalize(light0_POS.xyz)), 0.0);
   
    baseColor               =   texture2D(ColorMAP_HIGH,  uv0_PASS.xy);
 

    bakedNormals            =   texture2D(NormalMAP,     uv0_PASS.xy);
    bakedNormals.xyz        =   normalize(bakedNormals.xyz + (-0.5));
    bakedNormals.zy         =   bakedNormals.zy * -1.0;
    nDotL1                  =   max(dot(bakedNormals.xyz, normalize(light1_posPASS.xyz)), 0.0);//     nDotL1              =  max(dot(bakedNormals, normalize(light1_posPASS.xyz - normalize(gl_FragCoord.xyz))), 0.0);


    wsR                     =   reflect(normalize(inverseEye.xyz), normalize(bakedNormals.xyz));
    cubeMapColor            =   vec3(textureCube(EnvMap, wsR));
   
    
    vec4 diffuseColor       =   baseColor * nDotL0 * baseColor.a * 3.0;
 
 
    specColor_HIGH          =   vec4(max( pow(nDotL1, 512.0 * baseColor.a * baseColor.a) , 0.0)) * vec4(2.0, 1.755842, 1.404384, 1.0)  * pow(bakedNormals.a, 60.0) ;


    vec4 copperSpecA        =   baseColor * vec4(cubeMapColor, 1.0) - (1.0 - bakedNormals.a) * 0.1;

    vec4 copperSpecB        =   baseColor * specColor_HIGH * 3.6;
 

    gl_FragColor            =   mix(diffuseColor,  copperSpecA *1.0 * 1.673991 +  copperSpecB, pow(bakedNormals.a, 15.0)) ;

    //gl_FragColor            =   vec4(fresnel_R) ;


    

}




