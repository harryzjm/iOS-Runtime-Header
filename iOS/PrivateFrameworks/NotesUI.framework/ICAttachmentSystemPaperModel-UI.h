//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentSystemPaperModel.h>

@class UIImage;

@interface ICAttachmentSystemPaperModel (UI)
+ (_Bool)generatePreviewsForAttachment:(id)arg1 paperIdentifier:(id)arg2;
+ (id)previewImageForAttachment:(id)arg1 fullImage:(struct CGImage *)arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
+ (id)generateImageForAttachment:(id)arg1 fullResolution:(_Bool)arg2 appearanceInfo:(id)arg3;
+ (id)generateEmptyImage;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (id)activityItems;
- (id)activityItem;
@property(readonly, nonatomic) UIImage *imageForActivityItem;
- (void)attachmentModelDealloc;
- (_Bool)generatePreviewsInOperation:(id)arg1;
- (_Bool)needToGeneratePreviews;
- (_Bool)generatePreviewsDuringCloudActivity;
@end

