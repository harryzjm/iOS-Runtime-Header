//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/NSObject-Protocol.h>

@class NSArray, NSProgress;

@protocol EMClientStateInterface <NSObject>
- (NSProgress *)giveBoostWithCompletionBlock:(void (^)(void))arg1;
- (void)setClientIsInForeground:(_Bool)arg1;
- (void)setCurrentlyVisibleMailboxes:(NSArray *)arg1;
@end
