//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString, NTPBDate;

@interface NTPBPrivateZoneSyncState : PBCodable <NSCopying>
{
    NSData *_changeToken;
    NTPBDate *_lastCleanDate;
    NTPBDate *_lastDirtyDate;
    NSString *_zoneName;
}

@property(retain, nonatomic) NTPBDate *lastDirtyDate; // @synthesize lastDirtyDate=_lastDirtyDate;
@property(retain, nonatomic) NTPBDate *lastCleanDate; // @synthesize lastCleanDate=_lastCleanDate;
@property(retain, nonatomic) NSData *changeToken; // @synthesize changeToken=_changeToken;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLastDirtyDate;
@property(readonly, nonatomic) _Bool hasLastCleanDate;
@property(readonly, nonatomic) _Bool hasChangeToken;
@property(readonly, nonatomic) _Bool hasZoneName;
- (void)dealloc;

@end

