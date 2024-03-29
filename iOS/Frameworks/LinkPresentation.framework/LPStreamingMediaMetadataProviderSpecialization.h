//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetImageGenerator, LPLinkMetadata, LPMediaAssetFetcher;

__attribute__((visibility("hidden")))
@interface LPStreamingMediaMetadataProviderSpecialization
{
    _Bool _cancelled;
    LPMediaAssetFetcher *_fetcher;
    AVAssetImageGenerator *_videoImageGenerator;
    LPLinkMetadata *_metadata;
}

+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
+ (unsigned long long)specialization;
- (void).cxx_destruct;
- (void)done;
- (void)fail;
- (void)cancel;
- (void)start;

@end

