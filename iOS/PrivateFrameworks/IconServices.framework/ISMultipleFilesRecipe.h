//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorRecipe-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISMultipleFilesRecipe : NSObject <ISCompositorRecipe>
{
}

- (id)layerTreeForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)documentLayerWithRect:(struct CGRect)arg1 withPageFold:(_Bool)arg2 iconSize:(struct CGSize)arg3 scale:(double)arg4;
- (id)hintedShadowOffset;
- (id)hintedShadowBlur;
- (id)hintedCornerSize;
- (id)hintedPageCurlSize;
- (id)hintedUnderPaperRect;
- (id)hintedPaperRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
