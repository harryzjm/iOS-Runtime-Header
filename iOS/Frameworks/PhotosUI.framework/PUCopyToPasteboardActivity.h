//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICopyToPasteboardActivity.h>

#import <PhotosUI/PXActivity-Protocol.h>

@class NSString;
@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUCopyToPasteboardActivity : UICopyToPasteboardActivity <PXActivity>
{
    id <PXActivityItemSourceController> _itemSourceController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PXActivityItemSourceController> itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
