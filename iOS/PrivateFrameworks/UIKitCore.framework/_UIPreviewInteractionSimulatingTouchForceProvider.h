//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionSimulatingTouchForceProvider : NSObject
{
    double _targetTouchForce;
    struct CGPoint _location;
    id <UICoordinateSpace> _coordinateSpace;
    _Bool _active;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
@property(readonly, nonatomic) double touchForce;
- (id)initWithTouchForce:(double)arg1 location:(struct CGPoint)arg2 coordinateSpace:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

