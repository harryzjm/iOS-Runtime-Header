//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RCPPlayer;
@protocol OS_dispatch_queue;

@interface RCPInlinePlayer : NSObject
{
    _Bool _needsInitialDelay;
    _Bool _ignoresCompletionDelay;
    RCPPlayer *_underlyingPlayer;
    NSObject<OS_dispatch_queue> *_replayQueue;
}

+ (void)setIgnoresCompletionDelay:(_Bool)arg1;
+ (void)playEventActions:(CDUnknownBlockType)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)playEventStream:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)playCommandString:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)setNeedsInitialDelay;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *replayQueue; // @synthesize replayQueue=_replayQueue;
@property(retain, nonatomic) RCPPlayer *underlyingPlayer; // @synthesize underlyingPlayer=_underlyingPlayer;
@property(nonatomic) _Bool ignoresCompletionDelay; // @synthesize ignoresCompletionDelay=_ignoresCompletionDelay;
@property(nonatomic) _Bool needsInitialDelay; // @synthesize needsInitialDelay=_needsInitialDelay;
- (void)_callBlock:(CDUnknownBlockType)arg1;
- (void)playEventStream:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)playEventActions:(CDUnknownBlockType)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)playCommandString:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tearDown;
- (void)_doInitialDelayIfNeeded;
- (void)prewarmForEventStream:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
