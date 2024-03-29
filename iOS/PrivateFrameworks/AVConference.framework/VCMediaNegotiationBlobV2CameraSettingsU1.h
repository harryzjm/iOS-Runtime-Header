//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2CameraSettingsU1 : PBCodable
{
    unsigned int _landscapeAspectRatioX;
    unsigned int _landscapeAspectRatioY;
    unsigned int _mismatchedDisplayAspectRatioX;
    unsigned int _mismatchedDisplayAspectRatioY;
    NSMutableArray *_payloads;
    unsigned int _portraitAspectRatioX;
    unsigned int _portraitAspectRatioY;
    unsigned int _rtpSSRC;
    struct {
        unsigned int landscapeAspectRatioX:1;
        unsigned int landscapeAspectRatioY:1;
        unsigned int mismatchedDisplayAspectRatioX:1;
        unsigned int mismatchedDisplayAspectRatioY:1;
        unsigned int portraitAspectRatioX:1;
        unsigned int portraitAspectRatioY:1;
        unsigned int rtpSSRC:1;
    } _has;
}

+ (Class)payloadsType;
@property(nonatomic) unsigned int mismatchedDisplayAspectRatioY; // @synthesize mismatchedDisplayAspectRatioY=_mismatchedDisplayAspectRatioY;
@property(nonatomic) unsigned int mismatchedDisplayAspectRatioX; // @synthesize mismatchedDisplayAspectRatioX=_mismatchedDisplayAspectRatioX;
@property(nonatomic) unsigned int portraitAspectRatioY; // @synthesize portraitAspectRatioY=_portraitAspectRatioY;
@property(nonatomic) unsigned int portraitAspectRatioX; // @synthesize portraitAspectRatioX=_portraitAspectRatioX;
@property(nonatomic) unsigned int landscapeAspectRatioY; // @synthesize landscapeAspectRatioY=_landscapeAspectRatioY;
@property(nonatomic) unsigned int landscapeAspectRatioX; // @synthesize landscapeAspectRatioX=_landscapeAspectRatioX;
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMismatchedDisplayAspectRatioY;
@property(nonatomic) _Bool hasMismatchedDisplayAspectRatioX;
@property(nonatomic) _Bool hasPortraitAspectRatioY;
@property(nonatomic) _Bool hasPortraitAspectRatioX;
@property(nonatomic) _Bool hasLandscapeAspectRatioY;
@property(nonatomic) _Bool hasLandscapeAspectRatioX;
- (id)payloadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)payloadsCount;
- (void)addPayloads:(id)arg1;
- (void)clearPayloads;
@property(nonatomic) _Bool hasRtpSSRC;
- (void)dealloc;
- (_Bool)setupVideoRuleCollection:(id)arg1 encodeDecodeFeatures:(id)arg2;
- (id)rulesForEncodeType:(unsigned char)arg1 paylaod:(int)arg2 videoRuleCollection:(id)arg3;
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2 screenSize:(struct CGSize)arg3;
@property(readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
- (_Bool)addVideoRules:(id)arg1 encodingType:(unsigned char)arg2 payload:(int)arg3 videoRuleCollections:(id)arg4;
@property(readonly, nonatomic) struct CGSize orientationMismatchDisplayRatio;
- (void)aspectRatioPortrait:(struct CGSize *)arg1 aspectRatioLandscape:(struct CGSize *)arg2 orientationMismatchAspectRatioLandscape:(struct CGSize *)arg3 orientationMismatchAspectRatioPortrait:(struct CGSize *)arg4 screenSize:(struct CGSize)arg5;
- (id)initWithSSRC:(unsigned int)arg1 videoRuleCollections:(id)arg2 screenSize:(struct CGSize)arg3 aspectRatioPortrait:(struct CGSize)arg4 aspectRatioLandscape:(struct CGSize)arg5 orientationMismatchAspectRatioLandscape:(struct CGSize)arg6 encodeDecodeFeatures:(id)arg7;

@end

