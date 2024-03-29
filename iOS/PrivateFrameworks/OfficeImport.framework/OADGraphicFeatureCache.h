//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface OADGraphicFeatureCache : NSObject
{
    NSMutableArray *mFeatureUsageArray;
    OITSUNoCopyDictionary *mFeatureMap;
}

- (void).cxx_destruct;
- (id)featuresSortedByUsageCount;
- (id)countedFeatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)cacheFeature:(id)arg1;
- (void)dealloc;
- (id)init;

@end

