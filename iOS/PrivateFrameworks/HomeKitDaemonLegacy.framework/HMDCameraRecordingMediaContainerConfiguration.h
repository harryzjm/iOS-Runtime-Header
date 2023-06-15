//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDCameraRecordingMediaContainer, HMDCameraRecordingMediaContainerParameters, NSData;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingMediaContainerConfiguration : HAPTLVBase
{
    HMDCameraRecordingMediaContainer *_container;
    HMDCameraRecordingMediaContainerParameters *_parameters;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HMDCameraRecordingMediaContainerParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) HMDCameraRecordingMediaContainer *container; // @synthesize container=_container;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;
- (id)initWithMediaContainer:(id)arg1 containerParameters:(id)arg2;

@end

