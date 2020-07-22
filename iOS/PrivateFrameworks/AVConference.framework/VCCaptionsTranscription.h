//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCCaptionsTranscription : PBCodable <NSCopying>
{
    NSMutableArray *_segments;
    unsigned int _updateNumber;
    unsigned int _utteranceNumber;
    _Bool _isFinal;
    _Bool _isLocal;
    struct {
        unsigned int isFinal:1;
        unsigned int isLocal:1;
    } _has;
}

+ (Class)segmentsType;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int updateNumber; // @synthesize updateNumber=_updateNumber;
@property(nonatomic) unsigned int utteranceNumber; // @synthesize utteranceNumber=_utteranceNumber;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)segmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentsCount;
- (void)addSegments:(id)arg1;
- (void)clearSegments;
@property(nonatomic) _Bool hasIsFinal;
@property(nonatomic) _Bool hasIsLocal;
- (void)dealloc;

@end

