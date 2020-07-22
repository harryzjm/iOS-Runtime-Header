//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@interface ARHWFaceDetection : NSObject <NSSecureCoding>
{
    long long _ID;
    double _rollAngleInDegrees;
    long long _detectionOrientation;
    CDStruct_1b6d18a9 _time;
    struct CGRect _boundingBox;
}

+ (id)faceDetectionFromDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(nonatomic) long long detectionOrientation; // @synthesize detectionOrientation=_detectionOrientation;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) double rollAngleInDegrees; // @synthesize rollAngleInDegrees=_rollAngleInDegrees;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (_Bool)isEqualToFaceDetection:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

