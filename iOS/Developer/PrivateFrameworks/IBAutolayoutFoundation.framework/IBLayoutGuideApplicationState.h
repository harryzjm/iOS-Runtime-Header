//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBLayoutCoordinateApplicationState, NSArray, NSSet;

@interface IBLayoutGuideApplicationState : NSObject
{
    IBLayoutCoordinateApplicationState *_x;
    IBLayoutCoordinateApplicationState *_y;
}

- (void).cxx_destruct;
@property(readonly) IBLayoutCoordinateApplicationState *y; // @synthesize y=_y;
@property(readonly) IBLayoutCoordinateApplicationState *x; // @synthesize x=_x;
@property(readonly) NSSet *allLayoutGuideMatches;
@property(readonly) NSArray *allGuides;
- (id)initWithXCoordinateState:(id)arg1 andYCoordinateState:(id)arg2;

@end

