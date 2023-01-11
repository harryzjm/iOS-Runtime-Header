//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class ARPointCloud, NSString;

@interface ARWorldTrackingFeaturePointData : NSObject <ARResultData, NSSecureCoding>
{
    double _timestamp;
    ARPointCloud *_visionFeaturePoints;
    ARPointCloud *_featurePoints;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) ARPointCloud *featurePoints; // @synthesize featurePoints=_featurePoints;
@property(retain, nonatomic) ARPointCloud *visionFeaturePoints; // @synthesize visionFeaturePoints=_visionFeaturePoints;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

