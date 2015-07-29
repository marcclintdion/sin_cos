

#include "KEYBOARD/OS_DEFINES.cpp"

bool toggleTest = 0;
//==========================================================================================
//==========================================================================================
//==========================================================================================


#if defined(__APPLE__) && defined(__MACH__)
	/* Apple OSX and iOS (Darwin). ------------------------------ */
#include <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR == 1
    /* xCode Simulator */

#elif TARGET_OS_IPHONE == 1
	/* iOS on iPhone, iPad, etc. */

#elif TARGET_OS_MAC == 1
    #include <OpenGL/OpenGL.h>
    #include <OpenGL/gl.h>
    #include <stdio.h>

        #define   glGenerateMipmap          glGenerateMipmapEXT         //_CREATE SYNONYMS_SO_THAT_ONLY_ONE_CODE_PATHWAY_IS_NEEDED_FOR_ALL_PLATFORMS.
        #define   glGenFramebuffers         glGenFramebuffersEXT
        #define   glBindFramebuffer         glBindFramebufferEXT        //_WEAK_DRIVERS_TEND_TO_FAIL_WHEN_PASSED_NEWER_EXTENSIONS_EVEN_IF_THE_FEATURE_IS_WELL_SUPPORTED_BY_THE_HARDWARE
        #define   glDeleteFramebuffers      glDeleteFramebuffersEXT
        #define   glFramebufferTexture2D    glFramebufferTexture2DEXT   //_A_WELL-WRITTEN_DRIVER_SHOULD_BE_ABLE_TO_MAP_THIS_OVER_TO_THE_OPTIMAL_PATH

#endif
#endif


#ifdef WIN32
    #include "include/gl.h"
    #include "include/glext.h"
    #include "include/glext_Init_A.cpp"
        #define   glGenerateMipmap          glGenerateMipmapEXT         //_CREATE SYNONYMS_SO_THAT_ONLY_ONE_CODE_PATHWAY_IS_NEEDED_FOR_ALL_PLATFORMS.
        #define   glGenFramebuffers         glGenFramebuffersEXT
        #define   glBindFramebuffer         glBindFramebufferEXT        //_WEAK_DRIVERS_TEND_TO_FAIL_WHEN_PASSED_NEWER_EXTENSIONS_EVEN_IF_THE_FEATURE_IS_WELL_SUPPORTED_BY_THE_HARDWARE
        #define   glDeleteFramebuffers      glDeleteFramebuffersEXT
        #define   glFramebufferTexture2D    glFramebufferTexture2DEXT   //_A_WELL-WRITTEN_DRIVER_SHOULD_BE_ABLE_TO_MAP_THIS_OVER_TO_THE_UPDATED_PATH

#endif


GLuint GP_GPU_TEXTURE_0 = 0;
GLuint GP_GPU_FBO_0    = 0;


//#include "headerFiles/glext.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <string.h>

        //=========================================================
        void ConfigureAndLoadTexture(GLubyte *textureData, GLint texWidth, GLint texHeight );

        #include "headerFiles/FreeImage.h"




//libFreeImage files are installed to /opt/local/lib


#define var GLfloat
#define COUNT_OF(x) ((sizeof(x)/sizeof(0[x])) / ((size_t)(!(sizeof(x) % sizeof(0[x])))))//to_use-> COUNT_OF( floorTile_2m_INDICES)
#define BUFFER_OFFSET(i) ((char *)0 + (i))
//=======================================================================================================================


        //uint  screenWidth;
        //uint  screenHeight;
        int  viewWidth  = 1280;
        int  viewHeight = 720;

        int mousePos[] =  {0, 0};

        GLfloat  Pass_MIDDLE_Mouse[2];       //AT_SHUTDOWN_THESE_VALUES_ARE_BEING_PRINTED_THE_FILE->loadMouseSettings.cpp
        GLfloat  Pass_MIDDLE_CONTROL_Mouse;  //                                   
        GLfloat  Pass_MIDDLE_SHIFT_Mouse[2]; //AT_RUNTIME_THESE_ARE_BEING_LOADED_INTO->WGL_ARB_multiSample.h     


#ifdef WIN32
 
         
         
       
        #define   WIN32_LEAN_AND_MEAN
        #include <windows.h>
        #include <process.h>

        #include <iostream.h>
        #include <fstream.h>
        #include <vector>
        //using namespace std; //___used for string object

        //-----------------------------------------------------------------------------

        //=====================================
        void InitGL(void);
        void RenderGL(void);//int width, int height
        //void KillALData(void);
        void ProcessKeyboard(void);
        void shutDownGL(void); 
        bool CreateDummyGLWindow();       
      
   
        //-------------------------------
        bool keys[256], keypressed[256];
        bool mkeyIsReset = true;
        
        //#include "cpp/winInit.cpp"THESE_2_ARE_FILE_FINDER_NOTES_SO_THAT_MUCH_OLDER_MODULES_CAN_BE_FOUND_AND_MERGED_WITHOUT_FORMAT_CHANGE_CONFUSION
        //#include "cpp/configureWindow.cpp"
        bool                g_isFullScreen;
        #include "cpp/WGL_ARB_multisample.h"
        //-------------------------------

        #include "headerFiles/VSync.h"
        
        #include <windows.h>
       


