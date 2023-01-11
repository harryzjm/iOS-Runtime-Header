//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>

@class NSString;

@interface RMRemoteManagementScreenTimeLimitDelete : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_familyMemberType;
    _Bool _hasPasscode;
    _Bool _isManaged;
    _Bool _isManaging;
    CDStruct_8286c7c8 _has;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPasscode; // @synthesize hasPasscode=_hasPasscode;
@property(nonatomic) _Bool isManaging; // @synthesize isManaging=_isManaging;
@property(nonatomic) _Bool isManaged; // @synthesize isManaged=_isManaged;
@property(retain, nonatomic) NSString *familyMemberType; // @synthesize familyMemberType=_familyMemberType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHasPasscode;
@property(nonatomic) _Bool hasIsManaging;
@property(nonatomic) _Bool hasIsManaged;
@property(readonly, nonatomic) _Bool hasFamilyMemberType;
@property(nonatomic) _Bool hasTimestamp;

@end
