//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, _UIPointerInteractionHoverGestureRecognizer, _UIPointerInteractionPressGestureRecognizer;
@protocol _UIPointerInteractionDriverSink;

__attribute__((visibility("hidden")))
@interface _UIPointerInteractionHoverDriver : NSObject
{
    id <_UIPointerInteractionDriverSink> _sink;
    _UIPointerInteractionHoverGestureRecognizer *_hoverGestureRecognizer;
    _UIPointerInteractionPressGestureRecognizer *_pressGestureRecognizer;
    struct {
        _Bool invalid;
        _Bool receivedUpdateWhilePointerDisabled;
        _Bool observing;
    } _flags;
    UIView *_view;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)_installToView:(id)arg1;
- (void)_uninstallFromView:(id)arg1;
- (void)_pointerStateDidChange:(id)arg1;
- (long long)_currentButtonMask;
- (void)_handlePressGesture:(id)arg1;
- (void)_updateHover:(id)arg1 forced:(_Bool)arg2;
- (void)_handleHoverGesture:(id)arg1;
- (void)invalidate;
- (_Bool)isActive;
- (struct CGPoint)locationInView:(id)arg1;
- (id)initWithSink:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

