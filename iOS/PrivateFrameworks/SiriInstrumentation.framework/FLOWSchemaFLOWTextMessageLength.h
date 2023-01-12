//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FLOWSchemaFLOWTextMessageLength
{
    unsigned int _messageCharLength;
    unsigned int _messageWordLength;
    CDStruct_3729bf79 _has;
}

@property(nonatomic) unsigned int messageWordLength; // @synthesize messageWordLength=_messageWordLength;
@property(nonatomic) unsigned int messageCharLength; // @synthesize messageCharLength=_messageCharLength;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasMessageWordLength;
@property(nonatomic) _Bool hasMessageCharLength;

@end
