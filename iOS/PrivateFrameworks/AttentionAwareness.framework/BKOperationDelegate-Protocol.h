//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AttentionAwareness/NSObject-Protocol.h>

@class BKOperation;

@protocol BKOperationDelegate <NSObject>

@optional
- (void)operation:(BKOperation *)arg1 presenceStateChanged:(_Bool)arg2;
- (void)operation:(BKOperation *)arg1 stateChanged:(long long)arg2;
- (void)operation:(BKOperation *)arg1 finishedWithReason:(long long)arg2;
@end

