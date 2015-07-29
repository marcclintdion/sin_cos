//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
unsigned char *vertexSource_copperCorrode_DIFFUSE;                                                                                  
unsigned char *fragmentSource_copperCorrode_DIFFUSE;   
//=========================================================
var         generic_Vec4_00[] = {512, 1.673991, 3.0, 1.32};
//=========================================================================
var         copperCorrode_DIFFUSE_LIGHT0_POS[]   = { 0.1,  -1.0, 0.8, 1.0};
//=
var         copperCorrode_DIFFUSE_LIGHT1_POS[]   = { 0.0, 0.05, 1.0, 1.0};
var         copperCorrode_DIFFUSE_LIGHT2_POS[]   = {-9.0, 5.9, 11.15, 1.0};
var         copperCorrode_DIFFUSE_LIGHT3_POS[]   = { 1.0, 1.0, 1.0, 1.0};
//=========================================================================
var         f_0_copperCorrode_DIFFUSE;
var         f_1_copperCorrode_DIFFUSE;
var         f_2_copperCorrode_DIFFUSE;
var         f_3_copperCorrode_DIFFUSE;
var         f_4_copperCorrode_DIFFUSE;
var         f_5_copperCorrode_DIFFUSE;
var         f_6_copperCorrode_DIFFUSE;
var         f_7_copperCorrode_DIFFUSE;
var         f_8_copperCorrode_DIFFUSE;
var         f_9_copperCorrode_DIFFUSE;


//========

//-----------------------------------
//=====================================================================================
GLuint      copperCorrode_DIFFUSE_SHADER_VERTEX;                                                                                 
GLuint      copperCorrode_DIFFUSE_SHADER_FRAGMENT;                                                                               
GLuint      copperCorrode_DIFFUSE_SHADER;     
//-------------------------------------------------------------------------------------
GLuint      UNIFORM_generic_Vec4_00_copperCorrode_DIFFUSE;

//-------------------------------------------
GLuint      UNIFORM_LIGHT0_POS_copperCorrode_DIFFUSE;
GLuint      UNIFORM_LIGHT1_POS_copperCorrode_DIFFUSE;
GLuint      UNIFORM_LIGHT2_POS_copperCorrode_DIFFUSE;

//=====                                                                     
GLuint      UNIFORM_shadowBias_copperCorrode_DIFFUSE;
//--------------------------------------
GLuint      UNIFORM_f_0_copperCorrode_DIFFUSE;
GLuint      UNIFORM_f_1_copperCorrode_DIFFUSE;
GLuint      UNIFORM_f_2_copperCorrode_DIFFUSE;// f=float //_for generic_UI_inputs_and_shader_templates_maybe_this_will_be_useful
GLuint      UNIFORM_f_3_copperCorrode_DIFFUSE;
GLuint      UNIFORM_f_4_copperCorrode_DIFFUSE;
GLuint      UNIFORM_f_5_copperCorrode_DIFFUSE;
GLuint      UNIFORM_f_6_copperCorrode_DIFFUSE;
GLuint      UNIFORM_f_7_copperCorrode_DIFFUSE;
GLuint      UNIFORM_f_8_copperCorrode_DIFFUSE;
GLuint      UNIFORM_f_9_copperCorrode_DIFFUSE;

//-------------------------------------------------------------------------------------
GLuint      UNIFORM_SHADOW_TEX_MATRIX_copperCorrode_DIFFUSE;
GLuint      UNIFORM_MODEL_ROTATIONinv_MATRIX_copperCorrode_DIFFUSE;                 
GLuint      UNIFORM_PROJECTION_MATRIX_copperCorrode_DIFFUSE;  
GLuint      UNIFORM_MODELVIEW_MATRIX_copperCorrode_DIFFUSE; 
GLuint      UNIFORM_VIEW_MATRIX_copperCorrode_DIFFUSE; 

//-------------------------------------------------------------------------------------
GLuint      UNIFORM_TEX_COLOR_HIGH_copperCorrode_DIFFUSE;
GLuint      UNIFORM_TEX_DOT3_copperCorrode_DIFFUSE;
          //shadow
GLuint      UNIFORM_CUBEMAP_copperCorrode_DIFFUSE;
