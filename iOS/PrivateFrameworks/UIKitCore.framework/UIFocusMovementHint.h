//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface UIFocusMovementHint : NSObject <NSCopying>
{
    double _translationAmount;
    double _rotationAmount;
    struct CGVector _movementDirection;
}

@property(nonatomic) double rotationAmount; // @synthesize rotationAmount=_rotationAmount;
@property(nonatomic) double translationAmount; // @synthesize translationAmount=_translationAmount;
@property(readonly, nonatomic) struct CGVector movementDirection; // @synthesize movementDirection=_movementDirection;
@property(readonly, nonatomic) struct CATransform3D interactionTransform;
@property(readonly, nonatomic) struct CGVector translation;
@property(readonly, nonatomic) struct CGVector rotation;
@property(readonly, nonatomic) struct CATransform3D perspectiveTransform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMovementDirection:(struct CGVector)arg1 itemSize:(struct CGSize)arg2;

@end