#endif



#include <sys/stat.h>
#include <unistd.h>


unsigned char *readShaderFile( const char *fileName )
{
    
    char * dir = getcwd(NULL, 0); // Platform-dependent, see reference link below    
    printf("Current dir: %s", dir);
    
    
    FILE *file = fopen( fileName, "r" );


        struct stat fileStats;

        stat( fileName, &fileStats );


        //unsigned char *buffer = new unsigned char[fileStats.st_size];
    
        unsigned char *buffer = (unsigned char*)malloc(sizeof(unsigned char) * fileStats.st_size);


        int bytes = fread( buffer, 1, fileStats.st_size, file );

        buffer[bytes] = 0;

        fclose( file );
        
        //free(buffer);
        
        return buffer;

}




/*
#include "headerFiles/fstream.h"
using namespace std;

string readShaderFile(string FileName)
{
string ShaderString = "";
ifstream shaderFile;
shaderFile.open(FileName);
    while(!shaderFile.eof())
    {
        string tempholder;
        getline(shaderFile, tempholder);      
        ShaderString.append(tempholder);
        ShaderString.append("\n");
    }
shaderFile.close();

return ShaderString;
*/




    //Replace new Byte[COMPRESSION_BLOCK] with (Byte*)malloc(sizeof(Byte) * COMPRESSION_BLOCK)

    //Replace delete[] decompressedBytes with free(decompressedBytes)







GLfloat adjust_w = 1.0;

#include <math.h>
  
//=======================================================================================================================

#include "MATRIX_MATH.cpp"

//=======================================================================================================================



//--------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------
        extern GLuint msaaFramebuffer;
        extern GLuint viewRenderbuffer;

        bool iOS_MSAA_IS_ON = true;

      
        #ifdef __APPLE__
               GLuint  viewFramebuffer;
        #endif
          
        //-------------------------------------------------------------------------------


        GLuint m_uiShadowMapTexture;
        GLuint m_uiFrameBufferObject;





var     shadowTextureMatrix[16];
var     moveSetMatrix[16];
var     modelWorldMatrix[16];
var     modelRotationMatrix[16];

var     moveSet_x_modelWorldMatrix[16];//THIS_IS_INTERMEDIATE_STEP_USED_TO_REMOVE_MULTIPLICATION_FROM_2_CHAINS_OF_VERTEX_SHADER_MULTIPLIES
var     modelRotationINVmatrix[16];
var     projectionMatrix[16];
var     viewMatrix[16];
var     viewRotateMatrix[16];
var     modelViewMatrix[16];




var     shadowBiasMatrix[] = {0.5, 0.0, 0.0, 0.0, 
                              0.0, 0.5, 0.0, 0.0, 
                              0.0, 0.0, 0.5, 0.0, 
                              0.5, 0.5, 0.5, 1.0};

var     shadowProjectionMatrix[16];
var     shadowViewMatrix[16];
var     shadowModelWorld[16];


var     invertViewMatrix[16];

var     tempMatrix_A[16];    
var     tempMatrix_B[16]; 
var     tempMatrix_C[16]; 
var     tempMatrix_D[16]; 
var     tempMatrix_E[16]; 
//============================================================================================================================
var     moveShadowPivot_Z = 0.0;
//============================================================================================================================

GLuint MAX_THREADS  = 0;

GLuint textureMapID = 0;


void locator_GLOBALS(void)
{
    GLuint globalLocator = 0;
}

#include "GLOBALS.cpp"


float deltaMoveSet           = 0.3;
  

//=======================================================================================================================
void ConfigureAndLoadTexture(GLubyte *textureData, GLint texWidth, GLint texHeight )
{
#if defined(__APPLE__) && defined(__MACH__)
	/* Apple OSX and iOS (Darwin). ------------------------------ */
#include <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR == 1
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        //---------------
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, 4.0);
        //---------------
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texWidth, texHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, textureData);
        glGenerateMipmap(GL_TEXTURE_2D);

#elif TARGET_OS_IPHONE == 1
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        //---------------
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, 4.0);
        //---------------
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texWidth, texHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, textureData);
        glGenerateMipmap(GL_TEXTURE_2D);

#elif TARGET_OS_MAC == 1
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        //----------------
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, 4.0);
        //----------------
        glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texWidth, texHeight, 0, GL_BGRA, GL_UNSIGNED_BYTE, textureData);

