//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MarkupUI/MarkupViewControllerProtocol-Protocol.h>

@class NSData, NSString, NSUndoManager, PDFDocument, PDFView, UIColor, UIScrollView, UITouch, UIView;
@protocol MarkupViewControllerDelegate;

@protocol MarkupViewControllerPrivateProtocol <MarkupViewControllerProtocol>
+ (_Bool)_isInLowMemoryEnvironment;
+ (NSData *)cleanImageMetadataFromData:(NSData *)arg1;
+ (_Bool)hasPrivateImageMetadata:(NSData *)arg1;
@property(readonly) struct CGSize adjustedSourceImageSize;
@property unsigned long long inkStyle;
@property(readonly, nonatomic) UIView *imageViewCombinedContentView;
@property(readonly, nonatomic) UIScrollView *contentViewScrollView;
@property(nonatomic) _Bool showShareButtonInToolbar;
@property(nonatomic) _Bool centersIgnoringContentInsets;
@property(retain, nonatomic) NSUndoManager *akUndoManager;
@property(nonatomic, getter=isShapeDetectionEnabled) _Bool shapeDetectionEnabled;
@property(nonatomic) _Bool forcesPDFViewTopAlignment;
@property(nonatomic) unsigned long long currentPDFPageIndex;
@property(nonatomic) _Bool fixedThumbnailView;
@property(nonatomic) _Bool allowsThumbnailViewPageReordering;
@property(nonatomic) long long thumbnailViewStyle;
@property(readonly) __weak UIView *pageLabelView;
@property(readonly) PDFView *pdfView;
@property(readonly) PDFDocument *pdfDocument;
@property(nonatomic) __weak id <MarkupViewControllerDelegate> delegate;
@property(copy, nonatomic) NSString *hostProcessBundleIdentifier;
@property _Bool encryptPrivateMetadata;
- (void)adjustContentInsetsForBars;
- (UIColor *)_markupBlackColor;
- (_Bool)isTouchInThumbnailView:(UITouch *)arg1;
- (void)resetPageLabelFadeOutTimer;
@end

