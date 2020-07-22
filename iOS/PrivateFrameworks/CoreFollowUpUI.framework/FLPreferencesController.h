//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLPreferencesFollowUpItemListViewController, NSSet, PSListController;
@protocol FLViewModel;

@interface FLPreferencesController : NSObject
{
    id <FLViewModel> _topViewModel;
    FLPreferencesFollowUpItemListViewController *_controller;
    NSSet *_spyglassWhitelist;
    _Bool _activityIndicatorActive;
    PSListController *_listViewController;
    CDUnknownBlockType _itemChangeObserver;
}

@property(copy, nonatomic) CDUnknownBlockType itemChangeObserver; // @synthesize itemChangeObserver=_itemChangeObserver;
@property(nonatomic) __weak PSListController *listViewController; // @synthesize listViewController=_listViewController;
- (void).cxx_destruct;
- (void)stopSpinnerForSpecifier:(id)arg1;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)_presentSpecifier:(id)arg1;
- (void)_handleEmptyRefreshResult:(id)arg1;
- (void)_refreshItemsAndPresentDetailForSpecifier:(id)arg1;
- (void)loadSpecifier:(id)arg1;
- (id)spyglassSpecifiers;
- (void)_updateSpecifier:(id)arg1 withCommonPropertiesForGroup:(id)arg2;
- (id)_urlBasedSpecifierWithName:(id)arg1;
- (id)_extensionSupportingSpecifierWithName:(id)arg1;
- (id)_specifierForGroup:(id)arg1;
- (id)_specifierForItem:(id)arg1 group:(id)arg2;
- (id)topLevelSpecifiers;
- (id)initWithViewModel:(id)arg1;
- (id)init;

@end
