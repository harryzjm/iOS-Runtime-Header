//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CNAvatarViewController, CNContact, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkContactNameView : UIView
{
    CNContact *_contact;
    UILabel *_nameLabel;
    CNAvatarViewController *_avatarViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)setupConstraints;
- (void)setupAvatar;
- (void)setupNameLabel;
- (id)initWithName:(id)arg1;

@end

