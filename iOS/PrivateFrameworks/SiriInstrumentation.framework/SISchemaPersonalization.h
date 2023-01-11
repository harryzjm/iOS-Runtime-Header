//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaPersonalization : PBCodable
{
    _Bool _personalDomainsSetup;
    _Bool _appleMusicSubscriber;
    struct {
        unsigned int personalDomainsSetup:1;
        unsigned int appleMusicSubscriber:1;
    } _has;
}

@property(nonatomic) _Bool appleMusicSubscriber; // @synthesize appleMusicSubscriber=_appleMusicSubscriber;
@property(nonatomic) _Bool personalDomainsSetup; // @synthesize personalDomainsSetup=_personalDomainsSetup;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasAppleMusicSubscriber;
@property(nonatomic) _Bool hasPersonalDomainsSetup;

@end
