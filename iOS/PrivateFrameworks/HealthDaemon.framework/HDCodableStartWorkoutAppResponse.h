//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableError, NSString;

@interface HDCodableStartWorkoutAppResponse : PBCodable <NSCopying>
{
    HDCodableError *_launchError;
    NSString *_requestIdentifier;
    _Bool _success;
    struct {
        unsigned int success:1;
    } _has;
}

@property(retain, nonatomic) HDCodableError *launchError; // @synthesize launchError=_launchError;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
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
@property(readonly, nonatomic) _Bool hasLaunchError;
@property(nonatomic) _Bool hasSuccess;
@property(readonly, nonatomic) _Bool hasRequestIdentifier;

@end
