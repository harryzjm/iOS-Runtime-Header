//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXStoryFeedChromeController-Protocol.h>

@class NSString, PXStoryMemoryFeedDataSourceManager, UINavigationItem;

@interface PXStoryMemoryFeedChromeController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryFeedChromeController>
{
    _Bool _isActive;
    UINavigationItem *_navigationItem;
    PXStoryMemoryFeedDataSourceManager *_dataSourceManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXStoryMemoryFeedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateChrome;
- (void)_invalidateChrome;
- (void)_handleFavoritesToggleButton:(id)arg1;
- (id)initWithViewController:(id)arg1 dataSourceManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
