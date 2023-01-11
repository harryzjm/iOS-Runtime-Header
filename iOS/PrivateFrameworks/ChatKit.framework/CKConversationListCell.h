//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <ChatKit/CKConversationListCell-Protocol.h>

@class CKAvatarView, CKConversation, CKLabel, NSDate, NSObject, NSString, UIDateLabel, UIImageView, UILabel;
@protocol CKConversationListCellDelegate;

@interface CKConversationListCell : UITableViewCell <CKConversationListCell>
{
    UIDateLabel *_dateLabel;
    UILabel *_summaryLabel;
    UIImageView *_chevronImageView;
    CKLabel *_fromLabel;
    _Bool _isPlaceholder;
    NSString *_searchSummaryText;
    NSString *_searchMessageGUID;
    NSDate *_searchMessageDate;
    _Bool _verified;
    NSObject<CKConversationListCellDelegate> *_delegate;
    CKConversation *_conversation;
}

+ (double)cellHeight;
+ (id)identifierForConversation:(id)arg1;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak NSObject<CKConversationListCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(copy, nonatomic) NSString *searchSummaryText; // @synthesize searchSummaryText=_searchSummaryText;
@property(retain, nonatomic) NSDate *searchMessageDate; // @synthesize searchMessageDate=_searchMessageDate;
@property(copy, nonatomic) NSString *searchMessageGUID; // @synthesize searchMessageGUID=_searchMessageGUID;
- (void).cxx_destruct;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateForEditing:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithSearchResult:(id)arg1;
- (id)_makeSummaryAttributedStringWithText:(id)arg1;
- (void)updateSummaryTextForConversation:(id)arg1 fastPreview:(_Bool)arg2;
- (void)updateContentsForConversation:(id)arg1 fastPreview:(_Bool)arg2;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateUnreadIndicatorWithImage:(id)arg1;
- (_Bool)showingEditControl;
- (void)increaseContrastDidChange;
- (void)contentSizeCategoryDidChange;
- (void)_increaseContrastDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)prepareForReuse;
@property(readonly, nonatomic) CKAvatarView *avatarView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

