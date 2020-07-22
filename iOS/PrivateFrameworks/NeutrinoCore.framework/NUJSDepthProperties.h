//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUJSDepthPropertiesExport-Protocol.h>

@class NUJSAVCameraCalibrationData, NUJSCGImageMetadata;
@protocol NUDepthProperties;

@interface NUJSDepthProperties <NUJSDepthPropertiesExport>
{
}

@property(readonly) NUJSCGImageMetadata *depthMetaData;
@property(readonly) NUJSAVCameraCalibrationData *cameraCalibrationData;
@property(readonly) id <NUDepthProperties> depthProperties;
- (id)initWithDepthProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end
