//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HMCameraControl.h"

@class HMCharacteristic;

__attribute__((visibility("hidden")))
@interface _HMCameraSettingsControl : _HMCameraControl
{
    HMCharacteristic *_nightVision;
    HMCharacteristic *_currentHorizontalTilt;
    HMCharacteristic *_targetHorizontalTilt;
    HMCharacteristic *_currentVerticalTilt;
    HMCharacteristic *_targetVerticalTilt;
    HMCharacteristic *_opticalZoom;
    HMCharacteristic *_digitalZoom;
    HMCharacteristic *_imageRotation;
    HMCharacteristic *_imageMirroring;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMCharacteristic *imageMirroring; // @synthesize imageMirroring=_imageMirroring;
@property(retain, nonatomic) HMCharacteristic *imageRotation; // @synthesize imageRotation=_imageRotation;
@property(retain, nonatomic) HMCharacteristic *digitalZoom; // @synthesize digitalZoom=_digitalZoom;
@property(retain, nonatomic) HMCharacteristic *opticalZoom; // @synthesize opticalZoom=_opticalZoom;
@property(retain, nonatomic) HMCharacteristic *targetVerticalTilt; // @synthesize targetVerticalTilt=_targetVerticalTilt;
@property(retain, nonatomic) HMCharacteristic *currentVerticalTilt; // @synthesize currentVerticalTilt=_currentVerticalTilt;
@property(retain, nonatomic) HMCharacteristic *targetHorizontalTilt; // @synthesize targetHorizontalTilt=_targetHorizontalTilt;
@property(retain, nonatomic) HMCharacteristic *currentHorizontalTilt; // @synthesize currentHorizontalTilt=_currentHorizontalTilt;
@property(retain, nonatomic) HMCharacteristic *nightVision; // @synthesize nightVision=_nightVision;
- (id)initWithCameraProfile:(id)arg1 profileUniqueIdentifier:(id)arg2 service:(id)arg3;

@end