#endif
#endif

//==========
#ifdef WIN32
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        //----------------
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, 4.0);
        //----------------
        glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP_SGIS, GL_TRUE );
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texWidth, texHeight, 0, GL_BGRA, GL_UNSIGNED_BYTE, textureData);
#endif
    
    
}
//===============================================================================================================================
#include "cpp/FreeImage.cpp"
//=======================================================================================================================
//============================================================================================================================
void setupTransforms_MainColor(void)
{
        
        LoadIdentity(viewMatrix);
        Translate(viewMatrix,             eyePosition[0], 
                                          eyePosition[1], 
                                          eyePosition[2]);

        
        LoadIdentity(viewRotateMatrix);
        //-----------------------------   
        Rotate(viewRotateMatrix, 1.0, 0.0, 0.0, rotateModelWithMiddleMouse[0] -60.0);//-60.0 - 00.0
        Rotate(viewRotateMatrix, 0.0, 0.0, 1.0, -rotateModelWithMiddleMouse[1]);        

}

//============================================================================================================================
void setupTransforms_Shadows(void)
{

        LoadIdentity(shadowViewMatrix);
        //-------------------------------------------------
/*       Translate(shadowViewMatrix,       eyePosition_SHADOW[0],
                                          eyePosition_SHADOW[1],
                                          eyePosition_SHADOW[2]);
*/      
LookAt(shadowViewMatrix, eyePosition_SHADOW[0], eyePosition_SHADOW[1], eyePosition_SHADOW[2] ,  0, 0, 0, 0.0f, 1.0f, 0.0f);

}

void ColorRenderMatrixFunctions(void)
{

    MultiplyMatrix(modelViewMatrix, viewMatrix, modelWorldMatrix);
    //------------------------------------------------------------    
    LoadIdentity(tempMatrix_A);    
    MultiplyMatrix(tempMatrix_A, viewMatrix, viewRotateMatrix);    
    //---------------------------------------------------------------------    
    MultiplyMatrix(moveSet_x_modelWorldMatrix, moveSetMatrix, modelWorldMatrix);    
    //---------------------------------------------------------------------    
    LoadIdentity(tempMatrix_B);     
    MultiplyMatrix(tempMatrix_B,  shadowTextureMatrix, moveSet_x_modelWorldMatrix);     
    //---------------------------------------------------------------------    
    LoadIdentity(tempMatrix_C);     
    MultiplyMatrix(tempMatrix_C,  projectionMatrix, tempMatrix_A);       
    //---------------------------------------------------------------------    
    LoadIdentity(tempMatrix_D);     
    MultiplyMatrix(tempMatrix_D,  tempMatrix_C, moveSet_x_modelWorldMatrix);     
    
    //----------------------------------------------------------------------------------------------------------    
    LoadIdentity(shadowTextureMatrix);
    MultiplyMatrix(shadowTextureMatrix, shadowBiasMatrix, shadowProjectionMatrix);    
    MultiplyMatrix(shadowTextureMatrix, shadowTextureMatrix, shadowViewMatrix);    //_MULTIPLY THESE TO A TEMP MATRIX TO AVOID ROUND OFF ERRORS   //USES MORE CODE WITH INCREASED PRECISION 
    //----------------------------------------------------------------------------------------------------------
   
    LoadIdentity(tempMatrix_E);
    MultiplyMatrix(tempMatrix_E, viewRotateMatrix, modelRotationMatrix);
    //----------------------------------------------------------------------------------------------------------
    LoadIdentity(modelRotationINVmatrix);
    InvertMatrix(modelRotationINVmatrix, tempMatrix_E);
     //----------------------------------------------------------------------------------------------------------     
}





//=======================================================================================================================
//-----------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------
//=======================================================================================================================

GLuint     stone_Fresnel_TEX;  //_HAD_TO_MAKE_THIS_GLOBAL_FOR_NOW_SO_SHADER_SELECTOR_FUNCTION_CAN_SEE_IT

var shaderNumber = 0;

