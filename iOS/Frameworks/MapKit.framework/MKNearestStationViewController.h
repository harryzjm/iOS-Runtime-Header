//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <MapKit/MKStackingViewControllerPreferredSizeUse-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, NSString;
@protocol MKNearestStationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKNearestStationViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    NSString *_lineName;
    id <MKNearestStationViewControllerDelegate> _delegate;
    MKMapItem *_nearestStation;
    NSString *_errorMessage;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) MKMapItem *nearestStation; // @synthesize nearestStation=_nearestStation;
@property(nonatomic) __weak id <MKNearestStationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)transitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) _Bool requiresPreferredContentSizeInStackingView;
- (id)initWithLineName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

