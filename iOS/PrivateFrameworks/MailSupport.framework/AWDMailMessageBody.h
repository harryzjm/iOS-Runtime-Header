//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MailSupport/NSCopying-Protocol.h>

@class NSString;

@interface AWDMailMessageBody : PBCodable <NSCopying>
{
    unsigned long long _totalTextSize;
    NSString *_mimeSubtype;
    NSString *_mimeType;
    struct {
        unsigned int totalTextSize:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalTextSize; // @synthesize totalTextSize=_totalTextSize;
@property(retain, nonatomic) NSString *mimeSubtype; // @synthesize mimeSubtype=_mimeSubtype;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTotalTextSize;
@property(readonly, nonatomic) _Bool hasMimeSubtype;
@property(readonly, nonatomic) _Bool hasMimeType;
- (id)initWithMIMEBody:(id)arg1;

@end
