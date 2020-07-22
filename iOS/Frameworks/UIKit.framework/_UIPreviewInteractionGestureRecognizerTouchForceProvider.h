//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/_UIPreviewInteractionTouchForceProviding-Protocol.h>

@class NSString, UITouchForceGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionGestureRecognizerTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding>
{
    _Bool _active;
    UITouchForceGestureRecognizer *_gestureRecognizer;
}

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UITouchForceGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void).cxx_destruct;
- (void)_handleGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
@property(readonly, nonatomic) double touchForce;
- (void)dealloc;
- (id)initWithView:(id)arg1 configuration:(CDUnknownBlockType)arg2;
- (id)initWithGestureRecognizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

