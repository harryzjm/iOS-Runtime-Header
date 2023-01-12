//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CNContactListActionDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListUndoableAction
{
}

- (_Bool)shouldReloadListOnCompletion;
- (void)performUndoAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CNContactListActionDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

