//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MPUFoundation/NSCopying-Protocol.h>

@class MIPMultiverseIdentifier;

@interface _MPUProtoBufUserActivityContainerItem : PBCodable <NSCopying>
{
    int _containerItemType;
    MIPMultiverseIdentifier *_selectedMultiverseIdentifier;
    MIPMultiverseIdentifier *_visualReferenceMultiverseIdentifier;
    struct {
        unsigned int containerItemType:1;
    } _has;
}

@property(retain, nonatomic) MIPMultiverseIdentifier *visualReferenceMultiverseIdentifier; // @synthesize visualReferenceMultiverseIdentifier=_visualReferenceMultiverseIdentifier;
@property(retain, nonatomic) MIPMultiverseIdentifier *selectedMultiverseIdentifier; // @synthesize selectedMultiverseIdentifier=_selectedMultiverseIdentifier;
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
@property(readonly, nonatomic) _Bool hasVisualReferenceMultiverseIdentifier;
@property(readonly, nonatomic) _Bool hasSelectedMultiverseIdentifier;
@property(nonatomic) _Bool hasContainerItemType;
@property(nonatomic) int containerItemType; // @synthesize containerItemType=_containerItemType;

@end
