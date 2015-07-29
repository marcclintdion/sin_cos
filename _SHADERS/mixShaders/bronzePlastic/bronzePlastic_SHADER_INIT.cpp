    bronzePlastic_SHADER = glCreateProgram();                                                                                     
        //----------------------------------------------------                                                                  
    const GLchar *vertexSource_bronzePlastic =                                                                                    

    " #define highp                                                                                                                 \n" 
    
    //--------------------------------------------     
    "    attribute       vec4   position;                                                                                           \n" 
    "    attribute       vec3   normal;                                                                                             \n" 
    "    attribute       vec2   uv0;                                                                                                \n" 
    //--------------------------------------------   
    "    uniform         mat4   shadowTexMatrix;                                                                                    \n"           
    "    uniform         mat4   modelRotationINVmatrix;                                                                             \n"    
    "    uniform         mat4   projectionMatrix;                                                                                   \n"     
    "    uniform         mat4   modelViewMatrix;                                                                                    \n"     

    //--------------------------------------------                                        
 
    //======================================
    "    varying  highp  vec2   uv0_PASS;                                                                                           \n" 
    //======================================   

    
    //===============================================================================================
    
    " void main()                                                                                                                   \n" 
    " {                                                                                                                             \n" 
    
          //-------------------------------------------------------------------------------
    "     uv0_PASS                =  uv0;                                                                                           \n" 

          //-------------------------------------------------------------------------------
    "     gl_Position             =  projectionMatrix * position;                                                                   \n" 
    
    " } \n";   
    
    //===================================================================================================================================                 

    const GLchar *fragmentSource_bronzePlastic =                                                                                  

    "#ifdef GL_ES                                                                                                                   \n" 
    "#else                                                                                                                          \n" 
    "#define highp                                                                                                                  \n" 
    "#endif                                                                                                                         \n" 
    
    
    
    "    uniform  sampler2D     ColorMAP;                                                                                           \n"

    //======================================
    "    varying  highp  vec2   uv0_PASS;                                                                                           \n" 
    //======================================

    "             highp  vec4   texColor;                                                                                           \n" 

    //======================================  
    
        
    //=======================================================================================================================                      
  
    "void main()                                                                                                                    \n" 
    "{                                                                                                                              \n" 


   "    texColor                =  texture2D(ColorMAP,      uv0_PASS.xy);                                                          \n"

   "    gl_FragColor             =  texColor;                                                                                                                       \n"


    "}\n";

    
        
        
        
    //=======================================================================================================================                   

        bronzePlastic_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( bronzePlastic_SHADER_VERTEX, 1, &vertexSource_bronzePlastic, NULL );                                        
        glCompileShader( bronzePlastic_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        bronzePlastic_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( bronzePlastic_SHADER_FRAGMENT, 1, &fragmentSource_bronzePlastic, NULL );                                    
        glCompileShader(bronzePlastic_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( bronzePlastic_SHADER, bronzePlastic_SHADER_VERTEX );                                                        
        glAttachShader( bronzePlastic_SHADER, bronzePlastic_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(bronzePlastic_SHADER,   0, "position");                                                              
        glBindAttribLocation(bronzePlastic_SHADER,   1, "normal");                                                            
        glBindAttribLocation(bronzePlastic_SHADER,   2, "uv0");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( bronzePlastic_SHADER_VERTEX);                                                                             
        glDeleteShader( bronzePlastic_SHADER_FRAGMENT);                                                                           
        glLinkProgram(bronzePlastic_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    
        UNIFORM_SHADOW_TEX_MATRIX_bronzePlastic                         = glGetUniformLocation(bronzePlastic_SHADER, "shadowTexMatrix");  
        UNIFORM_MODEL_ROTATIONinv_MATRIX_bronzePlastic                  = glGetUniformLocation(bronzePlastic_SHADER, "modelRotationINVmatrix"); 
        UNIFORM_PROJECTION_MATRIX_bronzePlastic                         = glGetUniformLocation(bronzePlastic_SHADER, "projectionMatrix");          
        UNIFORM_MODELVIEW_MATRIX_bronzePlastic                          = glGetUniformLocation(bronzePlastic_SHADER, "modelViewMatrix");                  
  
        UNIFORM_TEXTURE_COLOR_bronzePlastic                             = glGetUniformLocation(bronzePlastic_SHADER, "ColorMAP");  














