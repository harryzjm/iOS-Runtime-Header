//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLook/QLPreviewControllerConforming-Protocol.h>

@class NSString;
@protocol QLPreviewControllerConformingDataSource, QLPreviewControllerConformingDelegate, QLPreviewItem;

@interface QLPreviewMockScene : NSObject <QLPreviewControllerConforming>
{
    long long currentPreviewItemIndex;
    id <QLPreviewControllerConformingDataSource> dataSource;
    id <QLPreviewControllerConformingDelegate> delegate;
}

+ (_Bool)canPreviewItem:(id)arg1;
+ (id)requestPreviewMockSceneActivation;
- (void).cxx_destruct;
@property(nonatomic) __weak id <QLPreviewControllerConformingDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <QLPreviewControllerConformingDataSource> dataSource; // @synthesize dataSource;
@property long long currentPreviewItemIndex; // @synthesize currentPreviewItemIndex;
- (void)dismissPreview;
- (void)presentPreview;
@property(readonly) id <QLPreviewItem> currentPreviewItem;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
