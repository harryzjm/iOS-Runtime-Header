//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class NSArray;
@protocol MNLocationHistoryProvider;

@protocol MNLocationHistoryProvider <NSObject>
+ (id <MNLocationHistoryProvider>)sharedLocationHistoryProvider;
- (NSArray *)locationHistory;
@end
