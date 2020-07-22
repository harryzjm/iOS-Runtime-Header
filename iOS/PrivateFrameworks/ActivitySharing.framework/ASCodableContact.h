//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableRelationship, NSMutableArray, NSString;

@interface ASCodableContact : PBCodable <NSCopying>
{
    NSMutableArray *_destinations;
    NSString *_fullName;
    NSString *_linkedContactStoreIdentifier;
    ASCodableRelationship *_relationship;
    ASCodableRelationship *_remoteRelationship;
    NSString *_shortName;
}

+ (Class)destinationsType;
@property(retain, nonatomic) ASCodableRelationship *remoteRelationship; // @synthesize remoteRelationship=_remoteRelationship;
@property(retain, nonatomic) ASCodableRelationship *relationship; // @synthesize relationship=_relationship;
@property(retain, nonatomic) NSMutableArray *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSString *linkedContactStoreIdentifier; // @synthesize linkedContactStoreIdentifier=_linkedContactStoreIdentifier;
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
@property(readonly, nonatomic) _Bool hasRemoteRelationship;
@property(readonly, nonatomic) _Bool hasRelationship;
- (id)destinationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationsCount;
- (void)addDestinations:(id)arg1;
- (void)clearDestinations;
@property(readonly, nonatomic) _Bool hasShortName;
@property(readonly, nonatomic) _Bool hasFullName;
@property(readonly, nonatomic) _Bool hasLinkedContactStoreIdentifier;

@end
