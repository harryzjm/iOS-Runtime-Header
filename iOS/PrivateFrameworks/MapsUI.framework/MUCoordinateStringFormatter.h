//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MUCoordinateStringFormatter : NSObject
{
    _Bool _coarseLocation;
}

@property(nonatomic, getter=isCoarseLocation) _Bool coarseLocation; // @synthesize coarseLocation=_coarseLocation;
- (id)_coordinatePartStringForValue:(double)arg1 positiveSymbol:(int)arg2 negativeSymbol:(int)arg3;
- (id)stringFromCoordinate:(struct CLLocationCoordinate2D)arg1;

@end
