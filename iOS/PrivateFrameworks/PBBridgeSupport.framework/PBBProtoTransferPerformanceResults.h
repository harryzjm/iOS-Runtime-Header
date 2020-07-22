//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface PBBProtoTransferPerformanceResults : PBCodable <NSCopying>
{
    NSMutableArray *_macroActivites;
    NSMutableArray *_measures;
    NSMutableArray *_milestones;
}

+ (Class)macroActivitesType;
+ (Class)measuresType;
+ (Class)milestonesType;
@property(retain, nonatomic) NSMutableArray *macroActivites; // @synthesize macroActivites=_macroActivites;
@property(retain, nonatomic) NSMutableArray *measures; // @synthesize measures=_measures;
@property(retain, nonatomic) NSMutableArray *milestones; // @synthesize milestones=_milestones;
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
- (id)macroActivitesAtIndex:(unsigned long long)arg1;
- (unsigned long long)macroActivitesCount;
- (void)addMacroActivites:(id)arg1;
- (void)clearMacroActivites;
- (id)measuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)measuresCount;
- (void)addMeasures:(id)arg1;
- (void)clearMeasures;
- (id)milestonesAtIndex:(unsigned long long)arg1;
- (unsigned long long)milestonesCount;
- (void)addMilestones:(id)arg1;
- (void)clearMilestones;

@end
