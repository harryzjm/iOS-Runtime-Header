//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@interface CPLAccountFlags : PBCodable <NSCopying>
{
    long long _version;
    int _reason;
    _Bool _defaultHEVC;
    struct {
        unsigned int version:1;
        unsigned int reason:1;
        unsigned int defaultHEVC:1;
    } _has;
}

@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) _Bool defaultHEVC; // @synthesize defaultHEVC=_defaultHEVC;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasVersion;
- (int)StringAsReason:(id)arg1;
- (id)reasonAsString:(int)arg1;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) _Bool hasDefaultHEVC;

@end
