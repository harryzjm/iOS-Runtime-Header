//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/NSObject-Protocol.h>

@class EMCachingContactStore, MSTriageChangeAction, MessageListCellLayoutValues, MessageListCellLayoutValuesHelper, MessageListCellViewModel, NSString, UIBackgroundConfiguration, UIButton, UICellConfigurationState, UIListContentConfiguration;

@protocol MessageListCellViewable <NSObject>
@property(retain, nonatomic) EMCachingContactStore *contactStore;
@property(retain, nonatomic) UIBackgroundConfiguration *backgroundConfiguration;
@property(retain, nonatomic) UIListContentConfiguration *contentConfiguration;
@property(retain, nonatomic) UICellConfigurationState *configurationState;
@property(readonly, nonatomic) UIButton *disclosureButton;
@property(copy, nonatomic) NSString *summary;
@property(retain, nonatomic) MessageListCellViewModel *viewModel;
@property(readonly, nonatomic) MessageListCellLayoutValues *layoutValues;
@property(retain, nonatomic) MessageListCellLayoutValuesHelper *layoutValuesHelper;
@property(nonatomic) long long annotatedRelationshipType;
@property(nonatomic) _Bool shouldAnnotateReplyOrForward;
@property(nonatomic, getter=isCompact) _Bool compact;
@property(nonatomic, getter=isEditing) _Bool editing;
@property(nonatomic) long long chevronType;
- (void)prepareForReuse;
- (void)applyIndicatorPreviewChangeAction:(MSTriageChangeAction *)arg1;
- (void)refreshForSignificantTimeChange;
- (void)setDisclosureEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDisplayVIP:(_Bool)arg1;
- (void)setDisplayUnreadDot:(_Bool)arg1;
@end

