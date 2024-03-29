//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPFileMetadata, LPImage, LPLinkMetadata, NSObject, NSString, NSURL;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface LPFileMetadataProviderSpecialization
{
    _Bool _cancelled;
    NSURL *_temporaryFileURL;
    LPImage *_originalImage;
    LPImage *_quickLookThumbnail;
    LPImage *_smallQuickLookThumbnail;
    NSString *_MIMEType;
    NSString *_UTI;
    LPLinkMetadata *_metadata;
    LPFileMetadata *_fileMetadata;
    NSObject<OS_dispatch_group> *_fetchGroup;
}

+ (id)_thumbnailQueue;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
+ (unsigned long long)specialization;
- (void).cxx_destruct;
- (void)metadataProviderSpecializationDidFail:(id)arg1;
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;
- (void)complete;
- (void)updatePreliminaryMetadata;
- (void)cancel;
- (void)cleanUpTemporaryFile;
- (void)generateFallbackMetadataForUnreachableFile:(id)arg1;
- (void)fetchMetadataForReachableFile:(id)arg1;
- (_Bool)shouldUseQuickLookForFileType;
- (void)fetchMetadataFromURL:(id)arg1;
- (void)fetchIconAndThumbnailFromQuickLookForURL:(id)arg1;
- (void)requestQuickLookThumbnailForURL:(id)arg1 size:(struct CGSize)arg2 badgeType:(unsigned long long)arg3 image:(id *)arg4;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

