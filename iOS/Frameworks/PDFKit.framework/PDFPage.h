//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSArray, NSAttributedString, NSData, NSString, PDFDocument, PDFPagePrivate;

@interface PDFPage : NSObject <NSCopying>
{
    PDFPagePrivate *_private;
}

+ (_Bool)isExcludingAKAnnotationRenderingForThisThread;
+ (void)setExcludingAKAnnotationRenderingForThisThread:(_Bool)arg1;
+ (_Bool)shouldHideAnnotationsForThisThread;
+ (void)setShouldHideAnnotationsForThisThread:(_Bool)arg1;
+ (_Bool)isNativeRotationDrawingEnabledForThisThread;
+ (void)setNativeRotationDrawingEnabledForThisThread:(_Bool)arg1;
+ (id)fontWithPDFFont:(struct CGPDFFont *)arg1 size:(float)arg2;
+ (_Bool)_getBooleanProperty:(id)arg1 forKey:(id)arg2 withDefault:(_Bool)arg3;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (_Bool)pathIntersectsWithRedactionPath:(struct CGPath *)arg1;
- (_Bool)rectIntersectsWithRedactionPath:(struct CGRect)arg1;
- (const struct CGPath *)createRedactionPath;
- (unsigned long long)_documentIndex;
- (id)rvItemWithPDFScannerResult:(id)arg1;
- (id)_rvItemAtPoint:(struct CGPoint)arg1;
- (id)rvItemAtPoint:(struct CGPoint)arg1 onPageLayer:(id)arg2;
- (id)rvItemAtPoint:(struct CGPoint)arg1;
- (id)pdfScannerResultAtPoint:(struct CGPoint)arg1 onPageLayer:(id)arg2;
- (id)pdfScannerResultAtPoint:(struct CGPoint)arg1;
- (id)ddScannerResults;
- (void)_scanData:(id)arg1;
- (void)_postAnnotationsChangedNotificationCoalesced;
- (void)postAnnotationsChangedNotification;
- (struct CGColor *)pageBackgroundColorHint;
- (_Bool)didChangeBounds;
- (void)printActivePageAnnotations;
- (void)resetChangedAnnotations;
- (id)changedAnnotations;
- (void)clearAnnotationChanges;
- (id)annotationChanges;
- (void)changedAnnotation:(id)arg1;
- (id)scannedAnnotationAtPoint:(struct CGPoint)arg1;
- (void)addScannedAnnotation:(id)arg1;
- (void)setDisplaysMarkupAnnotations:(_Bool)arg1;
- (void)addAnnotationFormField:(id)arg1;
- (void)_removeWidgetAnnotationFromLookupDictionary:(id)arg1;
- (void)_addWidgetAnnotationToLookupDictionary:(id)arg1;
- (id)annotationsForFieldName:(id)arg1;
- (id)annotationWithUUID:(id)arg1;
- (void)getAnnotations;
- (void)enableUndoManagerForAK:(_Bool)arg1;
- (_Bool)disableUndoManagerForAK;
- (id)scannedAnnotations;
- (void)drawBurnedInAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (struct CGAffineTransform)getDrawingTransformForBox:(long long)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (_Bool)columnAtPoint:(struct CGPoint)arg1;
- (_Bool)columnAtPointIfAvailable:(struct CGPoint)arg1;
- (void)addRedactionFromRectangularSelectionWithRect:(struct CGRect)arg1;
- (void)setColorWidgetBackgrounds:(_Bool)arg1;
- (_Bool)colorWidgetBackgrounds;
- (void)setBookmarked:(_Bool)arg1 updateBookmarks:(_Bool)arg2;
- (void)setBookmarked:(_Bool)arg1;
- (_Bool)isBookmarked;
- (struct CGPDFLayout *)pageLayoutIfAvail;
- (struct CGPDFLayout *)pageLayout;
- (void)fetchPageLayoutWithCompletion:(CDUnknownBlockType)arg1 deliveredOnQueue:(id)arg2;
- (void)_buildPageLayout;
- (struct __CFDictionary *)gcCreateBoxDictionary;
- (_Bool)_writeToConsumer:(struct CGDataConsumer *)arg1;
- (void)_ensureDisplayListIsCreated;
- (void)createDisplayList;
- (struct CGDisplayList *)displayList;
- (_Bool)hasArtBox;
- (_Bool)hasTrimBox;
- (_Bool)hasBleedBox;
- (_Bool)hasCropBox;
- (void)_addBox:(int)arg1 toDictionary:(struct __CFDictionary *)arg2 offset:(struct CGPoint)arg3;
- (id)selectionFromPointToBottom:(struct CGPoint)arg1 type:(int)arg2;
- (id)selectionFromTopToPoint:(struct CGPoint)arg1 type:(int)arg2;
- (id)selectionForAll;
- (id)selectionFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 type:(int)arg3;
- (id)selectionForRangeCommon:(struct _NSRange)arg1 isCodeRange:(_Bool)arg2;
- (id)_createAttributedString;
- (void)_commonInit;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)selectionForRange:(struct _NSRange)arg1;
- (id)selectionFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)selectionForLineAtPoint:(struct CGPoint)arg1;
- (id)selectionForWordAtPoint:(struct CGPoint)arg1;
- (id)selectionForCharacterAtPoint:(struct CGPoint)arg1;
- (id)selectionForRect:(struct CGRect)arg1;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (struct CGRect)characterBoundsAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedString;
@property(readonly, nonatomic) NSString *string;
@property(readonly, nonatomic) unsigned long long numberOfCharacters;
- (void)transformContext:(struct CGContext *)arg1 forBox:(long long)arg2;
- (struct CGAffineTransform)transformForBox:(long long)arg1;
- (struct CGRect)columnFrameAtPoint:(struct CGPoint)arg1;
- (id)selectionForCodeRange:(struct _NSRange)arg1;
- (struct CGImage *)_newCGImageWithBox:(long long)arg1 bitmapSize:(struct CGSize)arg2 scale:(double)arg3 offset:(struct CGPoint)arg4 backgroundColor:(id)arg5 withRotation:(_Bool)arg6 withAntialiasing:(_Bool)arg7 withAnnotations:(_Bool)arg8 withBookmark:(_Bool)arg9 withDelegate:(id)arg10;
- (id)imageOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withOptions:(id)arg3;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withBookmark:(_Bool)arg3 withAnnotations:(_Bool)arg4;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withBookmark:(_Bool)arg3;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2;
- (void)_drawPageCGImageInContext:(struct CGContext *)arg1 withDisplayBox:(long long)arg2;
- (void)_drawPageImageInContext:(struct CGContext *)arg1 withRotation:(_Bool)arg2 withDisplayBox:(long long)arg3;
- (void)_drawBookmarkInContext:(struct CGContext *)arg1;
- (void)_drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withRotation:(_Bool)arg3 isThumbnail:(_Bool)arg4 withAnnotations:(_Bool)arg5 withBookmark:(_Bool)arg6 withDelegate:(id)arg7;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 isThumbnail:(_Bool)arg3;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)drawWithBox:(long long)arg1 toContext:(struct CGContext *)arg2;
- (_Bool)hasPopups;
- (id)annotationAtRect:(struct CGRect)arg1;
- (id)annotationAtPoint:(struct CGPoint)arg1;
- (void)removeAnnotation:(id)arg1 atIndex:(long long)arg2;
- (void)removeAnnotation:(id)arg1 withUndo:(_Bool)arg2;
- (void)removeAnnotation:(id)arg1;
- (void)insertAnnotation:(id)arg1 atIndex:(long long)arg2;
- (void)addAnnotation:(id)arg1 withUndo:(_Bool)arg2;
- (void)addAnnotation:(id)arg1;
@property(nonatomic) _Bool displaysAnnotations;
- (void)fetchAnnotationsWithCompletion:(CDUnknownBlockType)arg1 deliveredOnQueue:(id)arg2;
- (id)annotationsIfAvail;
- (void)lazilyLoadAnnotations;
- (id)allAnnotations;
@property(readonly, nonatomic) NSArray *annotations;
- (void)postPageDidRotateNotification;
@property(nonatomic) long long rotation;
- (void)postPageDidChangeBoundsNotification;
- (void)setBounds:(struct CGRect)arg1 forBox:(long long)arg2;
- (struct CGRect)boundsForBox:(long long)arg1;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) struct CGPDFPage *pageRef;
@property(readonly, nonatomic) __weak PDFDocument *document;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1;
- (id)init;
- (void)_drawAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)purgeAll;
- (struct CGPDFPage *)createPageRefFromImage;
- (void)setDocument:(id)arg1;
- (_Bool)setPageRef:(struct CGPDFPage *)arg1;
- (void)setAKDidSetupRealPageModelController:(_Bool)arg1;
- (_Bool)akDidSetupRealPageModelController;
- (void)setupAKPageAdaptorIfNecessary;
- (id)initWithRect:(struct CGRect)arg1 andRotation:(long long)arg2;
- (id)initWithImageSource:(struct CGImageSource *)arg1;
- (id)initWithPageRef:(struct CGPDFPage *)arg1;
- (id)akPageAdaptor;

@end
