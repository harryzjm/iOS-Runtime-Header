//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;
@protocol TUPluggableDelegate;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI226MagazineFeedViewController : UIViewController
{
    MISSING_TYPE *styler;
    MISSING_TYPE *eventHandler;
    MISSING_TYPE *blueprintViewController;
    MISSING_TYPE *blueprintSelectionProvider;
    MISSING_TYPE *barCompressionManager;
    MISSING_TYPE *alertPresenter;
    MISSING_TYPE *offlineAlertControllerFactory;
    MISSING_TYPE *heightChangeRelayoutThreshold;
    MISSING_TYPE *viewportFromLastRelayout;
    MISSING_TYPE *isBeingUsedAsPlugin;
    MISSING_TYPE *pluggableDelegate;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak id <TUPluggableDelegate> pluggableDelegate; // @synthesize pluggableDelegate;
@property(nonatomic) _Bool isBeingUsedAsPlugin; // @synthesize isBeingUsedAsPlugin;

@end
