void  load_copperEntrance_FromHDtoSystemRAM(void*);                                     
void  delete_copperEntrance_FromSystemRAM(void); //The VOID pointer is a potential mistake,(it's not a thread function?)
//------------------------------------
FREE_IMAGE_FORMAT  fifmt_copperEntrance;                                                
FIBITMAP            *dib_copperEntrance;                                                
FIBITMAP           *temp_copperEntrance;                                                
BYTE             *pixels_copperEntrance;                                                  
//-------------------------------------------------------------
bool   copperEntrance_isLoadedFromDriveAndWaiting             = false;                  
bool   copperEntrance_isLoaded                                = false;                  
char  *copperEntrance_FilePath;                                                         
bool   copperEntrance_isActive                                = false;                    
//========================--------------------------========================
void  load_copperEntrance_DOT3_FromHDtoSystemRAM(void*);
void  delete_copperEntrance_DOT3_FromSystemRAM(void); //The VOID pointer is a potential mistake,(it's not a thread function?)
//------------------------------------
FREE_IMAGE_FORMAT  fifmt_copperEntrance_DOT3;                                           
FIBITMAP            *dib_copperEntrance_DOT3;                                           
FIBITMAP           *temp_copperEntrance_DOT3;                                           
BYTE             *pixels_copperEntrance_DOT3;                                             
//-------------------------------------------------------------
bool   copperEntrance_DOT3_isLoadedFromDriveAndWaiting             = false;             
bool   copperEntrance_DOT3_isLoaded                                = false;             
char  *copperEntrance_DOT3_FilePath;                                                    
bool   copperEntrance_DOT3_isActive                                = false;               
//===================================================================================================================
GLfloat copperEntrance_POSITION[]             = { -61.086781f, -39.965790f, 1.766200f, 1.0 }; 
GLfloat copperEntrance_ROTATION[]             = { 0.000000f, 0.000000f, 1.000000f, 0.000000f }; 
GLfloat copperEntrance_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//----------------------------------------------------------------- 
GLuint copperEntrance_VBO; 
GLuint copperEntrance_INDICES_VBO; 
//----------------------------------------------------------------- 
GLuint copperEntrance_NORMALMAP; 

GLuint copperEntrance_COLORMAP; 
GLuint copperEntrance_MASK0MAP; 

//----------------------------------------------------------------- 
GLfloat copperEntrance_boundingBox[6]; 

//===================================================================================================================
void load_copperEntrance_VBOs(void)  
{ 
      #include    "copperEntrance.cpp" 
      glGenBuffers(1,              &copperEntrance_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, copperEntrance_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(copperEntrance), copperEntrance, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "copperEntrance_INDICES.cpp"   
      glGenBuffers(1,              &copperEntrance_INDICES_VBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, copperEntrance_INDICES_VBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(copperEntrance_INDICES), copperEntrance_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
} 
