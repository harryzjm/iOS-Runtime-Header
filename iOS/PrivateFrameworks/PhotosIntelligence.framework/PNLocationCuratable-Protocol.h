//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosIntelligence/NSObject-Protocol.h>

@class NSArray, PHFetchResult;

@protocol PNLocationCuratable <NSObject>
+ (NSArray *)representativeAssetsForMapDisplayFromAssets:(PHFetchResult *)arg1;
+ (double)iconicScoreThresholdMinimum;
+ (double)iconicScoreThresholdMedium;
+ (double)iconicScoreThresholdHigh;
+ (unsigned long long)fetchLimit;
+ (NSArray *)requiredFetchPropertySets;
@end

