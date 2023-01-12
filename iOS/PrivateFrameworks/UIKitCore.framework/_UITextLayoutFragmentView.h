//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTextLayoutFragment;

__attribute__((visibility("hidden")))
@interface _UITextLayoutFragmentView
{
    NSTextLayoutFragment *_layoutFragment;
    struct CGPoint _containerOrigin;
    struct CGSize _containerSize;
    struct CGSize _layoutSize;
    struct CGRect _clipRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) struct CGPoint containerOrigin; // @synthesize containerOrigin=_containerOrigin;
@property(readonly, nonatomic) NSTextLayoutFragment *layoutFragment; // @synthesize layoutFragment=_layoutFragment;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)enumerateTextAttachmentViewsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct CGRect clipFrame;
- (void)_updateGeometry;
- (id)initWithLayoutFragment:(id)arg1 containerOrigin:(struct CGPoint)arg2 containerSize:(struct CGSize)arg3;

@end
