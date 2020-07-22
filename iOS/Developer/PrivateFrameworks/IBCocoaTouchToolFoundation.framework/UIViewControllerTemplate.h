//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, NSValue, UINavigationItem, UITabBarItem, UIView;

@interface UIViewControllerTemplate
{
    _Bool _autoresizesArchivedViewToFullSize;
    _Bool _wantsFullScreenLayout;
    _Bool _definesPresentationContext;
    _Bool _providesPresentationContextTransitionStyle;
    _Bool _hidesBottomBarWhenPushed;
    _Bool _extendedLayoutIncludesOpaqueBars;
    _Bool _automaticallyAdjustsScrollViewInsets;
    UIViewControllerTemplate *_parentViewController;
    UINavigationItem *_navigationItem;
    UITabBarItem *_tabBarItem;
    NSArray *_storyboardSegueTemplates;
    NSArray *_storyboardPreviewSegueTemplates;
    NSArray *_storyboardCommitSegueTemplates;
    NSArray *_storyboardPreviewingRegistrants;
    NSArray *_topLevelObjectsToKeepAliveFromStoryboard;
    NSString *_title;
    NSDictionary *_externalObjectsTableForViewLoading;
    NSString *_nibName;
    NSString *_nibBundleIdentifier;
    NSString *_storyboardIdentifier;
    NSString *_restorationIdentifier;
    NSArray *_toolbarItems;
    NSArray *_childViewControllers;
    UIView *_view;
    long long _modalTransitionStyle;
    long long _modalPresentationStyle;
    NSValue *_contentSizeForViewInPopover;
    NSValue *_preferredContentSize;
    NSArray *_keyCommands;
    unsigned long long _edgesForExtendedLayout;
}

@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets; // @synthesize automaticallyAdjustsScrollViewInsets=_automaticallyAdjustsScrollViewInsets;
@property(nonatomic) _Bool extendedLayoutIncludesOpaqueBars; // @synthesize extendedLayoutIncludesOpaqueBars=_extendedLayoutIncludesOpaqueBars;
@property(nonatomic) unsigned long long edgesForExtendedLayout; // @synthesize edgesForExtendedLayout=_edgesForExtendedLayout;
@property(copy, nonatomic) NSArray *keyCommands; // @synthesize keyCommands=_keyCommands;
@property(copy, nonatomic) NSValue *preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(copy, nonatomic) NSValue *contentSizeForViewInPopover; // @synthesize contentSizeForViewInPopover=_contentSizeForViewInPopover;
@property(nonatomic) _Bool hidesBottomBarWhenPushed; // @synthesize hidesBottomBarWhenPushed=_hidesBottomBarWhenPushed;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) long long modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property(nonatomic) _Bool providesPresentationContextTransitionStyle; // @synthesize providesPresentationContextTransitionStyle=_providesPresentationContextTransitionStyle;
@property(nonatomic) _Bool definesPresentationContext; // @synthesize definesPresentationContext=_definesPresentationContext;
@property(nonatomic) _Bool wantsFullScreenLayout; // @synthesize wantsFullScreenLayout=_wantsFullScreenLayout;
@property(nonatomic) _Bool autoresizesArchivedViewToFullSize; // @synthesize autoresizesArchivedViewToFullSize=_autoresizesArchivedViewToFullSize;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(copy, nonatomic) NSArray *childViewControllers; // @synthesize childViewControllers=_childViewControllers;
@property(copy, nonatomic) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(copy, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
@property(copy, nonatomic) NSString *storyboardIdentifier; // @synthesize storyboardIdentifier=_storyboardIdentifier;
@property(copy, nonatomic) NSString *nibBundleIdentifier; // @synthesize nibBundleIdentifier=_nibBundleIdentifier;
@property(copy, nonatomic) NSString *nibName; // @synthesize nibName=_nibName;
@property(copy, nonatomic) NSDictionary *externalObjectsTableForViewLoading; // @synthesize externalObjectsTableForViewLoading=_externalObjectsTableForViewLoading;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *topLevelObjectsToKeepAliveFromStoryboard; // @synthesize topLevelObjectsToKeepAliveFromStoryboard=_topLevelObjectsToKeepAliveFromStoryboard;
@property(copy, nonatomic) NSArray *storyboardPreviewingRegistrants; // @synthesize storyboardPreviewingRegistrants=_storyboardPreviewingRegistrants;
@property(copy, nonatomic) NSArray *storyboardCommitSegueTemplates; // @synthesize storyboardCommitSegueTemplates=_storyboardCommitSegueTemplates;
@property(copy, nonatomic) NSArray *storyboardPreviewSegueTemplates; // @synthesize storyboardPreviewSegueTemplates=_storyboardPreviewSegueTemplates;
@property(copy, nonatomic) NSArray *storyboardSegueTemplates; // @synthesize storyboardSegueTemplates=_storyboardSegueTemplates;
@property(retain, nonatomic) UITabBarItem *tabBarItem; // @synthesize tabBarItem=_tabBarItem;
@property(retain, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(nonatomic) __weak UIViewControllerTemplate *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)createTabBarItemsIfNecessary;
- (void)createNavigationItemsIfNecessary;
- (void)dealloc;
- (void)setIbShadowedLayoutGuides:(id)arg1;
- (id)ibShadowedLayoutGuides;
- (_Bool)ibCapturePlaceholderTable:(id)arg1 forRelationship:(id)arg2 withContext:(id)arg3;

@end