void SelectShader(var shaderNumber)
{
        
    
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==   1)
    {
        #include "_SHADERS/copyFBO/copyFBO_SHADER_RENDER.cpp"
    }    
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==   2)//gaussianBlur_9x_Horizontal
    {
        //#include "_SHADERS/gaussianBlur_9x/gaussianBlur_9x_Horizontal_SHADER_RENDER.cpp"
    }
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==   3)//gaussianBlur_9x_Vertical
    {
        //#include "_SHADERS/gaussianBlur_9x/gaussianBlur_9x_Vertical_SHADER_RENDER.cpp"
    }
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==   4)
    {
        
    }    
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==   5)
    {
        //#include "_SHADERS/softDiffuse_SHADER/softDiffuse_SHADER_RENDER.cpp"
    }    
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==   6)
    {
        #include "_SHADERS/PowerVR_blur/PowerVR_blur_SHADER_RENDER.cpp"
    }    
    //--------------------------------------------------------------------------------------
    
    
    
    //==================================================================================================          
    if(shaderNumber ==   10)
    {
        #include "_SHADERS/finalComposite/finalComposite_SHADER_RENDER.cpp"
    }         
    //--------------------------------------------------------------------------------------  


    if(shaderNumber ==  11)
    {
        #include "_SHADERS/SHADOWS/shadows_32bit_Stride_SHADER_RENDER.cpp"
    }  
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==  13)
    {
        #include "_SHADERS/mixShaders/bronzePlastic/bronzePlastic_SHADER_RENDER.cpp"
    }
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==  14)
    {
        #include "_SHADERS/mixShaders/stoneBronze/stoneBronze_SHADER_RENDER.cpp"
    }
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==  15)
    {
        #include "_SHADERS/baseColor/baseColor_SHADER_RENDER.cpp"
    }
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==  16)
    {
        #include "_SHADERS/baseColor_x4tex/baseColor_x4tex_SHADER_RENDER.cpp"
    }
    //--------------------------------------------------------------------------------------
    if(shaderNumber ==  17)
    {
        #include "_SHADERS/copperCorrode/copperCorrode_DIFFUSE_SHADER_RENDER.cpp"
    }
    //--------------------------------------------------------------------------------------




}

//=======================================================================================================================
//-----------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------
//=======================================================================================================================




void InitGL( void )//__BEGIN_INIT__@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
{
        
        #include "tier2_GLOBALS.cpp"
        
        //==========================================================================
        #ifdef WIN32
            #include "cpp/setPixelFormat.cpp"
            #include "include/glext_Init_B.cpp"
            //alutInit(NULL, 0);
            //-------------------------------------
            SetVSyncState(true);
            //-----------------------------------------------------------------------------
                        rotateModelWithMiddleMouse[0] = Pass_MIDDLE_Mouse[0];
                        rotateModelWithMiddleMouse[1] = Pass_MIDDLE_Mouse[1];
                        //-----------------------------------------------------------------
                        zoomModelWithMiddleMouse      = Pass_MIDDLE_CONTROL_Mouse;
                        //-----------------------------------------------------------------     
                        moveModelWithMiddleMouse[0]   = Pass_MIDDLE_SHIFT_Mouse[0];
                        moveModelWithMiddleMouse[1]   = Pass_MIDDLE_SHIFT_Mouse[1];
                        //-----------------------------------------------------------------       
       
        //=================
        #endif
                   
                   
time(&gameTimerInit);                
                   
//start = getMilliCount();
                
//################################################################################################################################
/*
        #ifdef __APPLE__
        
                if(sound_API_selector == 0)
                {
                        #include "AUDIO/openAL_iOS/openAL_iOS_Init.cpp"
                }        
                if(sound_API_selector == 1)
                {        
                        //#include "AUDIO/fMod_iOS/fMod_iOS_Init.cpp" //_____found_in_EAGLView
                }
        
        #endif
        //=========================================================
        #ifdef WIN32
                
                if(sound_API_selector == 0)
                {
                        #include "AUDIO/openAL_WIN/openAL_WIN_Init.cpp"
                }
                
                if(sound_API_selector == 1)
                {    
                        #include "AUDIO/fMod_WIN/fMod_WIN_Init.cpp"
                }
        
        #endif
*/



//========================================================================

                screenRatio                = (GLfloat)viewWidth / (GLfloat)viewHeight;

//--------------
#if defined (__APPLE__) && TARGET_OS_IPHONE == 1
                screenRatio                = (GLfloat)viewHeight/(GLfloat)viewWidth; //___WIDESCREEN(LANDSCAPE)  //__look for perspective adjustment at start of render block
#endif
//========================================================================    
 
//NSLog(@"screenRatio: %f", (GLfloat)screenRatio);
/*
//=====================================================================================================
//-----------------------------------------------------------------------------------------------------
//_____________________________________________________________________________________________________
//GLfloat adjustToResolution = (GLfloat)viewWidth/(GLfloat)viewHeight;
//===================================================================
#ifdef WIN32
        //display_00_SCALE[0] = 1.0/(GLfloat)viewWidth * (GLfloat)viewWidth * adjustToResolution*4.52/10;   
        display_00_SCALE[1] = display_00_SCALE[0]; 
        
        //------------------------------------------------------------------------------------------------
        scaleScreenAlignedQuadRatio   = (GLfloat)viewWidth / (GLfloat)viewHeight;
        //-----------------------------------------------------------------------
        inverseScreenRatio            = 1.0 / (GLfloat)viewWidth * (GLfloat)viewHeight; 
        display_00_MOVE[0]           += inverseScreenRatio * display_00_SCALE[0] * 0.5; 
        display_00_MOVE[1]           -=  display_00_SCALE[1] * 0.5;
        //------------------------------------------------------------------------------------------------
        GLfloat skipTouchIncrement = display_00_SCALE[1] / scaleScreenAlignedQuadRatio;
        display_00_MOVE[0] += skipTouchIncrement;
#endif       
//========================= 
#if defined (__APPLE__) && TARGET_OS_IPHONE == 1
        display_00_SCALE[0] = 1.0/(GLfloat)viewWidth * (GLfloat)viewWidth * adjustToResolution*4.52/10*4.0;   
        display_00_SCALE[1] = display_00_SCALE[0]; 
        
        //-----------------------------------------------------------------------
        scaleScreenAlignedQuadRatio   =  (GLfloat)viewWidth / (GLfloat)viewHeight;
        //-----------------------------------------------------------------------
        inverseScreenRatio            = (1.0 / (GLfloat)viewHeight) * viewWidth; 
        display_00_MOVE[1]           -=  inverseScreenRatio * display_00_SCALE[0] * 0.5; 
        display_00_MOVE[0]           -=  display_00_SCALE[1] * 0.5 ;        
        //------------------------------------------------------------------------------------------------
        GLfloat skipTouchIncrement = display_00_SCALE[1] * scaleScreenAlignedQuadRatio;
        display_00_MOVE[1] -= skipTouchIncrement;
#endif        
//_____________________________________________________________________________________________________   
//-----------------------------------------------------------------------------------------------------   
//=====================================================================================================   
*/

//======================================================================================================================
//======================================================================================================================
#if defined(__APPLE__) && defined(__MACH__)
	/* Apple OSX and iOS (Darwin). ------------------------------ */
#include <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR == 1
        glGenTextures(1, &m_uiShadowMapTexture);
	    //------------
        glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, 2000, 
                                                           1000, 
                                                           0, GL_DEPTH_COMPONENT, GL_UNSIGNED_INT, 0);
        
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        //------------------------------------------------------------------
	    glGenFramebuffers(1, &m_uiFrameBufferObject);
	    glBindFramebuffer(GL_FRAMEBUFFER, m_uiFrameBufferObject);
        //---------------------
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, m_uiShadowMapTexture, 0);     
        glBindFramebuffer(GL_FRAMEBUFFER, 0);

