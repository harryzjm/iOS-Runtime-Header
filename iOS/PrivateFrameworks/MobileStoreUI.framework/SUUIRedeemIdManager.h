//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, SUUIClientContext, SUUIPinnedFooterView, UITableView;
@protocol SUUIRedeemIdManagerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIRedeemIdManager : NSObject
{
    id <SUUIRedeemIdManagerDelegate> _delegate;
    UITableView *_tableView;
    NSIndexPath *_activeIndexPath;
    SUUIClientContext *_clientContext;
    SUUIPinnedFooterView *_pinnedFooterView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SUUIPinnedFooterView *pinnedFooterView; // @synthesize pinnedFooterView=_pinnedFooterView;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) NSIndexPath *activeIndexPath; // @synthesize activeIndexPath=_activeIndexPath;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SUUIRedeemIdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_autoCapitalizationTypeForIndexPath:(id)arg1;
- (long long)_returnKeyTypeForIndexPath:(id)arg1;
- (long long)_keyboardTypeForIndexPath:(id)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (double)_tableViewNonFooterContentHeight;
- (double)_heightForDisclosureFooter;
- (id)_nextIndexPath:(id)arg1;
- (id)_disclosureAttributedString;
- (id)_placeholderTextForIndexPath:(id)arg1;
- (id)_pcLinkString;
- (id)_regulationsLinkString;
- (void)dismissActiveCell;
- (void)setFooterHidden:(_Bool)arg1;
- (void)handleNextPressed;
- (void)redeemIdCell:(id)arg1 didChangeToText:(id)arg2;
- (void)redeemIdCell:(id)arg1 didReturnWithText:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithClientContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

