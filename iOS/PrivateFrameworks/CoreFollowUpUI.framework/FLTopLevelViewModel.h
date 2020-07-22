//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFollowUpUI/FLViewModel-Protocol.h>

@class FLFollowUpController, NSString;

@interface FLTopLevelViewModel : NSObject <FLViewModel>
{
    FLFollowUpController *_controller;
    int _notifyToken;
    CDUnknownBlockType _itemChangeObserver;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)setItemChangeHandler:(CDUnknownBlockType)arg1;
- (void)mapItemsToGroups:(id)arg1;
- (id)groups;
- (_Bool)allPendingItemsContains:(id)arg1;
- (void)_refreshItemsWithExtensionToItemMap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)extensionToItemMapFromItems:(id)arg1;
- (void)refreshItems:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshItemsForItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)allPendingItems;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
