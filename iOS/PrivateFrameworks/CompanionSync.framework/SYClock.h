//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class SYPeer;

@interface SYClock : PBCodable <NSCopying>
{
    unsigned long long _version;
    SYPeer *_peer;
}

+ (void)initialize;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) SYPeer *peer; // @synthesize peer=_peer;
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
- (id)_myDescription;
- (unsigned long long)increment;
- (unsigned long long)increaseBy:(unsigned long long)arg1;

@end

