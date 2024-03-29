//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKConversationListLargeTextCell.h"

@class NSObject, NSString;
@protocol CKConversationListCellDelegate;

__attribute__((visibility("hidden")))
@interface CKConversationListEmbeddedLargeTextTableViewCell : CKConversationListLargeTextCell
{
    struct UIEdgeInsets _marginInsets;
    struct CGRect _containerBounds;
}

+ (id)reuseIdentifier;
@property(nonatomic) struct CGRect containerBounds; // @synthesize containerBounds=_containerBounds;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)forceUnreadIndicatorVisibility:(_Bool)arg1 forConversation:(id)arg2 animated:(_Bool)arg3;
- (id)avatarView;
- (_Bool)avatarView:(id)arg1 shouldShowContact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak NSObject<CKConversationListCellDelegate> *delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldHidePreviewSummary;
@property(readonly) Class superclass;

@end

