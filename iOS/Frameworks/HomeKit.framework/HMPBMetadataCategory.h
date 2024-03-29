//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMPBMetadataCategory : PBCodable
{
    NSString *_catDescription;
    int _identifier;
    NSString *_uuidStr;
    struct {
        unsigned int identifier:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *catDescription; // @synthesize catDescription=_catDescription;
@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasCatDescription;
@property(readonly, nonatomic) _Bool hasUuidStr;

@end

