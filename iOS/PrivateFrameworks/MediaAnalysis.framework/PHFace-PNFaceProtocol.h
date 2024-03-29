//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFace.h>

@class NSData, NSString;

@interface PHFace (PNFaceProtocol)
@property(nonatomic) long long qualityMeasure; // @dynamic qualityMeasure;
@property(readonly, nonatomic) NSData *faceprintData;
- (double)photosFaceRepresentationQuality;
- (double)photosFaceRepresentationRoll;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (long long)photosFaceRepresentationQualityMeasure;
- (_Bool)photosFaceRepresentationIsRightEyeClosed;
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;
- (_Bool)photosFaceRepresentationHasSmile;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationCenterX;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (struct CGRect)vcp_normalizedBodyBounds;
- (_Bool)vcp_hasBody;
- (struct CGRect)vcp_normalizedFaceBounds;
- (_Bool)vcp_hasFace;

// Remaining properties
@property(readonly, nonatomic) unsigned short ageType;
@property(readonly, nonatomic) double centerX;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) long long clusterSequenceNumber;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *personLocalIdentifier;
@property(readonly, nonatomic) unsigned short poseType;
@property(readonly, nonatomic) double poseYaw;
@property(readonly, nonatomic) double size;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long vuObservationID;
@end

