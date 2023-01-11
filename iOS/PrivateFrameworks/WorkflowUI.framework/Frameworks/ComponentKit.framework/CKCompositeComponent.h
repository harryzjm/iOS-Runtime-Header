//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKComponent;

@interface CKCompositeComponent
{
    CKComponent *_component;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 component:(id)arg2;
+ (id)newWithComponent:(id)arg1;
- (void).cxx_destruct;
- (id)viewForAnimation;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;

@end
