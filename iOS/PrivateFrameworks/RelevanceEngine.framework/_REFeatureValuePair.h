//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, REFeature, REFeatureValue;

@interface _REFeatureValuePair : NSObject
{
    REFeature *_feature;
    REFeatureValue *_value;
    unsigned long long _index;
    NSArray *_rootFeatures;
}

@property(readonly, nonatomic) NSArray *rootFeatures; // @synthesize rootFeatures=_rootFeatures;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) REFeatureValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 value:(id)arg2 index:(unsigned long long)arg3 rootFeatures:(id)arg4;

@end

