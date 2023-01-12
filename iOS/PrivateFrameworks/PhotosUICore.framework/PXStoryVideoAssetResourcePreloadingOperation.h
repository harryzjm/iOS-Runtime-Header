//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXDisplayAssetVideoContentProvider, PXVideoSessionManager;

@interface PXStoryVideoAssetResourcePreloadingOperation <PXChangeObserver>
{
    _Bool _isExporting;
    PXVideoSessionManager *_videoSessionManager;
    PXDisplayAssetVideoContentProvider *_videoContentProvider;
    CDStruct_e83c9415 _downloadTimeRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isExporting; // @synthesize isExporting=_isExporting;
@property(retain) PXDisplayAssetVideoContentProvider *videoContentProvider; // @synthesize videoContentProvider=_videoContentProvider;
@property(readonly, nonatomic) PXVideoSessionManager *videoSessionManager; // @synthesize videoSessionManager=_videoSessionManager;
@property(readonly, nonatomic) CDStruct_e83c9415 downloadTimeRange; // @synthesize downloadTimeRange=_downloadTimeRange;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)cancel;
- (void)px_start;
- (id)diagnosticDescription;
- (id)initWithDisplayAssetResource:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithVideoAssetResource:(id)arg1 mediaProvider:(id)arg2 downloadTimeRange:(CDStruct_e83c9415)arg3 videoSessionManager:(id)arg4 isExporting:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
