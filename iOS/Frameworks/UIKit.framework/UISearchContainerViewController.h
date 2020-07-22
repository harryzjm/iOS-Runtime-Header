//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISearchController;

@interface UISearchContainerViewController
{
    UISearchController *_searchController;
}

@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_transitionsChildViewControllers;
- (void)_prepareForContainerTransition:(id)arg1;
- (void)_updateSearchControllerIfNecessary;
- (void)_presentSearchControllerIfNecessary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchController:(id)arg1;

@end
