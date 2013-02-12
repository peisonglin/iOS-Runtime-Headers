/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CADisplayLink, CALayer, NSMutableArray, NSMutableDictionary, NSTimer, UIImage, UIImageView;

@interface UIThermalMeterView : UIView {
    CALayer *_animatingLayer;
    UIImageView *_background;
    CADisplayLink *_displayLink;
    NSTimer *_fillTimer;
    CALayer *_fullRingLayer;
    NSMutableDictionary *_micFullImageDict;
    CALayer *_micImageLayer;
    NSMutableArray *_micListeningImages;
    UIImage *_micThinkingOnImage;
    UIImageView *_overlay;
    int _phase;
    unsigned int _powerPointer;
    float _runningPowerLevels[5];
    int _state;
}

- (float)_adjustedDuration:(float)arg1;
- (double)_animationInterval;
- (id)_basicAnimationForOpacityFrom:(unsigned int)arg1 to:(unsigned int)arg2 duration:(double)arg3;
- (id)_beginningKeyFrameAnimation;
- (void)_clearDisplayLink;
- (id)_currentMicPowerImage;
- (float)_currentMicPowerLevel;
- (void)_displayLinkCallback:(id)arg1;
- (id)_emptyMicImage;
- (id)_fullMicImage;
- (void)_handleBeginning;
- (void)_handleListening;
- (void)_handleListeningBegin;
- (void)_handleListeningEnd;
- (void)_handleListeningStart;
- (void)_handleThinking;
- (void)_handleThinkingBegin;
- (void)_handleThinkingEnd;
- (void)_handleThinkingResolve;
- (id)_imageForMicFullIndex:(unsigned int)arg1;
- (BOOL)_isSuitableStoppingPhase:(int)arg1;
- (id)_keyframeAnimationForCGImages:(id)arg1 duration:(double)arg2;
- (id)_listeningBeginKeyFrameAnimation;
- (id)_listeningEndKeyFrameAnimation;
- (float)_powerLevelForMicPower:(float)arg1;
- (void)_removeAnimationsAndClearLayers;
- (void)_reset;
- (id)_thinkingBeginKeyFrameAnimation;
- (id)_thinkingEndKeyFrameAnimation;
- (id)_thinkingResolveKeyFrameAnimation;
- (id)_thinkingRingAnimation;
- (float)_updateMedianWithNewValue:(float)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setState:(int)arg1;

@end