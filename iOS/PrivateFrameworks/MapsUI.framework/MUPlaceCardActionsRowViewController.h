//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MUPlaceCardActionsRowView, NSArray;
@protocol MKPlaceActionManagerProtocol, MUPlaceCardActionsRowViewMenuProvider;

__attribute__((visibility("hidden")))
@interface MUPlaceCardActionsRowViewController : UIViewController
{
    NSArray *_items;
    id <MKPlaceActionManagerProtocol> _actionManager;
    id <MUPlaceCardActionsRowViewMenuProvider> _menuProvider;
    MUPlaceCardActionsRowView *_actionsRowView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MUPlaceCardActionsRowView *actionsRowView; // @synthesize actionsRowView=_actionsRowView;
@property(nonatomic) __weak id <MUPlaceCardActionsRowViewMenuProvider> menuProvider; // @synthesize menuProvider=_menuProvider;
@property(nonatomic) __weak id <MKPlaceActionManagerProtocol> actionManager; // @synthesize actionManager=_actionManager;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSArray *actionButtons;
- (void)updateActionsRowView;
- (id)initWithStyle:(unsigned long long)arg1;
- (_Bool)_canShowWhileLocked;

@end

