//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VisualVoicemail/NSCopying-Protocol.h>

@class NSData;

@interface VMTranscriptMessage : PBCodable <NSCopying>
{
    unsigned int _protocolVersion;
    NSData *_transcriptionData;
    CDStruct_f86102d7 _has;
}

@property(retain, nonatomic) NSData *transcriptionData; // @synthesize transcriptionData=_transcriptionData;
@property(nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTranscriptionData;
@property(nonatomic) _Bool hasProtocolVersion;

@end

