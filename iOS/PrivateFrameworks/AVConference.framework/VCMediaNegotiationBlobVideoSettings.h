//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoSettings : PBCodable
{
    unsigned int _customVideoHeight;
    unsigned int _customVideoWidth;
    unsigned int _hdrModesSupported;
    unsigned int _pixelFormats;
    unsigned int _rtpSSRC;
    unsigned int _tilesPerFrame;
    NSMutableArray *_videoPayloadCollections;
    _Bool _allowRTCPFB;
    _Bool _ltrpEnabled;
    struct {
        unsigned int customVideoHeight:1;
        unsigned int customVideoWidth:1;
        unsigned int hdrModesSupported:1;
        unsigned int pixelFormats:1;
        unsigned int tilesPerFrame:1;
        unsigned int ltrpEnabled:1;
    } _has;
}

+ (Class)videoPayloadCollectionsType;
+ (unsigned int)hdrModesBitmapWithSupportedModes:(id)arg1;
+ (unsigned int)storePixelFormatsInBitMap:(id)arg1;
@property(nonatomic) unsigned int hdrModesSupported; // @synthesize hdrModesSupported=_hdrModesSupported;
@property(nonatomic) unsigned int pixelFormats; // @synthesize pixelFormats=_pixelFormats;
@property(retain, nonatomic) NSMutableArray *videoPayloadCollections; // @synthesize videoPayloadCollections=_videoPayloadCollections;
@property(nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
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
@property(nonatomic) _Bool hasHdrModesSupported;
@property(nonatomic) _Bool hasPixelFormats;
@property(nonatomic) _Bool hasLtrpEnabled;
@property(nonatomic) _Bool ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property(nonatomic) _Bool hasTilesPerFrame;
@property(nonatomic) unsigned int tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) _Bool hasCustomVideoHeight;
@property(nonatomic) unsigned int customVideoHeight; // @synthesize customVideoHeight=_customVideoHeight;
@property(nonatomic) _Bool hasCustomVideoWidth;
@property(nonatomic) unsigned int customVideoWidth; // @synthesize customVideoWidth=_customVideoWidth;
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoPayloadCollectionsCount;
- (void)addVideoPayloadCollections:(id)arg1;
- (void)clearVideoPayloadCollections;
- (void)dealloc;
- (void)printScreenWithLogFile:(void *)arg1;
- (void)printVideoWithLogFile:(void *)arg1;
- (void)prepareFormatString:(id)arg1 format:(id)arg2 formatIndex:(unsigned int)arg3 preferredFormat:(unsigned int)arg4;
- (id)parameterSetStringFromPayloadSettings:(id)arg1;
- (id)newFeatureStrings;
- (id)newVideoRuleCollectionsForScreen:(_Bool)arg1 isCellular16x9Capable:(_Bool)arg2 isLocalConfig:(_Bool)arg3;
- (void)checkAndInsertRuleWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotiationBitfield:(unsigned int *)arg6 negotiationBit:(unsigned int)arg7 rules:(id)arg8 isCellular16x9Capable:(_Bool)arg9;
- (_Bool)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(_Bool)arg3 isCellular16x9Capable:(_Bool)arg4;
- (id)getPayloadSettingsForPayload:(int)arg1;
- (id)initWithScreenSSRC:(unsigned int)arg1 allowRTCPFB:(_Bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(_Bool)arg5 customVideoWidth:(unsigned int)arg6 customVideoHeight:(unsigned int)arg7 tilesPerFrame:(unsigned int)arg8 ltrpEnabled:(_Bool)arg9 pixelFormats:(id)arg10 hdrModesSupported:(id)arg11;
- (id)initWithSSRC:(unsigned int)arg1 allowRTCPFB:(_Bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(_Bool)arg5 tilesPerFrame:(unsigned int)arg6 ltrpEnabled:(_Bool)arg7;

@end

