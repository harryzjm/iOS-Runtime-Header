//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WFContentItemsViewController : UITableViewController
{
    _Bool _allowsCoercion;
    NSArray *_contentItems;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsCoercion; // @synthesize allowsCoercion=_allowsCoercion;
@property(retain, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