#elif TARGET_OS_IPHONE == 1
        glGenTextures(1, &m_uiShadowMapTexture);
	    //------------
        glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, 2000, 
                                                           1000, 
                                                           0, GL_DEPTH_COMPONENT, GL_UNSIGNED_INT, 0);
        
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        //------------------------------------------------------------------
	    glGenFramebuffers(1, &m_uiFrameBufferObject);
	    glBindFramebuffer(GL_FRAMEBUFFER, m_uiFrameBufferObject);
        //---------------------
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, m_uiShadowMapTexture, 0);     
        glBindFramebuffer(GL_FRAMEBUFFER, 0);

#elif TARGET_OS_MAC == 1
       glGenTextures(1, &m_uiShadowMapTexture);
	    //------------
        glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, (GLsizei)viewWidth  * resize_SHADOW_FBO, 
                                                           (GLsizei)viewHeight * resize_SHADOW_FBO, 
                                                            0, GL_DEPTH_COMPONENT,  GL_UNSIGNED_INT,  NULL);
        
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);        
        //------------------------------------------------------------------
	    glGenFramebuffers(1, &m_uiFrameBufferObject);
	    glBindFramebuffer(GL_FRAMEBUFFER, m_uiFrameBufferObject);
        //---------------------
        glDrawBuffer(GL_NONE);//_ON_SOME_MACHINES_THIS_IS_REQUIRED / ON_SOME_IT_FAILS
        glReadBuffer(GL_NONE);//_SAME_AS_ABOVE
	    //---------------------
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, m_uiShadowMapTexture, 0);     
        glBindFramebuffer(GL_FRAMEBUFFER, 0);

#endif
#endif
//===================== NSLog(@"viewWidth: %f", (GLfloat)viewWidth);   

 
 
 
 
 
 #ifdef WIN32        
        glGenTextures(1, &m_uiShadowMapTexture);
	    //------------
        glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, (GLsizei)viewWidth  * resize_SHADOW_FBO, 
                                                           (GLsizei)viewHeight * resize_SHADOW_FBO, 
                                                            0, GL_DEPTH_COMPONENT,  GL_UNSIGNED_INT,  NULL);
        
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);        
        //------------------------------------------------------------------
	    glGenFramebuffers(1, &m_uiFrameBufferObject);
	    glBindFramebuffer(GL_FRAMEBUFFER, m_uiFrameBufferObject);
        //---------------------
        glDrawBuffer(GL_NONE);//_ON_SOME_MACHINES_THIS_IS_REQUIRED / ON_SOME_IT_FAILS(ALTHOUGH__NOW_THAT_I_THINK_OF_IT...THIS_PROBLEM_SEEMS_TO_HAVE_MOSTLY_GONE_AWAY
        glReadBuffer(GL_NONE);//_SAME_AS_ABOVE--------------------------------------------------------------------------------------------------------------> SHOULD_DO_SOME_RESEARCH_HERE :)
	    //---------------------
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, m_uiShadowMapTexture, 0);     
        glBindFramebuffer(GL_FRAMEBUFFER, 0);        
