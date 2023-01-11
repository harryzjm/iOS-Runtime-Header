//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideoQueue, SVVideoQueueModifying;

@protocol SVVideoQueueManager <NSObject>
- (void)removeModifier:(id <SVVideoQueueModifying>)arg1;
- (void)addModifier:(id <SVVideoQueueModifying>)arg1;
- (void)replaceCurrentQueueWithQueue:(id <SVVideoQueue>)arg1;
@end

