//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PUAnimationGroup : NSObject
{
    _Bool _paused;
    PUAnimationGroup *_superAnimationGroup;
    NSMutableArray *_subAnimationGroups;
    CDUnknownBlockType _completionHandler;
}

+ (void)popAnimationGroup:(id)arg1;
+ (void)pushAnimationGroup:(id)arg1;
+ (id)animationGroupWithAnimations:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSMutableArray *subAnimationGroups; // @synthesize subAnimationGroups=_subAnimationGroups;
@property(nonatomic) __weak PUAnimationGroup *superAnimationGroup; // @synthesize superAnimationGroup=_superAnimationGroup;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (id)description;
- (void)finishImmediately;
- (void)complete;
- (void)resumeAnimations;
- (void)pauseAnimations;
- (void)completeIfNeeded;
@property(readonly, nonatomic, getter=isReadyToComplete) _Bool readyToComplete;
- (void)addSubAnimationGroup:(id)arg1;
@property(nonatomic) double elapsedTime;
- (void)dealloc;

@end

