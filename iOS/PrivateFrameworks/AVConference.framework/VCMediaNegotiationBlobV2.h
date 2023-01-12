//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray, VCMediaNegotiationBlobV2BandwidthSettings, VCMediaNegotiationBlobV2CameraSettingsU1, VCMediaNegotiationBlobV2CodecFeatures, VCMediaNegotiationBlobV2GeneralInfo, VCMediaNegotiationBlobV2MicrophoneSettingsU1, VCMediaNegotiationBlobV2MomentsSettings;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2 : PBCodable <NSCopying>
{
    VCMediaNegotiationBlobV2BandwidthSettings *_bandwidthSettings;
    VCMediaNegotiationBlobV2CameraSettingsU1 *_cameraU1;
    VCMediaNegotiationBlobV2CodecFeatures *_codecSupport;
    VCMediaNegotiationBlobV2GeneralInfo *_generalInfo;
    VCMediaNegotiationBlobV2MicrophoneSettingsU1 *_microphoneU1;
    VCMediaNegotiationBlobV2MomentsSettings *_momentsSettings;
    NSMutableArray *_streamGroups;
}

+ (Class)streamGroupsType;
@property(retain, nonatomic) NSMutableArray *streamGroups; // @synthesize streamGroups=_streamGroups;
@property(retain, nonatomic) VCMediaNegotiationBlobV2MomentsSettings *momentsSettings; // @synthesize momentsSettings=_momentsSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobV2CameraSettingsU1 *cameraU1; // @synthesize cameraU1=_cameraU1;
@property(retain, nonatomic) VCMediaNegotiationBlobV2MicrophoneSettingsU1 *microphoneU1; // @synthesize microphoneU1=_microphoneU1;
@property(retain, nonatomic) VCMediaNegotiationBlobV2CodecFeatures *codecSupport; // @synthesize codecSupport=_codecSupport;
@property(retain, nonatomic) VCMediaNegotiationBlobV2BandwidthSettings *bandwidthSettings; // @synthesize bandwidthSettings=_bandwidthSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobV2GeneralInfo *generalInfo; // @synthesize generalInfo=_generalInfo;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)streamGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)streamGroupsCount;
- (void)addStreamGroups:(id)arg1;
- (void)clearStreamGroups;
@property(readonly, nonatomic) _Bool hasMomentsSettings;
@property(readonly, nonatomic) _Bool hasCameraU1;
@property(readonly, nonatomic) _Bool hasMicrophoneU1;
@property(readonly, nonatomic) _Bool hasCodecSupport;
@property(readonly, nonatomic) _Bool hasBandwidthSettings;
@property(readonly, nonatomic) _Bool hasGeneralInfo;
- (void)dealloc;
- (void)printWithTitle:(id)arg1 logFile:(void *)arg2;

@end