#endif
//======================================================================================================================
//======================================================================================================================

    
    
    //------------------------------------------------------------------------------------------------------------------------------
    glGenTextures(1, &GP_GPU_TEXTURE_0);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 1024, 1024, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glBindTexture(GL_TEXTURE_2D, 0);
    //------------------------------
    glGenFramebuffers(1, &GP_GPU_FBO_0);
    glBindFramebuffer(GL_FRAMEBUFFER, GP_GPU_FBO_0);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, GP_GPU_TEXTURE_0, 0);



GLuint initializeLocator = 0;
//=======================
#include "INITIALIZE.cpp" //NOW USING FBO TO DISPLAY SCENE
//=======================



//==============================================================================
    #ifdef WIN32   
        //atexit(KillALData);//_tell_openAL_to_run_KillALData_function_at_shutdown 
#endif    
        
    glEnable(GL_DEPTH_TEST);
    //glDepthFunc(GL_LEQUAL);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    //glAlphaFunc(GL_GREATER, 0.1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
        
//====================================================================================================================================

}//__END_INIT__@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@




//-----------------------------------------------------------------------------------------------------------------------
//=======================================================================================================================

int runonce = 1;

void RenderGL(void)
{


/*

#ifdef __APPLE__

NSLog(@"eyePosition[0]: %f",   eyePosition[0]);
NSLog(@"eyePosition[1]: %f",   eyePosition[1]);
NSLog(@"eyePosition[2]: %f",   eyePosition[2]);


NSLog(@"robotStatue_POSITION[0] = %f", robotStatue_POSITION[0]);
NSLog(@"robotStatue_POSITION[1] = %f", robotStatue_POSITION[1]);
NSLog(@"robotStatue_POSITION[2] = %f", robotStatue_POSITION[2]);
//-----
NSLog(@"displayAngle = %f", displayAngle);


//========================================================================================
NSLog(@"copperCorrode_DIFFUSE_LIGHT0_POS[0] = %f", copperCorrode_DIFFUSE_LIGHT0_POS[0]);
NSLog(@"copperCorrode_DIFFUSE_LIGHT0_POS[1] = %f", copperCorrode_DIFFUSE_LIGHT0_POS[1]);
NSLog(@"copperCorrode_DIFFUSE_LIGHT0_POS[2] = %f", copperCorrode_DIFFUSE_LIGHT0_POS[2]);
//NSLog(@"copperCorrode_DIFFUSE_LIGHT0_POS[3] = %f", copperCorrode_DIFFUSE_LIGHT0_POS[3]);
//-------
NSLog(@"generic_Vec4_00[0] = %f", generic_Vec4_00[0]);
NSLog(@"generic_Vec4_00[1] = %f", generic_Vec4_00[1]);
NSLog(@"generic_Vec4_00[2] = %f", generic_Vec4_00[2]);
NSLog(@"generic_Vec4_00[3] = %f", generic_Vec4_00[3]);
//========================================================================================

#endif


*/


//NSLog(@"mousePos[0]: %i",   mousePos[0]);
//NSLog(@"mousePos[1]: %i",   mousePos[1]);


//t1.start();
//============
countFrames ++;
//============

if(runonce == 1)
{

    #pragma omp parallel
    //NSLog(@"Hello, world");

runonce = 0;
}
//=======================================================================================================================

      
                        //=================================================================
                        #if defined (__APPLE__) && TARGET_OS_IPHONE == 1
                        //--------------         
                                //eyePosition[0] -= PassTouchMovement[0];
                                //eyePosition[1] -= PassTouchMovement[1];
                                //eyePosition[2] -= PassTouchMovement[2];                   
                        
                                //PassTouchMovement[0] = 0.0;
                                //PassTouchMovement[1] = 0.0;
                                //PassTouchMovement[2] = 0.0;
                        
                        //--------------                        
                        #endif 
                        //=================================================================
                                      
                        //=================================================================        
                       // #ifdef WIN32
                        //------------
                                rotateModelWithMiddleMouse[0] = Pass_MIDDLE_Mouse[0];
                                rotateModelWithMiddleMouse[1] = Pass_MIDDLE_Mouse[1];
                                //-------------------------------------------------------
                                zoomModelWithMiddleMouse = Pass_MIDDLE_CONTROL_Mouse;
                                //-------------------------------------------------------
                                moveModelWithMiddleMouse[0] = Pass_MIDDLE_SHIFT_Mouse[0];
                                moveModelWithMiddleMouse[1] = Pass_MIDDLE_SHIFT_Mouse[1];
                        //------------ 
                        //#endif
                        //=================================================================  
    
    



//============================================================================================================================       
//turnTable += 0.1;

        
      
LoadIdentity(moveSetMatrix);
//Translate(moveSetMatrix, moveSet[0], moveSet[1],moveSet[2]);




//====================================================================================================================================
///////////////________FRAMEBUFFER_SHADOWS_BEGINS_HERE______________FRAMEBUFFER_SHADOWS_BEGINS_HERE___________________________________
///////////////________FRAMEBUFFER_SHADOWS_BEGINS_HERE______________FRAMEBUFFER_SHADOWS_BEGINS_HERE___________________________________
//====================================================================================================================================
        glEnable(GL_DEPTH_TEST);
        glDepthMask(1);
        glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE); 
        glDepthFunc(GL_LESS);
        glBindFramebuffer(GL_FRAMEBUFFER, m_uiFrameBufferObject);   

        #include "runDepth.cpp"
        
        glBindFramebuffer(GL_FRAMEBUFFER, 0);
	    //glDepthMask(0);
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE); 
        //glDepthFunc(GL_EQUAL);    
