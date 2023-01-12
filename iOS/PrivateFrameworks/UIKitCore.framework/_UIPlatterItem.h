//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIBezierPath, UIView;

__attribute__((visibility("hidden")))
@interface _UIPlatterItem : NSObject
{
    UIView *_heldView;
}

- (void).cxx_destruct;
@property(readonly) __weak UIView *heldView; // @synthesize heldView=_heldView;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CGPoint center;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

