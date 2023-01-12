//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RecapPerformanceTesting/RPTInteraction-Protocol.h>
#import <RecapPerformanceTesting/_RPTCoordinateSpaces-Protocol.h>

@class RPTCoordinateSpaceConverter;

@interface RPTDragInteraction : NSObject <_RPTCoordinateSpaces, RPTInteraction>
{
    _Bool __locationsAreAlreadyScreenSpace;
    RPTCoordinateSpaceConverter *_conversion;
    struct CGPoint _sourceLocation;
    struct CGPoint _destinationLocation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool _locationsAreAlreadyScreenSpace; // @synthesize _locationsAreAlreadyScreenSpace=__locationsAreAlreadyScreenSpace;
@property(nonatomic) struct CGPoint destinationLocation; // @synthesize destinationLocation=_destinationLocation;
@property(nonatomic) struct CGPoint sourceLocation; // @synthesize sourceLocation=_sourceLocation;
@property(retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // @synthesize conversion=_conversion;
- (id)_andThenDragBy:(struct CGVector)arg1;
- (id)interactionByScalingBy:(double)arg1;
- (id)reversedInteraction;
- (void)invokeWithComposer:(id)arg1 duration:(double)arg2;
- (id)initFromSourceLocation:(struct CGPoint)arg1 toDestinationLocation:(struct CGPoint)arg2;
- (id)initByDraggingWindow:(id)arg1 byDelta:(struct CGVector)arg2;

@end
