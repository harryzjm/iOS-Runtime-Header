//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplayObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKControl-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class CLKComplicationTemplate, NSDate, NSString, UIView;
@protocol NTKComplicationDisplay, NTKComplicationDisplayWrapperViewAnimationDelegate;

@interface NTKComplicationDisplayWrapperView : UIControl <NTKComplicationDisplayObserver, NTKControl, NTKTimeTravel>
{
    UIView *_currentComplicationView;
    UIView *_nextComplicationView;
    UIView *_deferredComplicationView;
    UIView *_clipView;
    UIView *_earlierContainerView;
    UIView *_laterContainerView;
    CLKComplicationTemplate *_template;
    NSDate *_timeTravelDate;
    _Bool _didChangeLayoutOverride;
    _Bool _isAnimating;
    _Bool _isDetachedDisplay;
    _Bool _supportsCurvedText;
    _Bool _paused;
    _Bool _editing;
    _Bool _tapEnabled;
    _Bool _dimmed;
    _Bool _hasLegacyDisplay;
    long long _family;
    NSString *_complicationSlotIdentifier;
    UIView<NTKComplicationDisplay> *_display;
    CDUnknownBlockType _displayConfigurationHandler;
    CDUnknownBlockType _touchDownHandler;
    CDUnknownBlockType _touchUpInsideHandler;
    id <NTKComplicationDisplayWrapperViewAnimationDelegate> _animationDelegate;
    CDUnknownBlockType _needsResizeHandler;
    CLKComplicationTemplate *_complicationTemplate;
    double _alphaForDimmedState;
    long long _layoutOverride;
    struct CGSize _maxSize;
}

@property(readonly, nonatomic) long long layoutOverride; // @synthesize layoutOverride=_layoutOverride;
@property(readonly, nonatomic) _Bool hasLegacyDisplay; // @synthesize hasLegacyDisplay=_hasLegacyDisplay;
@property(nonatomic) double alphaForDimmedState; // @synthesize alphaForDimmedState=_alphaForDimmedState;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(readonly, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property(copy, nonatomic) CDUnknownBlockType needsResizeHandler; // @synthesize needsResizeHandler=_needsResizeHandler;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) __weak id <NTKComplicationDisplayWrapperViewAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(copy, nonatomic) CDUnknownBlockType touchUpInsideHandler; // @synthesize touchUpInsideHandler=_touchUpInsideHandler;
@property(copy, nonatomic) CDUnknownBlockType touchDownHandler; // @synthesize touchDownHandler=_touchDownHandler;
@property(nonatomic) _Bool tapEnabled; // @synthesize tapEnabled=_tapEnabled;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(copy, nonatomic) CDUnknownBlockType displayConfigurationHandler; // @synthesize displayConfigurationHandler=_displayConfigurationHandler;
@property(readonly, nonatomic) UIView<NTKComplicationDisplay> *display; // @synthesize display=_display;
@property(nonatomic) _Bool supportsCurvedText; // @synthesize supportsCurvedText=_supportsCurvedText;
@property(retain, nonatomic) NSString *complicationSlotIdentifier; // @synthesize complicationSlotIdentifier=_complicationSlotIdentifier;
@property(readonly, nonatomic) long long family; // @synthesize family=_family;
- (void).cxx_destruct;
- (_Bool)shouldCancelTouchesInScrollview;
- (void)setHighlighted:(_Bool)arg1;
- (void)_startDefaultNewDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 forward:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_resetComplicationViews;
- (void)setComplicationView:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)_removeDisplay:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)complicationDisplayNeedsResize:(id)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (void)_setDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)_setDisplayEditing:(_Bool)arg1;
- (void)_setDisplayMaxSize:(struct CGSize)arg1;
- (void)_tryToSetDisplayHighlighted:(_Bool)arg1;
- (void)_invokeNeedsResizeHandler;
- (void)needsResize;
- (void)_invokeTouchDownHandler;
- (void)_invokeTouchUpInsideHandler;
- (_Bool)_displayIsTappable;
- (void)_setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_didSetDisplayFromDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)_prepareToSetDisplay:(id)arg1 withComplicationAnimation:(inout unsigned long long *)arg2;
- (void)_replaceDisplayWithDisplayClass:(Class)arg1 template:(id)arg2 reason:(long long)arg3 animation:(unsigned long long)arg4;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 animation:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithCustomTemplateDisplay:(id)arg1 isDetachedDisplay:(_Bool)arg2 family:(long long)arg3;
- (id)initWithLegacyDisplay:(id)arg1;
- (id)initWithLegacyDisplay:(id)arg1 layoutOverride:(long long)arg2;
- (id)initWithFamily:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

