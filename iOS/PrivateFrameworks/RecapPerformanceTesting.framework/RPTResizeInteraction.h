//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RecapPerformanceTesting/RPTInteraction-Protocol.h>
#import <RecapPerformanceTesting/_RPTCoordinateSpaces-Protocol.h>

@class RPTCoordinateSpaceConverter;

@interface RPTResizeInteraction : NSObject <_RPTCoordinateSpaces, RPTInteraction>
{
    _Bool _shouldLift;
    _Bool _shouldPress;
    RPTCoordinateSpaceConverter *_conversion;
    struct CGPoint _dragPoint;
    struct CGVector _delta;
    struct CGSize _initialSize;
    struct CGSize _finalSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldPress; // @synthesize shouldPress=_shouldPress;
@property(nonatomic) _Bool shouldLift; // @synthesize shouldLift=_shouldLift;
@property(readonly, nonatomic) struct CGSize finalSize; // @synthesize finalSize=_finalSize;
@property(readonly, nonatomic) struct CGSize initialSize; // @synthesize initialSize=_initialSize;
@property(nonatomic) struct CGVector delta; // @synthesize delta=_delta;
@property(nonatomic) struct CGPoint dragPoint; // @synthesize dragPoint=_dragPoint;
@property(retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // @synthesize conversion=_conversion;
- (id)interactionByScalingBy:(double)arg1;
- (id)reversedInteraction;
- (void)invokeWithComposer:(id)arg1 duration:(double)arg2;
- (id)initWithWindow:(id)arg1 destinationSize:(struct CGSize)arg2;
- (id)initWithDragPoint:(struct CGPoint)arg1 delta:(struct CGVector)arg2 sourceSize:(struct CGSize)arg3;
- (id)initWithDragPoint:(struct CGPoint)arg1 sourceSize:(struct CGSize)arg2 destinationSize:(struct CGSize)arg3;

@end
