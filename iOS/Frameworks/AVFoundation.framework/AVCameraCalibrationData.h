//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVCameraCalibrationDataInternal, NSData;

@interface AVCameraCalibrationData : NSObject
{
    AVCameraCalibrationDataInternal *_internal;
}

- (id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(struct CGPoint)arg2 pixelSize:(float)arg3 referenceDimensions:(struct CGSize)arg4 lookupTableLength:(int)arg5;
- (void)dealloc;
- (id)_initEmpty;
- (struct CGImageMetadata *)copyAuxiliaryMetadata;
- (id)cameraCalibrationDataWithExifOrientation:(unsigned int)arg1;
- (id)initWithDepthMetadataDictionary:(id)arg1;
- (id)initWithAuxiliaryMetadata:(struct CGImageMetadata *)arg1;
@property(readonly, nonatomic) struct CGPoint lensDistortionCenter;
@property(readonly, nonatomic) NSData *inverseLensDistortionLookupTable;
@property(readonly, nonatomic) NSData *lensDistortionLookupTable;
@property(readonly, nonatomic) float pixelSize;
@property(readonly, nonatomic) CDStruct_14d5dc5e extrinsicMatrix;
@property(readonly, nonatomic) struct CGSize intrinsicMatrixReferenceDimensions;
@property(readonly, nonatomic) CDStruct_8e0628e6 intrinsicMatrix;
- (id)description;
- (id)debugDescription;

@end

