//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentModel.h>

@class NSArray;

@interface ICAttachmentModel (UI)
+ (id)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2 uti:(id)arg3;
+ (id)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (id)fileIconWithPreferredSize:(struct CGSize)arg1;
- (id)activityItems;
@property(readonly, nonatomic) NSArray *quicklookPreviewItems;
@property(readonly, nonatomic) CDUnknownBlockType genericBrickLargeThumbnailCreator;
@property(readonly, nonatomic) CDUnknownBlockType genericBrickThumbnailCreator;
@property(readonly, nonatomic) CDUnknownBlockType genericListThumbnailCreator;
@property(readonly, nonatomic) _Bool needToPostProcessAttachment;
- (void)didCancelPreviewGeneratorOperation;
@property(readonly, nonatomic) _Bool requiresNetworkToGeneratePreview;
@property(readonly, nonatomic) _Bool generatePreviewsDuringCloudActivity;
@property(readonly, nonatomic) _Bool generateAsynchronousPreviews;
@property(readonly, nonatomic) _Bool needToGeneratePreviews;
- (void)classifyImageInOperation:(id)arg1;
- (void)generateOCRInOperation:(id)arg1;
- (_Bool)generatePreviewsInOperation:(id)arg1;
- (id)itemProvider;
@end

