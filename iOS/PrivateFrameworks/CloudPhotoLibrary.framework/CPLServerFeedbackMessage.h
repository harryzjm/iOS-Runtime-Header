//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLServerFeedbackMessage : PBCodable <NSCopying>
{
    NSMutableArray *_keysAndValues;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *keysAndValues; // @synthesize keysAndValues=_keysAndValues;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)keysAndValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)keysAndValuesCount;
- (void)addKeysAndValues:(id)arg1;
- (void)clearKeysAndValues;

@end
