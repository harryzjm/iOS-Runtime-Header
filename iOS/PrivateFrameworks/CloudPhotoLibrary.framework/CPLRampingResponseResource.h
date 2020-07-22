//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSString;

@interface CPLRampingResponseResource : PBCodable <NSCopying>
{
    long long _retryAfterMillis;
    NSString *_resource;
    _Bool _allowed;
    struct {
        unsigned int retryAfterMillis:1;
        unsigned int allowed:1;
    } _has;
}

@property(nonatomic) long long retryAfterMillis; // @synthesize retryAfterMillis=_retryAfterMillis;
@property(nonatomic) _Bool allowed; // @synthesize allowed=_allowed;
@property(retain, nonatomic) NSString *resource; // @synthesize resource=_resource;
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
@property(nonatomic) _Bool hasRetryAfterMillis;
@property(nonatomic) _Bool hasAllowed;
@property(readonly, nonatomic) _Bool hasResource;

@end
