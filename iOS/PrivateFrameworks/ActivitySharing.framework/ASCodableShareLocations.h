//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class NSString;

@interface ASCodableShareLocations : PBCodable <NSCopying>
{
    NSString *_activityShareURL;
    NSString *_relationshipShareURL;
}

@property(retain, nonatomic) NSString *relationshipShareURL; // @synthesize relationshipShareURL=_relationshipShareURL;
@property(retain, nonatomic) NSString *activityShareURL; // @synthesize activityShareURL=_activityShareURL;
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
@property(readonly, nonatomic) _Bool hasRelationshipShareURL;
@property(readonly, nonatomic) _Bool hasActivityShareURL;

@end

