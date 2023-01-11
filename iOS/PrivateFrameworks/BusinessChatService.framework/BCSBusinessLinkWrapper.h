//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BusinessChatService/NSCopying-Protocol.h>

@class BCSBusinessLinkMessage, NSString;

__attribute__((visibility("hidden")))
@interface BCSBusinessLinkWrapper : PBCodable <NSCopying>
{
    long long _modTime;
    BCSBusinessLinkMessage *_message;
    NSString *_orgId;
    struct {
        unsigned int modTime:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long modTime; // @synthesize modTime=_modTime;
@property(retain, nonatomic) BCSBusinessLinkMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *orgId; // @synthesize orgId=_orgId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasModTime;
@property(readonly, nonatomic) _Bool hasMessage;
@property(readonly, nonatomic) _Bool hasOrgId;

@end
