//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCBook, MCUIProfile;

__attribute__((visibility("hidden")))
@interface MCManagedMediaDetailsViewController
{
    MCUIProfile *_UIProfile;
    MCBook *_managedBook;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MCBook *managedBook; // @synthesize managedBook=_managedBook;
@property(retain, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
- (void)_profileChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_setup;
- (id)initWithUIProfile:(id)arg1 managedBook:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end
