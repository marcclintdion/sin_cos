ColorRenderMatrixFunctions();

 
 glUseProgram(copperCorrode_DIFFUSE_SHADER);
          //------------------------------------------------------------------------------
          glVertexAttribPointer(0,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(0));
          glEnableVertexAttribArray(0);
          glVertexAttribPointer(1,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(12));
          glEnableVertexAttribArray(1);
          glVertexAttribPointer(2,     2, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(24));
          glEnableVertexAttribArray(2);
          //------------------------------------------------------------------------------------------------
          glUniformMatrix4fv(UNIFORM_SHADOW_TEX_MATRIX_copperCorrode_DIFFUSE,                1, 0,    tempMatrix_B);           
          glUniformMatrix4fv(UNIFORM_MODEL_ROTATIONinv_MATRIX_copperCorrode_DIFFUSE,         1, 0,    modelRotationINVmatrix);          
          glUniformMatrix4fv(UNIFORM_PROJECTION_MATRIX_copperCorrode_DIFFUSE,                1, 0,    tempMatrix_D);
          glUniformMatrix4fv(UNIFORM_MODELVIEW_MATRIX_copperCorrode_DIFFUSE,                 1, 0,    modelViewMatrix);
      
          //---------------
        
          //---------------

          //------------------------------------------------------------------------------------------------
        glUniform4f(UNIFORM_generic_Vec4_00_copperCorrode_DIFFUSE,               generic_Vec4_00[0],
                                                                    generic_Vec4_00[1],
                                                                    generic_Vec4_00[2],
                                                                    generic_Vec4_00[3]);

        //------------------------------------------
          glUniform4f(UNIFORM_LIGHT0_POS_copperCorrode_DIFFUSE,                     copperCorrode_DIFFUSE_LIGHT0_POS[0],
                                                                       copperCorrode_DIFFUSE_LIGHT0_POS[1],
                                                                       copperCorrode_DIFFUSE_LIGHT0_POS[2],
                                                                       copperCorrode_DIFFUSE_LIGHT0_POS[3]);
                                                                       
          glUniform4f(UNIFORM_LIGHT1_POS_copperCorrode_DIFFUSE,                     copperCorrode_DIFFUSE_LIGHT1_POS[0],
                                                                       copperCorrode_DIFFUSE_LIGHT1_POS[1],
                                                                       copperCorrode_DIFFUSE_LIGHT1_POS[2],
                                                                       copperCorrode_DIFFUSE_LIGHT1_POS[3]);                                                                       
                                                                       
          glUniform4f(UNIFORM_LIGHT2_POS_copperCorrode_DIFFUSE,                     copperCorrode_DIFFUSE_LIGHT2_POS[0],
                                                                       copperCorrode_DIFFUSE_LIGHT2_POS[1],
                                                                       copperCorrode_DIFFUSE_LIGHT2_POS[2],
                                                                       copperCorrode_DIFFUSE_LIGHT2_POS[3]);                                                                         
                                                                       
          
          glUniform1f(UNIFORM_shadowBias_copperCorrode_DIFFUSE,                     shadowBias);          
          //---------------------------------------
          glUniform1f(UNIFORM_f_0_copperCorrode_DIFFUSE,                             f_0_copperCorrode_DIFFUSE);
          glUniform1f(UNIFORM_f_1_copperCorrode_DIFFUSE,                             f_1_copperCorrode_DIFFUSE);  
          glUniform1f(UNIFORM_f_2_copperCorrode_DIFFUSE,                             f_2_copperCorrode_DIFFUSE);                    
          glUniform1f(UNIFORM_f_3_copperCorrode_DIFFUSE,                             f_3_copperCorrode_DIFFUSE);
          glUniform1f(UNIFORM_f_4_copperCorrode_DIFFUSE,                             f_4_copperCorrode_DIFFUSE);  
          glUniform1f(UNIFORM_f_5_copperCorrode_DIFFUSE,                             f_5_copperCorrode_DIFFUSE);                    
          glUniform1f(UNIFORM_f_6_copperCorrode_DIFFUSE,                             f_6_copperCorrode_DIFFUSE);
          glUniform1f(UNIFORM_f_7_copperCorrode_DIFFUSE,                             f_7_copperCorrode_DIFFUSE);  
          glUniform1f(UNIFORM_f_8_copperCorrode_DIFFUSE,                             f_8_copperCorrode_DIFFUSE);           
          glUniform1f(UNIFORM_f_9_copperCorrode_DIFFUSE,                             f_9_copperCorrode_DIFFUSE);         
      
          //=======
          //---------------------------------------

          glUniform1i(UNIFORM_TEX_COLOR_HIGH_copperCorrode_DIFFUSE,             0);
          glUniform1i(UNIFORM_TEX_DOT3_copperCorrode_DIFFUSE,                   1);
        //shadow
          glUniform1i(UNIFORM_CUBEMAP_copperCorrode_DIFFUSE,                    3);

















