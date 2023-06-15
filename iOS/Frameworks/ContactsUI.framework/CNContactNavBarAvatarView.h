//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CNAvatarView, CNContact;

__attribute__((visibility("hidden")))
@interface CNContactNavBarAvatarView : UIView
{
    _Bool _showing;
    CNContact *_contact;
    CNAvatarView *_avatarView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)setShowing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

