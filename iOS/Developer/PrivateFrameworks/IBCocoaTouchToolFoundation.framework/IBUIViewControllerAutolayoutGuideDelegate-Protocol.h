//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBCocoaTouchToolFoundation/NSObject-Protocol.h>

@class IBUIViewControllerAutolayoutGuide, NSObject;
@protocol IBAutolayoutItem;

@protocol IBUIViewControllerAutolayoutGuideDelegate <NSObject>
- (NSObject<IBAutolayoutItem> *)ibEffectiveParentItemForReferencingConstraintTraversalOfAutolayoutGuide:(IBUIViewControllerAutolayoutGuide *)arg1;
- (struct CGRect)ibFrameForAutolayoutGuide:(IBUIViewControllerAutolayoutGuide *)arg1;
- (NSObject<IBAutolayoutItem> *)ibContainingItemForAutolayoutGuide:(IBUIViewControllerAutolayoutGuide *)arg1;
@end

