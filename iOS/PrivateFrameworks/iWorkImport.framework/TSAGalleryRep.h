//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSDImageDrawingDataSource-Protocol.h>
#import <iWorkImport/TSKChangeSourceObserver-Protocol.h>
#import <iWorkImport/TSWPContainerTextEditingRep-Protocol.h>

@class NSArray, NSObject, NSString, TSAGalleryLayout, TSDImageDrawingHelper, TSWPRep;
@protocol TSDContainerInfo;

__attribute__((visibility("hidden")))
@interface TSAGalleryRep <TSWPContainerTextEditingRep, TSDImageDrawingDataSource, TSKChangeSourceObserver>
{
    TSDImageDrawingHelper *_drawingHelper;
    TSWPRep *_captionRep;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (struct CGAffineTransform)p_textureRenderTransformRelativeToTextureRect:(struct CGRect)arg1 forRep:(id)arg2 isMagicMove:(_Bool)arg3;
+ (struct CGRect)p_textureRectForRep:(id)arg1 isMagicMove:(_Bool)arg2;
+ (struct CGAffineTransform)p_textureLayoutTransformInRootForRep:(id)arg1 isMagicMove:(_Bool)arg2;
@property(readonly, nonatomic) TSWPRep *captionRep; // @synthesize captionRep=_captionRep;
- (void).cxx_destruct;
- (void)p_announceNewItemForAccessibilityIfNeeded;
- (void)didDisplayTextureWithDescription:(id)arg1 isAtEndOfBuild:(_Bool)arg2;
- (id)p_newTextureForStage:(unsigned long long)arg1 isIncoming:(_Bool)arg2 includeImage:(_Bool)arg3 includeCaption:(_Bool)arg4 size:(struct CGSize)arg5 offset:(struct CGPoint)arg6 renderTransform:(struct CGAffineTransform)arg7;
- (id)p_galleryItemForTextureStage:(unsigned long long)arg1 isIncoming:(_Bool)arg2;
- (_Bool)p_shouldIncludeItemCaptionTextForStage:(unsigned long long)arg1 isIncoming:(_Bool)arg2;
- (id)textureForDescription:(id)arg1;
- (id)p_emptyPlaceholderImage;
- (id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg1;
- (id)imageDrawingHelperAdjustedImageData:(id)arg1;
- (_Bool)imageDrawingHelperImageHasAlpha:(id)arg1;
- (struct CGAffineTransform)imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg1;
- (struct CGRect)imageDrawingHelperImageRect:(id)arg1;
- (id)imageDrawingHelperThumbnailImageData:(id)arg1;
- (id)imageDrawingHelperImageData:(id)arg1;
- (void)invalidateCurrentItem;
- (void)p_drawImageInContext:(struct CGContext *)arg1 forLayer:(_Bool)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
@property(readonly, nonatomic) TSWPRep *containedRep;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)updateChildrenFromLayout;
@property(readonly, nonatomic) NSArray *childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (_Bool)p_isEmpty;
@property(readonly, nonatomic) TSAGalleryLayout *galleryLayout;
- (id)galleryInfo;
- (void)willBeRemoved;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
