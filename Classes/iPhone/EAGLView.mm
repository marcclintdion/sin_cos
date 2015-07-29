/*
     File: EAGLView.m
 Abstract: The EAGLView class is a UIView subclass that renders OpenGL scene.
  Version: 1.0
*/


#import "EAGLView.h"

#import "ES2Renderer.h"

#import <UIKit/UIResponder.h>
#import <UIKit/UIEvent.h>
#import <UIKit/UIKit.h>

/*
//=======================================================
#import "fmod.hpp"
#import "fmod_errors.h"
//#include "../../AUDIO/fMod_iOS/fMod_iOS_GLOBALS.cpp"
extern bool sound_API_selector;
float *specLeft, *specRight;

int sampleSize = 64;
extern GLfloat frequency_fMod_iOS[64];
extern GLfloat directionSoundTravels;
bool runOnce = true;
//=======================================================
*/

@implementation EAGLView


@synthesize animating;


@dynamic animationFrameInterval;

// You must implement this method
+ (Class) layerClass
{
    return [CAEAGLLayer class];
}


//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

//The GL view is stored in the nib file. When it's unarchived it's sent -initWithCoder:
- (id) initWithCoder:(NSCoder*)coder
{    
    if ((self = [super initWithCoder:coder]))
	{
        // Get the layer
        CAEAGLLayer *eaglLayer = (CAEAGLLayer *)self.layer;
        
        eaglLayer.opaque = TRUE;
        eaglLayer.drawableProperties = [ NSDictionary dictionaryWithObjectsAndKeys:
                                        [NSNumber numberWithBool:FALSE], 
                                         kEAGLDrawablePropertyRetainedBacking, 
                                         kEAGLColorFormatRGBA8, 
                                         kEAGLDrawablePropertyColorFormat, 
                                         nil];
		
		
             _context  = [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2];
        
        if (!_context || ![EAGLContext setCurrentContext:_context])
        {
                [self release];
                return nil;
        }
		
        renderer = [[ES2Renderer alloc] initWithContext:_context AndDrawable:(id<EAGLDrawable>)self.layer];
		
        if (!renderer)
        {
                [self release];
                return nil;
        }
       
        self.userInteractionEnabled = YES;
        
        animating               = FALSE;
        displayLinkSupported    = FALSE;
        animationFrameInterval  = 1;
        displayLink             = nil;
        animationTimer          = nil;
        displayLinkSupported    = TRUE;
    }
        
        //if(sound_API_selector == 1)
        //{
                //#include "../../AUDIO/fMod_iOS/fMod_iOS_Init.cpp"
        //}
        
	
    return self;
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void) drawView:(id)sender
{   
        //========================================================================	
        [EAGLContext setCurrentContext:_context];
        //========================================================================
                
                //-------------------------------------------_TIMER
                double CurrentTime = CACurrentMediaTime();
                NSLog(@"CurrentTime: %f", CurrentTime);  
                //-------------------------------------------_TIMER
        
        //========================================================================
        if(toggleRender == 1)
        {
/*
                if(sound_API_selector == 1)
                {
                        //=======================================================================================
                        //#include "../../AUDIO/fMod_iOS/fMod_iOS_Render.cpp"
                        
                        bool            playing         = true;
                        result = channel->isPlaying(&playing);
                        bool isPlaying = channel->isPlaying(&playing);
                        result = system_iOS_fMod->update(); 
                        
                        if(isPlaying)
                        {
                                result = system_iOS_fMod->playSound(FMOD_CHANNEL_FREE, sound, false, &channel);
                                
                        }
                        
                        if(!isPlaying)
                        { 
                                directionSoundTravels *= -1.0;
                        }
                        
                        for(int i = 0; i < 64; i++)
                        {
                                frequency_fMod_iOS[i] = (specLeft[i] + specRight[i])/2; 
                                channel->getSpectrum(specLeft, sampleSize, 0, FMOD_DSP_FFT_WINDOW_RECT);
                                channel->getSpectrum(specRight, sampleSize, 1, FMOD_DSP_FFT_WINDOW_RECT);           
                                
                        }      
                        //=======================================================================================           
                }
*/        
                
                [renderer render];
        }
  
        
        
        //===========================================================================================================        
        
        
        
        
        
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void) layoutSubviews
{
	[renderer resizeFromLayer:(CAEAGLLayer*)self.layer];
    [self drawView:nil];
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (NSInteger) animationFrameInterval
{
	return animationFrameInterval;
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void) setAnimationFrameInterval:(NSInteger)frameInterval
{
	// Frame interval defines how many display frames must pass between each time the
	// display link fires. The display link will only fire 30 times a second when the
	// frame internal is two on a display that refreshes 60 times a second. The default
	// frame interval setting of one will fire 60 times a second when the display refreshes
	// at 60 times a second. A frame interval setting of less than one results in undefined
	// behavior.
	if (frameInterval >= 1)
	{
		animationFrameInterval = frameInterval;
		
		if (animating)
		{
			[self stopAnimation];
			[self startAnimation];
		}
	}
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void) startAnimation
{
	if (!animating)
	{
		if (displayLinkSupported)
		{
			// CADisplayLink is API new to iPhone SDK 3.1. Compiling against earlier versions will result in a warning, but can be dismissed
			// if the system version runtime check for CADisplayLink exists in -initWithCoder:. The runtime check ensures this code will
			// not be called in system versions earlier than 3.1.
			
			displayLink = [NSClassFromString(@"CADisplayLink") displayLinkWithTarget:self selector:@selector(drawView:)];
			[displayLink setFrameInterval:animationFrameInterval];
			[displayLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSDefaultRunLoopMode];
		}
		else
			animationTimer = [NSTimer scheduledTimerWithTimeInterval:(NSTimeInterval)((1.0 / 60.0) * animationFrameInterval) target:self selector:@selector(drawView:) userInfo:nil repeats:TRUE];
		
		animating = TRUE;//___!!!!!___REMOVE_TO_REMOVE_FRAMERATE_LIMITER_??????????___________!!!!!
	}
        
        
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void)stopAnimation
{
	if (animating)
	{
		if (displayLinkSupported)
		{
			[displayLink invalidate];
			displayLink = nil;
		}
		else
		{
			[animationTimer invalidate];
			animationTimer = nil;
		}
		
		animating = FALSE;
	}
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void) dealloc
{

        //delete [] specLeft;
        //delete [] specRight;
        
        [renderer release];
	
        // tear down context
	if ([EAGLContext currentContext] == _context)
        [EAGLContext setCurrentContext:nil];
	
        [_context release];
	
    [super dealloc];
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

/*
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event 
{
        //[self touchesBegan:touches withEvent:event];
        toggleRender = 0;
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event 
{
        //[UIView touchesBegan:touches withEvent:event];
        toggleRender = 1;
}
*/


@end























