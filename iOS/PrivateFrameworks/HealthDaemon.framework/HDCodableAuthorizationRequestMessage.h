//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableAuthorizationRequestMessage : PBCodable <NSCopying>
{
    CDStruct_5df41632 _typesToReads;
    CDStruct_5df41632 _typesToWrites;
    NSString *_appBundleIdentifier;
    NSData *_requestIdentifier;
}

@property(retain, nonatomic) NSData *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
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
- (void)setTypesToWrites:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)typesToWriteAtIndex:(unsigned long long)arg1;
- (void)addTypesToWrite:(long long)arg1;
- (void)clearTypesToWrites;
@property(readonly, nonatomic) long long *typesToWrites;
@property(readonly, nonatomic) unsigned long long typesToWritesCount;
- (void)setTypesToReads:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)typesToReadAtIndex:(unsigned long long)arg1;
- (void)addTypesToRead:(long long)arg1;
- (void)clearTypesToReads;
@property(readonly, nonatomic) long long *typesToReads;
@property(readonly, nonatomic) unsigned long long typesToReadsCount;
@property(readonly, nonatomic) _Bool hasRequestIdentifier;
@property(readonly, nonatomic) _Bool hasAppBundleIdentifier;
- (void)dealloc;

@end

