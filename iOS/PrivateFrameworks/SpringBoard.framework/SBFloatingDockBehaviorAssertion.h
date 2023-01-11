//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSDate, NSString, SBFloatingDockController;

@interface SBFloatingDockBehaviorAssertion : NSObject <BSDescriptionProviding>
{
    _Bool _animated;
    _Bool _gesturePossible;
    unsigned long long _level;
    double _progress;
    NSString *_reason;
    NSDate *_timestamp;
    SBFloatingDockController *_floatingDockController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak SBFloatingDockController *floatingDockController; // @synthesize floatingDockController=_floatingDockController;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool gesturePossible; // @synthesize gesturePossible=_gesturePossible;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isPinned) _Bool pinned;
- (void)modifyProgress:(double)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFloatingDockController:(id)arg1 visibleProgress:(double)arg2 animated:(_Bool)arg3 gesturePossible:(_Bool)arg4 atLevel:(unsigned long long)arg5 reason:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (id)initWithVisibleProgress:(double)arg1 gesturePossible:(_Bool)arg2 atLevel:(unsigned long long)arg3 reason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)initWithPinned:(_Bool)arg1 gesturePossible:(_Bool)arg2 atLevel:(unsigned long long)arg3 reason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
