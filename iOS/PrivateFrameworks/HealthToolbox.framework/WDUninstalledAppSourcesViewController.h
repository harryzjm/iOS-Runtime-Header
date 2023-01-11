//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKSourceListDataSourceObserver-Protocol.h>

@class HKSourceListDataSource, NSArray, NSString, UIImage, WDProfile;

__attribute__((visibility("hidden")))
@interface WDUninstalledAppSourcesViewController : HKTableViewController <HKSourceListDataSourceObserver>
{
    WDProfile *_profile;
    HKSourceListDataSource *_dataSource;
    NSArray *_uninstalledSources;
}

@property(copy, nonatomic) NSArray *uninstalledSources; // @synthesize uninstalledSources=_uninstalledSources;
@property(retain, nonatomic) HKSourceListDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateUninstalledSources;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
@property(readonly) UIImage *uninistalledAppImage;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
