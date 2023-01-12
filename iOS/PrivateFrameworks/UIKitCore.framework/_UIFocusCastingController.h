//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem, UIView;

__attribute__((visibility("hidden")))
@interface _UIFocusCastingController : NSObject
{
    _Bool _isRememberingEntryPoint;
    UIFocusSystem *_focusSystem;
    double _entryPointMemorizationTimeout;
    unsigned long long _entryPointAxis;
    UIView *_focusMovementIndicator;
    UIView *_focusEntryIndicator;
    UIView *_focusCastingIndicator;
    struct CGPoint _screenEntryPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *focusCastingIndicator; // @synthesize focusCastingIndicator=_focusCastingIndicator;
@property(retain, nonatomic) UIView *focusEntryIndicator; // @synthesize focusEntryIndicator=_focusEntryIndicator;
@property(retain, nonatomic) UIView *focusMovementIndicator; // @synthesize focusMovementIndicator=_focusMovementIndicator;
@property(nonatomic) _Bool isRememberingEntryPoint; // @synthesize isRememberingEntryPoint=_isRememberingEntryPoint;
@property(nonatomic) unsigned long long entryPointAxis; // @synthesize entryPointAxis=_entryPointAxis;
@property(nonatomic) struct CGPoint screenEntryPoint; // @synthesize screenEntryPoint=_screenEntryPoint;
@property(nonatomic) double entryPointMemorizationTimeout; // @synthesize entryPointMemorizationTimeout=_entryPointMemorizationTimeout;
@property(nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void)_destroyFocusMovementIndicator;
- (void)_positionFocusMovementIndicators;
- (void)_createFocusMovementIndicator;
- (void)_updateFocusMovementIndicatorDisplay;
- (void)focusEffectsController:(id)arg1 updateMovementDirection:(struct CGVector)arg2;
- (id)_focusEffectsControllerForFocusedItem;
- (struct CGPoint)_movementPointInNormalizedFrame:(struct CGRect)arg1;
- (struct CGPoint)_entryPointInNormalizedFrame:(struct CGRect)arg1 forHeading:(unsigned long long)arg2;
- (void)forgetEntryPoint;
- (void)_startRememberingEntryPoint;
- (void)_stopRememberingEntryPoint;
- (struct CGPoint)_castingPointInNormalizedFrame:(struct CGRect)arg1 forHeading:(unsigned long long)arg2;
- (unsigned long long)_axisForHeading:(unsigned long long)arg1;
- (void)_updateFocusItemFromNormalizedFrame:(struct CGRect)arg1 toNormalizedFrame:(struct CGRect)arg2 withHeading:(unsigned long long)arg3;
- (struct CGRect)_castingFrameForFocusedNormalizedFrame:(struct CGRect)arg1 heading:(unsigned long long)arg2;
- (struct CGRect)castingFrameForFocusedItem:(id)arg1 heading:(unsigned long long)arg2 inCoordinateSpace:(id)arg3;
- (void)updateFocusCastingWithContext:(id)arg1;
- (void)teardown;
- (id)init;

@end

