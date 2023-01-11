//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/NSCopying-Protocol.h>

@interface EDPBMessageDataIDOnly : PBCodable <NSCopying>
{
    long long _messageId;
    struct {
        unsigned int messageId:1;
    } _has;
}

@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMessageId;

@end
