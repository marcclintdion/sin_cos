//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-



//glGetIntegerv(GL_MAX_COLOR_ATTACHMENTS,   &getOpenGL_ExtentionValues);//use to test for extention info

    //=============================================================================================================
        glGenTextures( 1, &cornerStone_FRESNEL );
        glBindTexture( GL_TEXTURE_2D, cornerStone_FRESNEL );
    loadTexture("_SHADERS/cornerStone.png");
    //-------------------------------------------------------------------------------------------

        glGenTextures( 1, &halfSky_MONO_FRESNEL );
        glBindTexture( GL_TEXTURE_2D, halfSky_MONO_FRESNEL );
    loadTexture("_SHADERS/halfSkyMONO.png");
    //-------------------------------------------------------------------------------------------
        glGenTextures( 1, &fullSky_MONO_FRESNEL );
        glBindTexture( GL_TEXTURE_2D, fullSky_MONO_FRESNEL );
    loadTexture("_SHADERS/fullSkyMONO.png");
    //-------------------------------------------------------------------------------------------



    #include "_SHADERS/cubeMaps/cubeMap_INIT.cpp"
    //====================================================================================
    // #include "_MODEL_FOLDERS_/lightSpheres/lightSpheres_Init.cpp"
    //=========================================================================        
    //#include "_SHADERS/drawMainColor_FBO/drawMainColor_FBO_INIT.cpp"
    //=========================================================================
    #include "_SHADERS/drawMainColor_PRIMARY_FBO/drawMainColor_PRIMARY_FBO_INIT.cpp"
    //=========================================================================
    //#include "_SHADERS/hardEdgeShadow_FBO/hardEdgeShadow_FBO_INIT.cpp"
    //====================================================================================    
    #include "_SHADERS/generic_FBO/generic_FBO_INIT.cpp"
    //====================================================================================    
    //#include "_SHADERS/softDiffuse_FBO/softDiffuse_FBO_INIT.cpp"
    //=========================================================================
    
    //#####################################################################################################################    
    
    
    //====================================================================================       
    #include "_SHADERS/finalComposite/finalComposite_SHADER_INIT.cpp"
    //====================================================================================
    #include "_SHADERS/SHADOWS/shadows_32bit_Stride_SHADER_INIT.cpp"    
    //====================================================================================
    //#include "_SHADERS/gaussianBlur_9x/gaussianBlur_9x_Horizontal_SHADER_INIT.cpp"                                                                   
    //#include "_SHADERS/gaussianBlur_9x/gaussianBlur_9x_Vertical_SHADER_INIT.cpp"  
    //====================================================================================
    #include "_SHADERS/copyFBO/copyFBO_SHADER_INIT.cpp"        
    //====================================================================================     
    #include "_SHADERS/PowerVR_blur/PowerVR_blur_SHADER_INIT.cpp"
    //====================================================================================    
    
//    loadTexture("_SHADERS/cornerStone.png",             stone_Fresnel_TEX);   
    #include "_SHADERS/mixShaders/bronzePlastic/bronzePlastic_SHADER_INIT.cpp"
    //====================================================================================  
    #include "_SHADERS/mixShaders/stoneBronze/stoneBronze_SHADER_INIT.cpp"
    //====================================================================================      
    #include "_SHADERS/baseColor/baseColor_SHADER_INIT.cpp"
    //====================================================================================        
    #include "_SHADERS/baseColor_x4tex/baseColor_x4tex_SHADER_INIT.cpp"
    //====================================================================================
    #include "_SHADERS/copperCorrode/copperCorrode_DIFFUSE_SHADER_INIT.cpp"
    //====================================================================================        
        
    //#####################################################################################################################
    
    
    //====================================================================================       
    #include "_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_INIT.cpp"
    //========================================================================= 
    //=========================================================================     
    //-------------------------------------------------------------------------
    //=========================================================================      

    //========================================================================= 
    #include "_MODEL_FOLDERS_/robotStatue/robotStatue_INIT.cpp"     
    //=========================================================================
    //#include "_MODEL_FOLDERS_/copperEntrance/copperEntrance_INIT.cpp"

