//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaClientFlow : PBCodable
{
    NSString *_clientFlowPayload;
    _Bool _hasClientFlowPayload;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasClientFlowPayload; // @synthesize hasClientFlowPayload=_hasClientFlowPayload;
@property(copy, nonatomic) NSString *clientFlowPayload; // @synthesize clientFlowPayload=_clientFlowPayload;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
