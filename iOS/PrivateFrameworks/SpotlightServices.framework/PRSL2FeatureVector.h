//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpotlightServices/NSCopying-Protocol.h>
#import <SpotlightServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface PRSL2FeatureVector : NSObject <NSSecureCoding, NSCopying>
{
    double _features[968];
    double *_expanded_floating_point_features;
    unsigned long long _expanded_floating_point_features_count;
    double _originalL2Score;
    double _experimentalScore;
    NSString *_bundleID;
    NSString *_device_type;
    NSDictionary *_searchThroughCEPData;
}

+ (unsigned long long)featureForName:(id)arg1;
+ (id)contextWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;
+ (void)initialize;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *searchThroughCEPData; // @synthesize searchThroughCEPData=_searchThroughCEPData;
@property(retain, nonatomic) NSString *device_type; // @synthesize device_type=_device_type;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) double experimentalScore; // @synthesize experimentalScore=_experimentalScore;
@property(nonatomic) double originalL2Score; // @synthesize originalL2Score=_originalL2Score;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expandedArrayRepresentation;
- (void)dealloc;
- (void)cleanup;
- (void)setExpandedSet:(double *)arg1 expandedCount:(unsigned long long)arg2;
- (id)dictionaryRepresentationWithoutDefaultValues;
- (id)_dictionaryRepresentationWithoutDefaultValues:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (void)setFeatureName:(id)arg1 value:(double)arg2;
- (double)valueForFeatureName:(id)arg1;
- (double)valueForFeature:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forFeature:(unsigned long long)arg2;
- (void)setDouble:(double)arg1 forFeature:(unsigned long long)arg2;
- (id)init;

@end
