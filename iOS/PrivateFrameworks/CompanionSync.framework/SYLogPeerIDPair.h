//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SYLogPeerIDPair : PBCodable <NSCopying>
{
    NSString *_generationID;
    NSString *_peerID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasGenerationID;

@end
