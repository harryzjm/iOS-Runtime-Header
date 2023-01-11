//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingRep
{
}

- (id)textureForDescription:(id)arg1;
- (id)accessibilityLabel;
- (_Bool)tsaxAllowedToEditChildren;
- (id)tsaxChildren;
- (_Bool)isAccessibilityElement;
- (id)p_childrenForDrawingRecursively;
- (id)p_freehandDrawingLayout;
- (double)opacity;
- (struct CGRect)clipRect;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (void)p_drawChildShapeReps:(id)arg1 togetherInContext:(struct CGContext *)arg2;
- (_Bool)p_shouldDrawShapeRep:(id)arg1 withOtherShapeRep:(id)arg2;
- (void)willBeRemoved;
- (id)p_freehandDrawingInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end
