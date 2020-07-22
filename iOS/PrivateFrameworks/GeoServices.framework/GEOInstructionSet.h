//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODrivingWalkingInstruction, GEODrivingWalkingSpokenInstruction, GEOFormattedString, GEOGenericInstruction, GEOTransitListInstruction, GEOTransitSignInstruction;
@protocol GEOServerFormattedString;

@interface GEOInstructionSet : PBCodable <NSCopying>
{
    GEOFormattedString *_countStopsText;
    GEOFormattedString *_departureBar;
    GEODrivingWalkingInstruction *_drivingWalkingListInstruction;
    GEODrivingWalkingInstruction *_drivingWalkingSignInstruction;
    GEODrivingWalkingSpokenInstruction *_drivingWalkingSpokenInstruction;
    GEOGenericInstruction *_genericInstruction;
    GEOTransitListInstruction *_transitListInstruction;
    GEOTransitSignInstruction *_transitSignInstruction;
}

@property(retain, nonatomic) GEODrivingWalkingSpokenInstruction *drivingWalkingSpokenInstruction; // @synthesize drivingWalkingSpokenInstruction=_drivingWalkingSpokenInstruction;
@property(retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingListInstruction; // @synthesize drivingWalkingListInstruction=_drivingWalkingListInstruction;
@property(retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingSignInstruction; // @synthesize drivingWalkingSignInstruction=_drivingWalkingSignInstruction;
@property(retain, nonatomic) GEOFormattedString *countStopsText; // @synthesize countStopsText=_countStopsText;
@property(retain, nonatomic) GEOFormattedString *departureBar; // @synthesize departureBar=_departureBar;
@property(retain, nonatomic) GEOGenericInstruction *genericInstruction; // @synthesize genericInstruction=_genericInstruction;
@property(retain, nonatomic) GEOTransitListInstruction *transitListInstruction; // @synthesize transitListInstruction=_transitListInstruction;
@property(retain, nonatomic) GEOTransitSignInstruction *transitSignInstruction; // @synthesize transitSignInstruction=_transitSignInstruction;
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
@property(readonly, nonatomic) _Bool hasDrivingWalkingSpokenInstruction;
@property(readonly, nonatomic) _Bool hasDrivingWalkingListInstruction;
@property(readonly, nonatomic) _Bool hasDrivingWalkingSignInstruction;
@property(readonly, nonatomic) _Bool hasCountStopsText;
@property(readonly, nonatomic) _Bool hasDepartureBar;
@property(readonly, nonatomic) _Bool hasGenericInstruction;
@property(readonly, nonatomic) _Bool hasTransitListInstruction;
@property(readonly, nonatomic) _Bool hasTransitSignInstruction;
@property(readonly, nonatomic) id <GEOServerFormattedString> countStopsFormattedString;
@property(readonly, nonatomic) id <GEOServerFormattedString> departureBarFormattedString;

@end
