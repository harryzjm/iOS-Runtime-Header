//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class EMCachingContactStore, MISSING_TYPE, MessageListCellLayoutValues, MessageListCellLayoutValuesHelper, MessageListCellViewModel, NSString, UIBackgroundConfiguration, UIButton, UICellConfigurationState, UIListContentConfiguration;

__attribute__((visibility("hidden")))
@interface _TtC6MailUI22MUIMessageListCellView : UIView
{
    MISSING_TYPE *chevronType;
    MISSING_TYPE *isEditing;
    MISSING_TYPE *isCompact;
    MISSING_TYPE *shouldAnnotateReplyOrForward;
    MISSING_TYPE *annotatedRelationshipType;
    MISSING_TYPE *layoutValuesHelper;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *summary;
    MISSING_TYPE *$__lazy_storage_$_disclosureButton;
    MISSING_TYPE *configurationState;
    MISSING_TYPE *contentConfiguration;
    MISSING_TYPE *backgroundConfiguration;
    MISSING_TYPE *contactStore;
    MISSING_TYPE *$__lazy_storage_$_subjectLabel;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)applyIndicatorPreviewChangeAction:(id)arg1;
- (void)refreshForSignificantTimeChange;
- (void)setDisclosureEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDisplayVIP:(_Bool)arg1;
- (void)setDisplayUnreadDot:(_Bool)arg1;
@property(nonatomic, retain) EMCachingContactStore *contactStore; // @synthesize contactStore;
@property(nonatomic, retain) UIBackgroundConfiguration *backgroundConfiguration; // @synthesize backgroundConfiguration;
@property(nonatomic, retain) UIListContentConfiguration *contentConfiguration; // @synthesize contentConfiguration;
@property(nonatomic, retain) UICellConfigurationState *configurationState; // @synthesize configurationState;
@property(nonatomic, retain) UIButton *disclosureButton;
@property(nonatomic, copy) NSString *summary;
@property(nonatomic, retain) MessageListCellViewModel *viewModel; // @synthesize viewModel;
@property(nonatomic, readonly) MessageListCellLayoutValues *layoutValues;
@property(nonatomic, retain) MessageListCellLayoutValuesHelper *layoutValuesHelper; // @synthesize layoutValuesHelper;
@property(nonatomic) long long annotatedRelationshipType; // @synthesize annotatedRelationshipType;
@property(nonatomic) _Bool shouldAnnotateReplyOrForward; // @synthesize shouldAnnotateReplyOrForward;
@property(nonatomic) _Bool compact; // @synthesize compact=isCompact;
- (_Bool)isCompact;
@property(nonatomic) _Bool editing; // @synthesize editing=isEditing;
- (_Bool)isEditing;
@property(nonatomic) long long chevronType; // @synthesize chevronType;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

