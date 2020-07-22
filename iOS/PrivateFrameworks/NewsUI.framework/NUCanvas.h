//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUViewNode;

@interface NUCanvas
{
    NUViewNode *_viewNode;
    struct CGRect _lastFrame;
}

+ (id)canvasWithSizer:(id)arg1 options:(struct NULayoutOptions)arg2 inNode:(id)arg3 componentsBlock:(CDUnknownBlockType)arg4;
+ (id)canvasWithSizer:(id)arg1 options:(struct NULayoutOptions)arg2 componentsBlock:(CDUnknownBlockType)arg3;
+ (id)canvasWithSizer:(id)arg1 componentsBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) struct CGRect lastFrame; // @synthesize lastFrame=_lastFrame;
@property(readonly, nonatomic) NUViewNode *viewNode; // @synthesize viewNode=_viewNode;
- (void).cxx_destruct;
- (void)layoutComponentsInBounds:(struct CGRect)arg1 layoutContext:(id)arg2;
- (void)layoutWithLayoutContext:(id)arg1;
- (void)layoutInBounds:(struct CGRect)arg1 traitCollection:(id)arg2;
- (id)resolveView;
- (id)initWithNode:(id)arg1 sizer:(id)arg2 options:(struct NULayoutOptions)arg3 componentsBlock:(CDUnknownBlockType)arg4;

@end

