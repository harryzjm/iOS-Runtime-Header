//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDynamicItem-Protocol.h>

@class NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIDynamicTransformer : NSObject <UIDynamicItem>
{
    struct CGPoint _center;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

