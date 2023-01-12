//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/UIContextMenuInteractionDelegate-Protocol.h>

@class NCNotificationRequest, NSString, UIContextMenuInteraction, UIView;
@protocol NCNotificationOptionsMenuSettingsDelegate;

@interface NCNotificationOptionsMenu : NSObject <UIContextMenuInteractionDelegate>
{
    NCNotificationRequest *_request;
    UIView *_presentingView;
    id <NCNotificationOptionsMenuSettingsDelegate> _settingsDelegate;
    UIContextMenuInteraction *_menu;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIContextMenuInteraction *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) id <NCNotificationOptionsMenuSettingsDelegate> settingsDelegate; // @synthesize settingsDelegate=_settingsDelegate;
@property(retain, nonatomic) UIView *presentingView; // @synthesize presentingView=_presentingView;
@property(retain, nonatomic) NCNotificationRequest *request; // @synthesize request=_request;
- (_Bool)_canAddToContacts;
- (id)_sender;
- (id)_threadIdentifierOrNil;
- (id)_threadName;
- (_Bool)_isCommunicationThread;
- (id)_sectionIdentifier;
- (_Bool)_isContactAllowedForMode:(id)arg1;
- (_Bool)_isApplicationAllowedForMode:(id)arg1;
- (_Bool)_didContactBreakthroughMode:(id)arg1;
- (_Bool)_didApplicationBreakthroughMode:(id)arg1;
- (_Bool)_didBreakthroughMode:(id)arg1;
- (id)_offActionForContactForMode:(id)arg1;
- (id)_offActionForApplicationForMode:(id)arg1;
- (id)_addToContactsAction;
- (id)_deliverImmediatelyAcion;
- (id)_sendToDigestAction;
- (id)_unmuteActionForMuteAssertionLevel:(unsigned long long)arg1;
- (id)_muteForTodayAction;
- (id)_muteForOneHourAction;
- (id)_timeSensitiveOnAction;
- (id)_timeSensitiveOffAction;
- (id)_criticalOnAction;
- (id)_criticalOffAction;
- (id)_onActionWithSectionDisplayName:(id)arg1;
- (id)_offActionWithSectionDisplayName:(id)arg1;
- (id)_settingsActionForSectionSettings:(id)arg1;
- (id)_customSettingsActionForSectionSettings:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)dismissMenu;
- (void)presentMenu;
- (id)initWithNotificationRequest:(id)arg1 presentingView:(id)arg2 settingsDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
