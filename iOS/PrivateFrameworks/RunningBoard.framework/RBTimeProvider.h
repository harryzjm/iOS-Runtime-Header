//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBTimeProviding-Protocol.h>

@class NSString;

@interface RBTimeProvider : NSObject <RBTimeProviding>
{
}

+ (id)sharedInstance;
- (double)startTimeForProcess:(id)arg1;
- (void)executeAfter:(double)arg1 onQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (double)currentTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
