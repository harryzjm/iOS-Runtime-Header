//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ICTextAttachment
{
}

+ (double)defaultAttachmentThumbnailViewHeight;
+ (_Bool)textAttachmentIsContent:(id)arg1;
+ (id)textAttachmentWithAttachment:(id)arg1;
+ (Class)textAttachmentClassForAttachment:(id)arg1;
- (struct CGRect)attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect)arg1;
- (CDStruct_d2b197d1)attachmentBoundsMargins;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (double)availableWidthForTextContainer:(id)arg1;
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2;
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1;
@property(readonly, nonatomic) NSString *viewIdentifier;
- (Class)attachmentViewControllerClass;
- (Class)attachmentViewClass;
- (id)newlyCreatedViewControllerForManualRendering:(_Bool)arg1 layoutManager:(id)arg2;
- (id)newlyCreatedViewForManualRendering;
- (id)newlyCreatedView;
@property(readonly, nonatomic) _Bool containsFindableText;
- (_Bool)supportsMultipleThumbnailsOnSameLine;
- (_Bool)supportsThumbnailView;
- (_Bool)requiresSpaceAfterAttachmentForPrinting;
- (id)attachmentAsNSTextAttachment;
- (id)attachmentFileWrapper;
- (id)initWithData:(id)arg1 ofType:(id)arg2;

@end
