//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NCNotificationManagementSuggestionContentProviding-Protocol.h>

@class NSString;
@protocol NCNotificationManagementSuggestionDelegate;

@interface NCNotificationManagementSuggestionContentProvider <NCNotificationManagementSuggestionContentProviding>
{
    _Bool _auxiliaryOptionsVisible;
    NSString *_optionsSummaryText;
    unsigned long long _numberOfOptionButtons;
    id <NCNotificationManagementSuggestionDelegate> _suggestionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NCNotificationManagementSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate=_suggestionDelegate;
@property(nonatomic) _Bool auxiliaryOptionsVisible; // @synthesize auxiliaryOptionsVisible=_auxiliaryOptionsVisible;
@property(nonatomic) unsigned long long numberOfOptionButtons; // @synthesize numberOfOptionButtons=_numberOfOptionButtons;
@property(copy, nonatomic) NSString *optionsSummaryText; // @synthesize optionsSummaryText=_optionsSummaryText;
- (void)configureOptionButtons:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@property(readonly) Class superclass;

@end
