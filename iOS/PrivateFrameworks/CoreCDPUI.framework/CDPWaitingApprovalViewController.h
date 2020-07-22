//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPUI/UITableViewDataSource-Protocol.h>
#import <CoreCDPUI/UITableViewDelegate-Protocol.h>

@class CDPRemoteValidationEscapeOffer, NSString, UIActivityIndicatorView, UIButton, UILabel;

@interface CDPWaitingApprovalViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIActivityIndicatorView *_spinner;
    UILabel *_waitingLabel;
    UIButton *_escapeButton;
    CDPRemoteValidationEscapeOffer *_escapeOffer;
}

- (void).cxx_destruct;
- (void)escapeOfferSelectedWithOption:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)remoteApprovalSucceeded;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithEscapeOffer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

