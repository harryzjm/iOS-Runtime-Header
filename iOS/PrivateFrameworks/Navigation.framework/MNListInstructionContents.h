//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNInstructionContents-Protocol.h>

@class GEOComposedWaypoint, NSArray, NSString;
@protocol GEOServerFormattedString;

@interface MNListInstructionContents : NSObject <MNInstructionContents>
{
    double _distance;
    id <GEOServerFormattedString> _distanceFormat;
    NSArray *_instructionFormats;
    int _maneuverType;
    int _transportType;
    NSString *_intersectionName;
    NSString *_destinationName;
    NSString *_exitNumber;
    NSArray *_branchNames;
    NSArray *_towardNames;
    int _junctionAngle;
    _Bool _toFreeway;
    _Bool _suppressNames;
    _Bool _suppressFallback;
    NSString *_roadName;
    GEOComposedWaypoint *_destination;
}

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2;
@property(nonatomic) _Bool suppressFallback; // @synthesize suppressFallback=_suppressFallback;
@property(nonatomic) _Bool suppressNames; // @synthesize suppressNames=_suppressNames;
@property(retain, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSArray *instructionFormats; // @synthesize instructionFormats=_instructionFormats;
@property(retain, nonatomic) id <GEOServerFormattedString> distanceFormat; // @synthesize distanceFormat=_distanceFormat;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasServerContent;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instruction;
- (id)instructionWithShorterAlternatives;
- (id)_instructionsForFormats:(id)arg1;
- (id)stringForDistance:(double)arg1;
@property(readonly, nonatomic) long long context;
- (id)description;
- (void)_populateFromStep:(id)arg1;
- (id)init;

@end

