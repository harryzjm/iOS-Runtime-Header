//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMDFeatureProvider.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMDMemoryBasedProvider : AMDFeatureProvider
{
    NSMutableDictionary *_featureStore;
}

+ (_Bool)isValidFeatureObject:(id)arg1;
+ (_Bool)isValidMultiArray:(id)arg1;
+ (id)sharedProvider;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *featureStore; // @synthesize featureStore=_featureStore;
- (void)storeFeatureData:(id)arg1 error:(id *)arg2;
- (id)getFeatureWithName:(id)arg1 withColumn:(id)arg2 error:(id *)arg3;

@end

