//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, SIRINLUEXTERNALUUID;

@interface SIRINLUINTERNALUAAP_PARSERUaaPParserResponse : PBCodable <NSCopying>
{
    NSMutableArray *_hypotheses;
    SIRINLUEXTERNALUUID *_requestId;
}

+ (Class)hypothesesType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *hypotheses; // @synthesize hypotheses=_hypotheses;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // @synthesize requestId=_requestId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)hypothesesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hypothesesCount;
- (void)addHypotheses:(id)arg1;
- (void)clearHypotheses;
@property(readonly, nonatomic) _Bool hasRequestId;

@end
