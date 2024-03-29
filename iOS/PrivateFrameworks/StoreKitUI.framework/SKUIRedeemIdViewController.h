//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, SKUIClientContext, SKUIRedeemIdManager, UIBarButtonItem, UITableView;
@protocol SKUIRedeemIdDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdViewController : UIViewController
{
    id <SKUIRedeemIdDelegate> _delegate;
    SKUIRedeemIdManager *_manager;
    SKUIClientContext *_clientContext;
    UITableView *_tableView;
    UIBarButtonItem *_nextButton;
    NSMutableDictionary *_fields;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUIRedeemIdManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <SKUIRedeemIdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_adjustInsetsForKeyboardFrameValue:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_subscribeToKeyboardEvents;
- (void)_nextPressed;
- (void)_cancelPressed;
- (void)_initializeNavigationItem;
- (void)_initializeTableView;
- (void)_initializeManager;
- (id)_finalOutputFields;
- (struct UIEdgeInsets)_edgeInsetsFromInsets:(struct UIEdgeInsets)arg1 usingNewTopInset:(double)arg2;
- (void)_reloadFooter;
- (_Bool)_validateForm;
- (void)_refreshNavigationItem;
- (id)_fieldForIndexPath:(id)arg1;
- (void)_updateFieldAtIndexPath:(id)arg1 withText:(id)arg2;
- (void)redeemIdManager:(id)arg1 didChangeToText:(id)arg2 forCellAtIndexPath:(id)arg3;
- (void)redeemIdManager:(id)arg1 movedToRowAtIndexPath:(id)arg2;
- (void)redeemIdManager:(id)arg1 didReturnText:(id)arg2 forCellAtIndexPath:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)initWithClientContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

