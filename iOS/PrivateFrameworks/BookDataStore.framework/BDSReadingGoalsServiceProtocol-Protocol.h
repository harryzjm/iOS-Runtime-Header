//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/NSObject-Protocol.h>

@protocol BDSReadingGoalsServiceProtocol <NSObject>
- (void)readingGoalsStateInfoWithCompletion:(void (^)(BDSReadingGoalsStateInfo *, _Bool))arg1;
- (void)readingGoalsClearLocalCachedDataWithCompletion:(void (^)(_Bool))arg1;
- (void)readingGoalsClearDataWithCompletion:(void (^)(_Bool))arg1;
- (void)readingGoalsChangeDailyGoalTo:(double)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)readingGoalsChangeBooksFinishedGoalTo:(long long)arg1 withCompletion:(void (^)(_Bool))arg2;
@end

