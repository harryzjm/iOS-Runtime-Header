//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImageFaceResult : PBCodable
{
    VCPProtoBounds *_bounds;
    int _eyeExpression;
    float _faceQuality;
    int _mouthExpression;
    int _position;
    int _yaw;
    _Bool _isCloseup;
    struct {
        unsigned int faceQuality:1;
    } _has;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) float faceQuality; // @synthesize faceQuality=_faceQuality;
@property(nonatomic) _Bool isCloseup; // @synthesize isCloseup=_isCloseup;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) int yaw; // @synthesize yaw=_yaw;
@property(nonatomic) int mouthExpression; // @synthesize mouthExpression=_mouthExpression;
@property(nonatomic) int eyeExpression; // @synthesize eyeExpression=_eyeExpression;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFaceQuality;
- (id)exportToLegacyDictionary;

@end