//====================================================================================================================================
///////////////________FRAMEBUFFER_SHADOWS_BEGINS_HERE______________FRAMEBUFFER_SHADOWS_BEGINS_HERE___________________________________
///////////////________FRAMEBUFFER_SHADOWS_BEGINS_HERE______________FRAMEBUFFER_SHADOWS_BEGINS_HERE___________________________________
//====================================================================================================================================
  
//=============================================================================================================== 
//=============================================================================================================== 
/*
    glBindFramebuffer(GL_FRAMEBUFFER, softDiffuse_FBO);//softDiffuse_FBO_TEXTURE
    //==========================================
            shaderNumber = 5;  
    #include "softDiffuse.cpp" 
    //==========================================
    glBindFramebuffer(GL_FRAMEBUFFER, 0);  
*/  

//==============================================================================================================================================
//==============================================================================================================================================
//========================================================###########---------------###########=================================================
//========================================================###########__MAIN_RENDER__###########=================================================
//========================================================###########---------------###########=================================================
//==============================================================================================================================================
//==============================================================================================================================================


    //==========================================
    //glBindFramebuffer(GL_FRAMEBUFFER, drawMainColor_PRIMARY_FBO);//drawMainColor_PRIMARY_FBO_COLOR_TEXTURE, drawMainColor_PRIMARY_FBO_RAW_DEPTH_TEXTURE

GLuint RenderLocator = 0;
    #include "drawMainColor.cpp"

    //glBindFramebuffer(GL_FRAMEBUFFER, 0);
    //==========================================

//==============================================================================================================================================
//==============================================================================================================================================
//========================================================###########---------------###########=================================================
//========================================================###########__MAIN_RENDER__###########=================================================
//========================================================###########---------------###########=================================================
//==============================================================================================================================================
//==============================================================================================================================================










/*
//=============================================================================================================== 
//=============================================================================================================== 
    glBindFramebuffer(GL_FRAMEBUFFER, hardEdgeShadow_TEXTURE); //hardEdgeShadow_TEXTURE
    //----------------------------------------------------------------
        glActiveTexture (GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, drawMainColor_PRIMARY_FBO_COLOR_TEXTURE);
        shaderNumber = 1;        
        //---------------  
        #include "_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_RENDER.cpp"
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
//=============================================================================================================== 
*/



       #include "_SHADERS/PowerVR_blur/PowerVR_blur_RENDER.cpp"




//=================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================
#if defined (__APPLE__) && TARGET_OS_IPHONE == 1
                  if(iOS_MSAA_IS_ON)
                  {
                      glBindFramebuffer(GL_FRAMEBUFFER, msaaFramebuffer);     
                  }else 
                  {
                      glBindFramebuffer(GL_FRAMEBUFFER, viewRenderbuffer);  
                  }
#endif //=================================================================


/*
    //==================================__FINAL_COMPOSITE__===============================
    glActiveTexture (GL_TEXTURE2);
    glBindTexture(GL_TEXTURE_2D, drawMainColor_PRIMARY_FBO_RAW_DEPTH_TEXTURE);
    //----------------------------
    glActiveTexture (GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture);
    //----------------------------    
    glActiveTexture (GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, drawMainColor_PRIMARY_FBO_COLOR_TEXTURE);//generic_01_TEXTURE
    //---------------------------------------------------------------------
    shaderNumber = 10;
    #include "_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_RENDER.cpp"
    //==================================__FINAL_COMPOSITE__===============================
*/

