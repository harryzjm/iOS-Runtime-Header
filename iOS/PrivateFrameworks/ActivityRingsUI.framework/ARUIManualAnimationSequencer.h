//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIAnimationSequencing-Protocol.h>

@class ARUIObserverStore, NSString;

@interface ARUIManualAnimationSequencer : NSObject <ARUIAnimationSequencing>
{
    ARUIObserverStore *_observers;
    CDUnknownBlockType _completion;
    double _timeUntilCompletion;
    _Bool _animating;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)performAfter:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tick;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
