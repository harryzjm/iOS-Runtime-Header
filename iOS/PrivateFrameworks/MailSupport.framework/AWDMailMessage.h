//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MailSupport/NSCopying-Protocol.h>

@class AWDMailMessageBody, NSString;

@interface AWDMailMessage : PBCodable <NSCopying>
{
    AWDMailMessageBody *_body;
    NSString *_messageId;
}

@property(retain, nonatomic) AWDMailMessageBody *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
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
@property(readonly, nonatomic) _Bool hasBody;
@property(readonly, nonatomic) _Bool hasMessageId;
- (id)initWithMailMessage:(id)arg1;

@end

