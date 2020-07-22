//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString;
@protocol SKUIRedeemResultsViewDelegate;

@interface SKUIRedeemResultsView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_sections;
    struct UIEdgeInsets _contentInsetAdjustments;
    id <SKUIRedeemResultsViewDelegate> _resultsDelegate;
}

@property(nonatomic) __weak id <SKUIRedeemResultsViewDelegate> resultsDelegate; // @synthesize resultsDelegate=_resultsDelegate;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

