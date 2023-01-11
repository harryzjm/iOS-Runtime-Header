//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileAsset/MAAsset.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface MAAsset (AdIDExtensions)
@property(readonly, nonatomic) NSArray *lookbackPeriods;
@property(readonly, nonatomic) NSNumber *maxQueryElements;
@property(readonly, nonatomic) NSNumber *refreshInterval;
@property(readonly, nonatomic) NSString *appVectorVersion;
- (id)filename;
@property(readonly, nonatomic) NSURL *fileURL;
@end
