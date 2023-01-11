//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface VNDetectedObjectObservation
{
    struct CGRect _boundingBox;
    NSUUID *_identifier;
}

+ (id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2;
+ (id)observationWithBoundingBox:(struct CGRect)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
- (void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)excludesBoundingBoxFromCoding;
- (id)initWithRequestRevision:(unsigned long long)arg1;

@end
