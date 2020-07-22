//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchListKit/NSCopying-Protocol.h>

@interface UWLErrorResponse : PBCodable <NSCopying>
{
    int _retryPeriodInSeconds;
}

@property(nonatomic) int retryPeriodInSeconds; // @synthesize retryPeriodInSeconds=_retryPeriodInSeconds;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end
