//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface PRSRankingItemRelativeFeatureContext : NSObject
{
    unsigned long long _relRankFeature;
    unsigned long long _absRankFeature;
    NSPredicate *_predicate;
    CDUnknownBlockType _comparator;
}

+ (void)_associatedPRSL2FeatureFromRelativeFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned long long *)arg2 relRankFeatureOut:(unsigned long long *)arg3;
+ (id)_predicateForRelativeFeature:(unsigned long long)arg1;
+ (CDUnknownBlockType)_resultComparatorForRelativeFeature:(unsigned long long)arg1;
+ (id)_relativeContextsForFeatures:(id)arg1;
+ (id)relativeContextsForResultSet;
+ (id)relativeContextsForBundle:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) unsigned long long absRankFeature; // @synthesize absRankFeature=_absRankFeature;
@property(nonatomic) unsigned long long relRankFeature; // @synthesize relRankFeature=_relRankFeature;
- (void).cxx_destruct;
- (id)initWithFeature:(unsigned long long)arg1;

@end

