//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFCategoryJudgement : NSObject
{
    float score;
    long long category;
}

+ (id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2;
- (id)description;
- (long long)compareByScore:(id)arg1;
- (long long)compareByCategory:(id)arg1;
- (void)setCategory:(long long)arg1;
- (long long)category;
- (void)setScore:(float)arg1;
- (float)score;

@end

