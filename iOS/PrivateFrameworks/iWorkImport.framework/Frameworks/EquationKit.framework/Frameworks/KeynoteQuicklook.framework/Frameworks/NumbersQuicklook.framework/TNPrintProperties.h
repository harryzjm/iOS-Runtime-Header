//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TNPrintProperties : NSObject
{
    double _headerInset;
    double _footerInset;
    struct CGSize _unscaledPageSize;
    struct UIEdgeInsets _printMargins;
}

+ (id)legacyExportPrintProperties;
+ (id)letterSizeLandscapeFormPrintProperties;
+ (id)letterSizePortraitFormPrintProperties;
+ (id)a4SizePrintProperties;
+ (id)letterSizePrintProperties;
@property(nonatomic) double footerInset; // @synthesize footerInset=_footerInset;
@property(nonatomic) double headerInset; // @synthesize headerInset=_headerInset;
@property struct UIEdgeInsets printMargins; // @synthesize printMargins=_printMargins;
@property struct CGSize unscaledPageSize; // @synthesize unscaledPageSize=_unscaledPageSize;
- (struct CGAffineTransform)p_transformForContentScale:(double)arg1 portraitOrientation:(_Bool)arg2;
- (struct CGRect)unscaledPageRectForDisplayForPortraitOrientation:(_Bool)arg1 userViewScale:(double)arg2 atPageCoordinate:(struct TSUCellCoord)arg3 layoutLeftToRight:(_Bool)arg4;
- (struct CGSize)pageSizeWithGutterForContentScale:(double)arg1 userViewScale:(double)arg2 portraitOrientation:(_Bool)arg3;
- (struct CGSize)pageSizeForContentScale:(double)arg1 portraitOrientation:(_Bool)arg2;
- (struct CGRect)pageHeaderFooterRectForContentScale:(double)arg1 portraitOrientation:(_Bool)arg2 footer:(_Bool)arg3 textHeight:(double)arg4;
- (struct CGRect)contentRectForContentScale:(double)arg1 portraitOrientation:(_Bool)arg2 headerHeight:(double)arg3 footerHeight:(double)arg4;
- (double)contentScaleForIntegralWidthWithContentScale:(double)arg1 portraitOrientation:(_Bool)arg2;
- (struct CGRect)p_unscaledContentRectForOrientation:(_Bool)arg1 headerHeight:(double)arg2 footerHeight:(double)arg3;
@property(readonly) double pageHeight;
@property(readonly) double pageWidth;
- (id)initWithPageSize:(struct CGSize)arg1 contentRect:(struct CGRect)arg2;
- (id)initWithPageSize:(struct CGSize)arg1 printMargins:(struct UIEdgeInsets)arg2;
- (id)initWithPageSize:(struct CGSize)arg1 printMargins:(struct UIEdgeInsets)arg2 headerInset:(double)arg3 footerInset:(double)arg4;

@end

