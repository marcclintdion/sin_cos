

    copperCorrode_DIFFUSE_SHADER = glCreateProgram();                                                                                     
    //----------------------------------------------------                                                                  
    vertexSource_copperCorrode_DIFFUSE   = readShaderFile( "copperCorrode_DIFFUSE_vert.glsl" );
    fragmentSource_copperCorrode_DIFFUSE = readShaderFile( "copperCorrode_DIFFUSE_frag.glsl" );

        
        //=======================================================================================================================                   
        copperCorrode_DIFFUSE_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( copperCorrode_DIFFUSE_SHADER_VERTEX, 1, (const GLchar**)&vertexSource_copperCorrode_DIFFUSE, NULL );                                        
        glCompileShader( copperCorrode_DIFFUSE_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        copperCorrode_DIFFUSE_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( copperCorrode_DIFFUSE_SHADER_FRAGMENT, 1, (const GLchar**)&fragmentSource_copperCorrode_DIFFUSE, NULL );                                    
        glCompileShader(copperCorrode_DIFFUSE_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( copperCorrode_DIFFUSE_SHADER, copperCorrode_DIFFUSE_SHADER_VERTEX );                                                        
        glAttachShader( copperCorrode_DIFFUSE_SHADER, copperCorrode_DIFFUSE_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(copperCorrode_DIFFUSE_SHADER,   0, "position");                                                              
        glBindAttribLocation(copperCorrode_DIFFUSE_SHADER,   1, "normal");                                                            
        glBindAttribLocation(copperCorrode_DIFFUSE_SHADER,   2, "uv0");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( copperCorrode_DIFFUSE_SHADER_VERTEX);                                                                             
        glDeleteShader( copperCorrode_DIFFUSE_SHADER_FRAGMENT);                                                                           
        glLinkProgram(copperCorrode_DIFFUSE_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    
        UNIFORM_SHADOW_TEX_MATRIX_copperCorrode_DIFFUSE                         = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "shadowTexMatrix");  
        UNIFORM_MODEL_ROTATIONinv_MATRIX_copperCorrode_DIFFUSE                  = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "modelRotationINVmatrix"); 
        UNIFORM_PROJECTION_MATRIX_copperCorrode_DIFFUSE                         = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "projectionMatrix");          
        UNIFORM_MODELVIEW_MATRIX_copperCorrode_DIFFUSE                          = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "modelViewMatrix");                  
  
        //-------------------------------
        UNIFORM_generic_Vec4_00_copperCorrode_DIFFUSE                           = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "generic_Vec4_00");
        //-------------------------------      
        UNIFORM_LIGHT0_POS_copperCorrode_DIFFUSE                                = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "light0_POS");
        UNIFORM_LIGHT1_POS_copperCorrode_DIFFUSE                                = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "light1_POS");
        UNIFORM_LIGHT2_POS_copperCorrode_DIFFUSE                                = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "light2_POS");   
        //================================== 
        UNIFORM_shadowBias_copperCorrode_DIFFUSE                                = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "shadowBias");  
        //================================== 
        UNIFORM_f_0_copperCorrode_DIFFUSE                                       = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "f_0"); 
        UNIFORM_f_1_copperCorrode_DIFFUSE                                       = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "f_1"); 
        UNIFORM_f_2_copperCorrode_DIFFUSE                                       = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "f_2"); 
        UNIFORM_f_3_copperCorrode_DIFFUSE                                       = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "f_3"); 
        UNIFORM_f_4_copperCorrode_DIFFUSE                                       = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "f_4"); 
        UNIFORM_f_5_copperCorrode_DIFFUSE                                       = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "f_5"); 
        UNIFORM_f_6_copperCorrode_DIFFUSE                                       = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "f_6"); 
        UNIFORM_f_7_copperCorrode_DIFFUSE                                       = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "f_7"); 
        UNIFORM_f_8_copperCorrode_DIFFUSE                                       = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "f_8"); 
        UNIFORM_f_9_copperCorrode_DIFFUSE                                       = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "f_9"); 


                                   
        //--------------------------------
        UNIFORM_TEX_COLOR_HIGH_copperCorrode_DIFFUSE                            = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "ColorMAP_HIGH");
        UNIFORM_TEX_DOT3_copperCorrode_DIFFUSE                                  = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "NormalMAP");
      //shadow
        UNIFORM_CUBEMAP_copperCorrode_DIFFUSE                                   = glGetUniformLocation(copperCorrode_DIFFUSE_SHADER, "EnvMap");

//######################################################


//#include "settings.cpp"  This should be parsed as a text file so it won't override current settings with startup settings that are pre-compiled and in loaded here