/*
    
    glBindFramebuffer(GL_FRAMEBUFFER, drawMainColor_FBO);
    const GLenum discards[]  = {GL_COLOR_ATTACHMENT0,GL_DEPTH_ATTACHMENT};
    glDiscardFramebufferEXT(GL_FRAMEBUFFER,2,discards);
   
    glBindFramebuffer(GL_FRAMEBUFFER, shadow_01_blur_HorizontalPass_fboId);
    const GLenum discards2[]  = {GL_COLOR_ATTACHMENT0};
    glDiscardFramebufferEXT(GL_FRAMEBUFFER,1,discards2);
    
    glBindFramebuffer(GL_FRAMEBUFFER, shadow_01_blur_VerticalPass_fboId);
    const GLenum discards3[]  = {GL_COLOR_ATTACHMENT0};
    glDiscardFramebufferEXT(GL_FRAMEBUFFER,1,discards3);
*/
//=================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================


         //t1.stop();
        //readTime = t1.getElapsedTimeInMilliSec();
        
        
time(&gameTimerEnd);

//milliSecondsElapsed = getMilliSpan(start);

#if defined (__APPLE__) && TARGET_OS_IPHONE == 1
//NSLog(@"milliSecondsElapsed: %i", (int)milliSecondsElapsed);
#endif
   
}//_END_RenderGL()//#####################################################################################################


//=======================================================================================================================
//-----------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------
//=======================================================================================================================



//==================================
#ifdef __APPLE__
    #include <TargetConditionals.h>
#endif
//==================================
#if TARGET_IPHONE_SIMULATOR == 1
    //PROCESS_TOUCH

//-------------------------
#elif TARGET_OS_IPHONE == 1
	//PROCESS_TOUCH

//-------------------------
#elif TARGET_OS_MAC == 1 || WIN32 == 1

void ProcessKeyboard(void)
{


    //=====================================================================
    if (KEY_R)
    {
             #include "_SHADERS/copperCorrode/copperCorrode_DIFFUSE_SHADER_INIT.cpp"      
        
    }  

    if(KEY_D)
    {
        eyePosition[0] += 0.051;
    }
    if(KEY_A)
    {
        eyePosition[0] -= 0.051;
    }
    if(KEY_W)
    {
        eyePosition[1] += 0.051;
    }
    if(KEY_S)
    {
        eyePosition[1] -= 0.051;
    }
    if(KEY_Q)
    {
        eyePosition[2] += 0.051;
    }
    if(KEY_E)
    {
        eyePosition[2] -= 0.051;
    }

    if(KEY_T)
    {
        displayAngle -= 0.551;
    }
    if(KEY_Y)
    {
        displayAngle += 0.551;
    }




    if(KEY_J)
    {
        copperCorrode_DIFFUSE_LIGHT0_POS[0] -= 0.01;
    }
    if(KEY_L)
    {
        copperCorrode_DIFFUSE_LIGHT0_POS[0] += 0.01;
    }
    if(KEY_K)
    {
        copperCorrode_DIFFUSE_LIGHT0_POS[1] -= 0.01;
    }
    if(KEY_I)
    {
        copperCorrode_DIFFUSE_LIGHT0_POS[1] += 0.01;
    }
    if(KEY_U)
    {
        copperCorrode_DIFFUSE_LIGHT0_POS[2] -= 0.01;
    }
    if(KEY_O)
    {
        copperCorrode_DIFFUSE_LIGHT0_POS[2] += 0.01;
    }
    
  
  
    if(KEY_Z)
    {
        generic_Vec4_00[0] -= 0.3012;
    }
    if(KEY_X)
    {
        generic_Vec4_00[0] += 0.3012;
    }
    if(KEY_C)
    {
        generic_Vec4_00[1] -= 0.002;
    }
    if(KEY_V)
    {
        generic_Vec4_00[1] += 0.002;
    }
    if(KEY_B)
    {
        generic_Vec4_00[2] -= 0.002;
    }
    if(KEY_N)
    {
        generic_Vec4_00[2] += 0.002;
    }  
    if(KEY_M)
    {
        generic_Vec4_00[3] -= 0.0011;
    }
    if(KEY_COMMA)
    {
        generic_Vec4_00[3] += 0.0011;
    }      
    
    

 

    
    
    
    
    
   
}//_END_ProcessKeyboard()

#endif









void shutDownGL( void )
{

//=======================================================================================================================
//=======================================================================================================================
        #include "SHUTDOWN.cpp"
        
                                                               
}


//=======================================================================================================================
//-----------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------
//=======================================================================================================================

/*
#ifdef WIN32
void KillALData()
{
	alDeleteBuffers(1, &Buffer_dungeonWAV);
	alDeleteSources(1, &Source_dungeonWAV);
    alutExit();
}
#endif
*/
