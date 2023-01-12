//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBUserFocusComputedModeEvent : PBCodable <NSCopying>
{
    NSString *_mode;
    int _modeSemanticType;
    int _modeUpdateReason;
    int _modeUpdateSource;
    NSString *_semanticModeIdentifier;
    _Bool _starting;
    struct {
        unsigned int modeSemanticType:1;
        unsigned int modeUpdateReason:1;
        unsigned int modeUpdateSource:1;
        unsigned int starting:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *semanticModeIdentifier; // @synthesize semanticModeIdentifier=_semanticModeIdentifier;
@property(nonatomic) _Bool starting; // @synthesize starting=_starting;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSemanticModeIdentifier;
- (int)StringAsModeUpdateSource:(id)arg1;
- (id)modeUpdateSourceAsString:(int)arg1;
@property(nonatomic) _Bool hasModeUpdateSource;
@property(nonatomic) int modeUpdateSource; // @synthesize modeUpdateSource=_modeUpdateSource;
- (int)StringAsModeSemanticType:(id)arg1;
- (id)modeSemanticTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasModeSemanticType;
@property(nonatomic) int modeSemanticType; // @synthesize modeSemanticType=_modeSemanticType;
- (int)StringAsModeUpdateReason:(id)arg1;
- (id)modeUpdateReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasModeUpdateReason;
@property(nonatomic) int modeUpdateReason; // @synthesize modeUpdateReason=_modeUpdateReason;
@property(nonatomic) _Bool hasStarting;
@property(readonly, nonatomic) _Bool hasMode;

@end
