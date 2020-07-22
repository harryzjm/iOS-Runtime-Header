//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/QLPreviewItemURLProvider-Protocol.h>
#import <QuickLook/QLPreviewItemURLProviderDownloadTracker-Protocol.h>

@class NSItemProvider, NSNumber, NSString;
@protocol QLPreviewItemURLProvider;

__attribute__((visibility("hidden")))
@interface QLItemProviderFetcher <QLPreviewItemURLProviderDownloadTracker, QLPreviewItemURLProvider>
{
    NSItemProvider *_itemProvider;
    NSString *_contentType;
    NSNumber *_fileSize;
    id <QLPreviewItemURLProvider> _urlProvider;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _completionBlock;
    long long _fileExtensionHandle;
    id _lastContent;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id lastContent; // @synthesize lastContent=_lastContent;
@property(retain) id <QLPreviewItemURLProvider> urlProvider; // @synthesize urlProvider=_urlProvider;
@property(retain) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)newItemProvider;
- (id)itemSize;
- (id)fetchedContent;
- (id)shareableItem;
- (void)dealloc;
- (_Bool)canBeCanceled;
- (_Bool)isLongFetchOperation;
- (void)getURLWithDownloadTracker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatedURLWithProgress:(double)arg1;
- (void)_updateCompletionBlockWithAllowedOutputClasses:(id)arg1 URL:(id)arg2;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithContentType:(id)arg1 fileSize:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

