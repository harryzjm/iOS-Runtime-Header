//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIPreviewInteractionTouchForceProviding-Protocol.h>

@class NSString, UITouch, UIView, _UITouchesObservingGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCompatibilityTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding>
{
    UIView *_view;
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;
    UITouch *_currentTouch;
    _Bool _active;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)_handleTouchObservingGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
@property(readonly, nonatomic) double touchForce;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
