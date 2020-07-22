//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentManager/NSObject-Protocol.h>

@class DOCBrowserViewController, DOCConcreteLocation, DOCItem, NSArray;

@protocol DOCDocumentBrowserDelegate <NSObject>
- (void)browserDidFinishGatheringItemsAndThumbnails:(DOCBrowserViewController *)arg1;
- (void)dismissButtonWasTappedInBrowser:(DOCBrowserViewController *)arg1;
- (void)locationsButtonWasTappedInBrowser:(DOCBrowserViewController *)arg1 sourceRect:(struct CGRect)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateCurrentLocationCanSelect:(_Bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateCurrentLocationIsWritable:(_Bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateImportSupportInCurrentLocation:(_Bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateNumberOfItems:(unsigned long long)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 isDisplayingEmptyCollection:(_Bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didResolveShownLocation:(DOCConcreteLocation *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 wantsToShowLocation:(DOCConcreteLocation *)arg2 forceReplaceLocation:(_Bool)arg3;
- (void)browser:(DOCBrowserViewController *)arg1 didSelectItems:(NSArray *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didCommitPreviewOfDocument:(DOCItem *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didPickItem:(DOCItem *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 wantsToShowInfoForItem:(DOCItem *)arg2;
- (void)browserWantsToCreateNewFolder:(DOCBrowserViewController *)arg1;
- (void)browserWantsToCreateNewFile:(DOCBrowserViewController *)arg1;
@end

