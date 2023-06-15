//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SUUIViewElement, SUUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SUUIProductLockupLayout : NSObject
{
    long long _bottomLeftLayoutStyle;
    NSMutableArray *_bottomLeftViewElements;
    NSMutableArray *_bottomRightViewElements;
    SUUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_middleLeftViewElements;
    SUUIViewElement *_productImageElement;
    NSMutableArray *_topLeftViewElements;
    NSMutableArray *_topRightViewElements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long bottomLeftLayoutStyle; // @synthesize bottomLeftLayoutStyle=_bottomLeftLayoutStyle;
- (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2;
- (struct CGSize)_sizeForVerticalViewElements:(id)arg1 width:(double)arg2;
- (struct CGSize)_sizeForSegmentedControl:(id)arg1 width:(double)arg2;
- (id)viewElementsForSection:(long long)arg1;
- (double)topPaddingForViewElement:(id)arg1;
- (struct SUUIProductLockupLayoutSizing)sizingToFitWidth:(double)arg1;
- (double)metadataWidthForWidth:(double)arg1;
- (_Bool)hasBottomRightElementWithRightAlignment;
- (struct SUUIProductLockupLayoutSizing)layoutWidthsForWidth:(double)arg1;
- (void)enumerateViewElementsForWidth:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (double)bottomPaddingForViewElement:(id)arg1;
- (id)initWithLockup:(id)arg1 width:(double)arg2 context:(id)arg3;

@end

