//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIDebuggingInformationTouchObserver-Protocol.h>
#import <UIKit/UIDebuggingInformationValueViewObserver-Protocol.h>
#import <UIKit/UIDebuggingInformationViewController-Protocol.h>
#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIDebuggingInformationInspectorDetailViewController, UIRefreshControl, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationHierarchyViewController <UIDebuggingInformationValueViewObserver, UIDebuggingInformationTouchObserver, UITableViewDataSource, UITableViewDelegate, UIDebuggingInformationViewController>
{
    NSMutableArray *_keys;
    NSMutableDictionary *_managedValues;
    NSMutableDictionary *_observersForKeys;
    NSMutableDictionary *_controlsForKeys;
    NSArray *_data;
    UIView *_rootViewForInspection;
    UITableView *_tableView;
    UIRefreshControl *_refreshControl;
    UIView *_highlightedView;
    struct CGColor *_originalBorderColor;
    double _originalBorderWidth;
    UIDebuggingInformationInspectorDetailViewController *_detail;
}

@property(retain, nonatomic) UIDebuggingInformationInspectorDetailViewController *detail; // @synthesize detail=_detail;
@property(nonatomic) double originalBorderWidth; // @synthesize originalBorderWidth=_originalBorderWidth;
@property(nonatomic) struct CGColor *originalBorderColor; // @synthesize originalBorderColor=_originalBorderColor;
@property(retain, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *rootViewForInspection; // @synthesize rootViewForInspection=_rootViewForInspection;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableDictionary *controlsForKeys; // @synthesize controlsForKeys=_controlsForKeys;
@property(retain, nonatomic) NSMutableDictionary *observersForKeys; // @synthesize observersForKeys=_observersForKeys;
@property(retain, nonatomic) NSMutableDictionary *managedValues; // @synthesize managedValues=_managedValues;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
- (void).cxx_destruct;
- (void)removePropertyObserver:(id)arg1 forKey:(id)arg2;
- (void)addPropertyObserver:(id)arg1 forKey:(id)arg2;
- (void)addPropertyForKey:(id)arg1 ofType:(long long)arg2 defaultValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)highlightView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (void)valueWithKey:(id)arg1 changedToValue:(id)arg2;
- (id)_observersForKey:(id)arg1;
- (id)getViewsRecursiveWithLevel:(unsigned long long)arg1 forView:(id)arg2;
- (void)refresh:(id)arg1;
- (void)didReceiveNewView:(id)arg1;
- (void)chooseNewTarget:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

