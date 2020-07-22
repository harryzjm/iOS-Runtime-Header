//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MailSupport/NSCopying-Protocol.h>

@interface AWDMailComposeAttachmentReport : PBCodable <NSCopying>
{
    long long _drawingInsertCount;
    long long _drawingSentCount;
    unsigned long long _timestamp;
    _Bool _messageSent;
    struct {
        unsigned int drawingInsertCount:1;
        unsigned int drawingSentCount:1;
        unsigned int timestamp:1;
        unsigned int messageSent:1;
    } _has;
}

@property(nonatomic) _Bool messageSent; // @synthesize messageSent=_messageSent;
@property(nonatomic) long long drawingSentCount; // @synthesize drawingSentCount=_drawingSentCount;
@property(nonatomic) long long drawingInsertCount; // @synthesize drawingInsertCount=_drawingInsertCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMessageSent;
@property(nonatomic) _Bool hasDrawingSentCount;
@property(nonatomic) _Bool hasDrawingInsertCount;
@property(nonatomic) _Bool hasTimestamp;

@end

