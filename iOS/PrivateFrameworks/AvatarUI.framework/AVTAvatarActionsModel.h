//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarEditorViewControllerDelegate-Protocol.h>

@class AVTAvatarRecord, AVTAvatarRecordDataSource, AVTUIEnvironment, AVTViewSessionProvider, NSArray, NSString;
@protocol AVTAvatarActionsModelDelegate;

@interface AVTAvatarActionsModel : NSObject <AVTAvatarEditorViewControllerDelegate>
{
    _Bool _isCreatingAvatar;
    _Bool _buttonsDisabled;
    id <AVTAvatarActionsModelDelegate> _delegate;
    AVTAvatarRecord *_avatarRecord;
    AVTAvatarRecordDataSource *_dataSource;
    AVTUIEnvironment *_environment;
    AVTViewSessionProvider *_avtViewSessionProvider;
    NSArray *_currentInlineActionButtons;
}

+ (_Bool)actionIsDestructive:(long long)arg1;
+ (id)buttonForActionType:(long long)arg1 withActionBlock:(CDUnknownBlockType)arg2;
+ (id)localizedTitleForActionType:(long long)arg1;
@property(nonatomic) _Bool buttonsDisabled; // @synthesize buttonsDisabled=_buttonsDisabled;
@property(nonatomic) _Bool isCreatingAvatar; // @synthesize isCreatingAvatar=_isCreatingAvatar;
@property(retain, nonatomic) NSArray *currentInlineActionButtons; // @synthesize currentInlineActionButtons=_currentInlineActionButtons;
@property(readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // @synthesize avtViewSessionProvider=_avtViewSessionProvider;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) AVTAvatarRecordDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) AVTAvatarRecord *avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property(nonatomic) __weak id <AVTAvatarActionsModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)presentEditor:(id)arg1 forCreating:(_Bool)arg2;
- (void)didTapDelete;
- (void)didTapDuplicate;
- (void)didTapEdit;
- (void)didTapCreateNew:(id)arg1;
- (id)createBarButtonItem;
- (id)generateInlineActionButtons;
- (void)updateForChangedContentCategorySize;
@property(readonly, nonatomic) NSArray *inlineActionButtons;
- (_Bool)canPerformActionType:(long long)arg1;
- (id)initWithAvatarRecord:(id)arg1 dataSource:(id)arg2 avtViewSessionProvider:(id)arg3 environment:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
