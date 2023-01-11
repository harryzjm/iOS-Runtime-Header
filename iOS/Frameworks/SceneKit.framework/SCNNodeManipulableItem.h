//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNNodeManipulableItem
{
}

+ (void)removeItemsFromScene:(id)arg1;
+ (void)addItems:(id)arg1 toScene:(id)arg2;
+ (id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2;
- (void)validateClone;
- (id)cloneForManipulators;
- (id)parentItem;
- (void)setPosition:(struct SCNVector3)arg1;
- (struct SCNVector3)scale;
- (struct SCNMatrix4)worldTransform;
- (void)setWorldTransform:(struct SCNMatrix4)arg1;
- (void)setTransform:(struct SCNMatrix4)arg1;
- (struct SCNMatrix4)transform;
- (_Bool)isNodeManipulator;

@end

