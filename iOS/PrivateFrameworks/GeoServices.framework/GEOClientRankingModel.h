//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOClientRankingModel : NSObject
{
    NSArray *_features;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *features; // @synthesize features=_features;
- (id)initWithGEOPDClientRankingFeatureMetadata:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (id)init;

@end
