//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsDaemon/NSObject-Protocol.h>

@class NSArray, NSDate;
@protocol NTHeadlineAnalyticsElementProviding, NTTodayResultOperationInfoProviding;

@protocol NDNewsService <NSObject>
- (void)markAnalyticsElement:(id <NTHeadlineAnalyticsElementProviding>)arg1 asReadAtDate:(NSDate *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)markAnalyticsElements:(NSArray *)arg1 asSeenAtDate:(NSDate *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)fetchLatestResultsWithParameters:(id <NTTodayResultOperationInfoProviding>)arg1 completion:(void (^)(NTTodayResults *, NSDictionary *, NSObject<NTTodayResultOperationFetchInfoProviding> *, NSError *, _Bool))arg2;
@end

