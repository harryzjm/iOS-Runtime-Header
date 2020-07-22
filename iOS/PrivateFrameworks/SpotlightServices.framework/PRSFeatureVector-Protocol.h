//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSOrderedSet, NSString;

@protocol PRSFeatureVector
+ (void)reArrangeOrderedSetBySet:(NSOrderedSet *)arg1 withInflation:(unsigned long long)arg2 andInflatedMap:(NSDictionary *)arg3;
+ (_Bool)doesFeatureExist:(NSString *)arg1;
@property(retain, nonatomic) NSString *bundle_id;
- (NSMutableDictionary *)getExpandedFeaturesAsDictionary;
- (NSMutableDictionary *)getFeaturesAsDictionary;
- (NSArray *)getExpandedFeatureVectorAsArray;
- (void)setExpandedSet:(double *)arg1;
- (void)cleanup;
- (void)resetFeatureValues;
- (double)getServerFeatureAtIndex:(unsigned long long)arg1;
- (double)getValueForFeature:(NSString *)arg1;
- (double)getValueAtIndex:(unsigned long long)arg1;
- (void)setValue:(NSNumber *)arg1 forFeatureEnum:(unsigned long long)arg2;
- (void)setValue:(NSNumber *)arg1 forFeature:(NSString *)arg2;
@end

