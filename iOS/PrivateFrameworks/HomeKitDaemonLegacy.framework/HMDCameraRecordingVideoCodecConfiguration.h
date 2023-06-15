//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDCameraRecordingVideoCodec, HMDCameraRecordingVideoCodecParameters, NSArray, NSData;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingVideoCodecConfiguration : HAPTLVBase
{
    HMDCameraRecordingVideoCodec *_codec;
    HMDCameraRecordingVideoCodecParameters *_parameters;
    NSArray *_videoAttributes;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
@property(readonly, copy, nonatomic) HMDCameraRecordingVideoCodecParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) HMDCameraRecordingVideoCodec *codec; // @synthesize codec=_codec;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;
- (id)initWithCodec:(id)arg1 codecParameters:(id)arg2 videoAttributes:(id)arg3;

@end

