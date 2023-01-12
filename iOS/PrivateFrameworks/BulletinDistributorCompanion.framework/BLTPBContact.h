//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSString;

@interface BLTPBContact : PBCodable <NSCopying>
{
    NSString *_cnContactFullname;
    NSString *_cnContactIdentifier;
    NSString *_displayName;
    NSString *_handle;
    unsigned int _handleType;
    NSString *_serviceName;
    _Bool _cnContactIdentifierSuggested;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cnContactIdentifierSuggested; // @synthesize cnContactIdentifierSuggested=_cnContactIdentifierSuggested;
@property(retain, nonatomic) NSString *cnContactFullname; // @synthesize cnContactFullname=_cnContactFullname;
@property(retain, nonatomic) NSString *cnContactIdentifier; // @synthesize cnContactIdentifier=_cnContactIdentifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) unsigned int handleType; // @synthesize handleType=_handleType;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCnContactFullname;
@property(readonly, nonatomic) _Bool hasCnContactIdentifier;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasServiceName;

@end
