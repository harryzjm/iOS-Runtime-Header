//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Accounts/NSCopying-Protocol.h>

@class ACProtobufDate, ACProtobufURL, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufCredentialItem : PBCodable <NSCopying>
{
    NSString *_accountIdentifier;
    NSMutableArray *_dirtyProperties;
    ACProtobufDate *_expirationDate;
    ACProtobufURL *_objectID;
    NSString *_serviceName;
    _Bool _isPersistent;
    struct {
        unsigned int isPersistent:1;
    } _has;
}

+ (Class)dirtyPropertiesType;
@property(retain, nonatomic) NSMutableArray *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property(retain, nonatomic) ACProtobufURL *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) _Bool isPersistent; // @synthesize isPersistent=_isPersistent;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) ACProtobufDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
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
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyPropertiesCount;
- (void)addDirtyProperties:(id)arg1;
- (void)clearDirtyProperties;
@property(readonly, nonatomic) _Bool hasObjectID;
@property(nonatomic) _Bool hasIsPersistent;
@property(readonly, nonatomic) _Bool hasExpirationDate;

@end

