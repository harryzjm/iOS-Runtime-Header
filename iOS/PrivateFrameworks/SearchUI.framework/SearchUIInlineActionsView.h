//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUIContainerStackView.h>

@class CNActionView, CNContactInlineActionsViewController;

@interface SearchUIInlineActionsView : NUIContainerStackView
{
    CNActionView *_messageButton;
    CNContactInlineActionsViewController *_inlineActionsViewController;
    CNActionView *_directionsButton;
}

@property(retain) CNActionView *directionsButton; // @synthesize directionsButton=_directionsButton;
@property(retain) CNContactInlineActionsViewController *inlineActionsViewController; // @synthesize inlineActionsViewController=_inlineActionsViewController;
@property(retain) CNActionView *messageButton; // @synthesize messageButton=_messageButton;
- (void).cxx_destruct;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithMessageMbutton:(id)arg1 inlineActionsViewController:(id)arg2 directionsButton:(id)arg3;

@end
