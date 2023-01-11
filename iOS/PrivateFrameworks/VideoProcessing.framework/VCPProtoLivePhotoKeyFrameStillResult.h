//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>
#import <VideoProcessing/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@interface VCPProtoLivePhotoKeyFrameStillResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _sharpness;
    float _stillTime;
    float _textureness;
    _Bool _hasFlash;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
@property(nonatomic) float stillTime; // @synthesize stillTime=_stillTime;
@property(nonatomic) _Bool hasFlash; // @synthesize hasFlash=_hasFlash;
@property(nonatomic) float textureness; // @synthesize textureness=_textureness;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)exportToLegacyDictionary;

@end
