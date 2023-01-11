//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@class ARPointCloud, MISSING_TYPE, NSData, NSSet, NSString, NSUUID;

@interface ARReferenceObject : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_resourceGroupName;
    ARPointCloud *_rawFeaturePoints;
    NSUUID *_identifier;
    long long _version;
    NSData *_trackingData;
    NSSet *_keyframes;
    MISSING_TYPE *_center;
    MISSING_TYPE *_extent;
    MISSING_TYPE *_scale;
    CDStruct_14d5dc5e _referenceOriginTransform;
}

+ (_Bool)supportsSecureCoding;
+ (id)referenceObjectsInGroupNamed:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *keyframes; // @synthesize keyframes=_keyframes;
@property(readonly, nonatomic) CDStruct_14d5dc5e referenceOriginTransform; // @synthesize referenceOriginTransform=_referenceOriginTransform;
@property(readonly, nonatomic) NSData *trackingData; // @synthesize trackingData=_trackingData;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) ARPointCloud *rawFeaturePoints; // @synthesize rawFeaturePoints=_rawFeaturePoints;
@property(readonly, nonatomic) NSString *resourceGroupName; // @synthesize resourceGroupName=_resourceGroupName;
@property(readonly, nonatomic) MISSING_TYPE *scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) MISSING_TYPE *extent; // @synthesize extent=_extent;
@property(readonly, nonatomic) MISSING_TYPE *center; // @synthesize center=_center;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)referenceObjectByMergingObject:(id)arg1 error:(id *)arg2;
- (id)referenceObjectByApplyingTransform:(CDStruct_14d5dc5e)arg1;
- (_Bool)exportObjectToURL:(id)arg1 previewImage:(id)arg2 error:(id *)arg3;
- (id)initWithArchiveURL:(id)arg1 error:(id *)arg2;

@end
