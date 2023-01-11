//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/CNAvatarViewDelegate-Protocol.h>

@class NSString, NUIContainerBoxView, SearchUIContactsThumbnailView, SearchUIImageView;

@interface SearchUILeadingContactViewController <CNAvatarViewDelegate>
{
    SearchUIContactsThumbnailView *_avatarView;
    SearchUIImageView *_appIconBadgeView;
}

+ (_Bool)supportsRowModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SearchUIImageView *appIconBadgeView; // @synthesize appIconBadgeView=_appIconBadgeView;
@property(retain, nonatomic) SearchUIContactsThumbnailView *avatarView; // @synthesize avatarView=_avatarView;
- (unsigned long long)type;
- (_Bool)shouldVerticallyCenter;
- (id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)updateWithContacts:(id)arg1;
- (void)setUsesCompactWidth:(_Bool)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)setupView;
- (void)hide;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NUIContainerBoxView *view; // @dynamic view;

@end
