//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsToday/NSObject-Protocol.h>

@class NSArray;
@protocol FCTodayReadHistoryItem;

@protocol NTWritablePrivateDataStorage <NSObject>
- (void)writeReadHistoryItem:(id <FCTodayReadHistoryItem>)arg1;
- (void)writeSeenHistoryItems:(NSArray *)arg1;
@end
