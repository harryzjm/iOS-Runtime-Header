//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface _INPBDeleteFilePermanentlyIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _Bool _confirm;
    _Bool _success;
    struct {
        unsigned int confirm:1;
        unsigned int success:1;
    } _has;
}

+ (id)options;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool confirm; // @synthesize confirm=_confirm;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasConfirm;

@end

