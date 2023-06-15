//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSString;
@protocol WBSURLCompletionMatchData;

@protocol WBSURLCompletionMatchData <NSObject>
@property(readonly, nonatomic) _Bool shouldPreload;
@property(readonly, nonatomic) _Bool visitWasClientError;
@property(readonly, nonatomic) _Bool lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) _Bool containsBookmark;
@property(readonly, nonatomic) NSString *originalURLString;
- (long long)visitCountScoreForPageTitleAtTime;
- (long long)visitCountScoreForURLStringAtIndex:(unsigned long long)arg1;
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)matchesAutocompleteTrigger:(NSString *)arg1 isStrengthened:(_Bool)arg2;
- (void)enumeratePageTitlesAndUserVisibleURLsUsingBlock:(void (^)(NSString *, unsigned long long, NSString *, unsigned long long, _Bool *))arg1;
- (NSString *)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (NSString *)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(void (^)(NSString *, unsigned long long, _Bool *))arg1;
- (NSString *)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (NSString *)pageTitleAtIndex:(unsigned long long)arg1;
- (void)enumeratePageTitlesUsingBlock:(void (^)(NSString *, unsigned long long, _Bool *))arg1;
- (id <WBSURLCompletionMatchData>)matchDataByMergingWithMatchData:(id <WBSURLCompletionMatchData>)arg1;

@optional
@property(readonly, copy, nonatomic) NSString *cloudTabDeviceName;
@property(readonly, nonatomic) _Bool onlyContainsCloudTab;
@property(readonly, nonatomic) long long visitCountScore;
@property(readonly, nonatomic) long long visitCount;
@end

