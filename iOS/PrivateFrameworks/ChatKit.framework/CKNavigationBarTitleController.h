//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAvatarPickerViewController, CKConversation, NSArray, UIBarButtonItem, _UINavigationBarTitleView;
@protocol CKNavigationBarTitleControllerDelegate;

@interface CKNavigationBarTitleController : NSObject
{
    _Bool _editing;
    CKConversation *_conversation;
    CKAvatarPickerViewController *_avatarPickerViewController;
    _UINavigationBarTitleView *_titleView;
    id <CKNavigationBarTitleControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CKNavigationBarTitleControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) _UINavigationBarTitleView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) CKAvatarPickerViewController *avatarPickerViewController; // @synthesize avatarPickerViewController=_avatarPickerViewController;
@property(readonly, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (id)_conversationList;
@property(readonly, nonatomic) UIBarButtonItem *deleteAllBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property(readonly, nonatomic) NSArray *rightBarButtonItems;
@property(readonly, nonatomic) NSArray *leftBarButtonItems;
- (void)_editCancelButtonPressed;
- (void)_deleteAllBarButtonItemPressed;
- (void)_pressedAvatarView;
- (id)initWithConversation:(id)arg1;

@end
