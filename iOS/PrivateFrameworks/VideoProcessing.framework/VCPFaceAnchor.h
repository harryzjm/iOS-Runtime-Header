//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoProcessing/NSSecureCoding-Protocol.h>

@class NSDictionary, VCPFaceGeometry;

@interface VCPFaceAnchor : NSObject <NSSecureCoding>
{
    NSDictionary *_blendShapes;
    VCPFaceGeometry *_geometry;
    CDStruct_14d5dc5e _transform;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) VCPFaceGeometry *geometry; // @synthesize geometry=_geometry;
@property(readonly, nonatomic) NSDictionary *blendShapes; // @synthesize blendShapes=_blendShapes;
@property(readonly, nonatomic) CDStruct_14d5dc5e transform; // @synthesize transform=_transform;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1 blendShapes:(id)arg2 geometry:(id)arg3;

@end
