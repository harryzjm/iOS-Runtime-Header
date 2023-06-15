//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSString, PXStoryExportConfiguration;
@protocol PXDisplayAsset, PXDisplayCollection;

@protocol PXStoryExportActivityHelper <NSObject>
@property(readonly, nonatomic) id <PXDisplayCollection> collection;
@property(readonly, nonatomic) NSString *preferredExportFilename;
@property(readonly, nonatomic) id <PXDisplayAsset> iconAsset;
- (void)didEndExportWithConfiguration:(PXStoryExportConfiguration *)arg1;
- (void)didBeginExportWithConfiguration:(PXStoryExportConfiguration *)arg1;
- (void)requestExportConfigurationWithCompletionHandler:(void (^)(PXStoryExportConfiguration *, NSError *))arg1;
@end

