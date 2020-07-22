//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UISpringLoadedInteractionBehavior_Private-Protocol.h>

@class CADisplayLink, NSString, _UIVelocityIntegrator;
@protocol UISpringLoadedInteractionBehaviorDelegate, UISpringLoadedInteractionContext;

__attribute__((visibility("hidden")))
@interface _UISpringLoadedHysteresisBehavior : NSObject <UISpringLoadedInteractionBehavior_Private>
{
    id <UISpringLoadedInteractionBehaviorDelegate> delegate;
    double _beginningVelocityThreshold;
    double _cancelingVelocityThreshold;
    CADisplayLink *_displayLink;
    _UIVelocityIntegrator *_velocityIntegrator;
    id <UISpringLoadedInteractionContext> _context;
}

@property(nonatomic) __weak id <UISpringLoadedInteractionContext> context; // @synthesize context=_context;
@property(retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // @synthesize velocityIntegrator=_velocityIntegrator;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double cancelingVelocityThreshold; // @synthesize cancelingVelocityThreshold=_cancelingVelocityThreshold;
@property(nonatomic) double beginningVelocityThreshold; // @synthesize beginningVelocityThreshold=_beginningVelocityThreshold;
@property(nonatomic) __weak id <UISpringLoadedInteractionBehaviorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_tick:(id)arg1;
- (void)setupDisplayLink;
- (void)interactionDidFinish:(id)arg1;
- (_Bool)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

