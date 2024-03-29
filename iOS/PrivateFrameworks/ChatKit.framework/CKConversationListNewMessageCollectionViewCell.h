//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKConversationListEmbeddedCollectionViewCell.h"

@class NSObject, NSString;
@protocol CKConversationListCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CKConversationListNewMessageCollectionViewCell : CKConversationListEmbeddedCollectionViewCell
{
    NSObject<CKConversationListCollectionViewCellDelegate> *_delegate;
}

+ (Class)embeddedTableViewCellClass;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<CKConversationListCollectionViewCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2;
- (double)widthForDeterminingAvatarVisibility;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateFontSize;
- (void)didHoverOverCell:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)embeddedNewMessageTableViewCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

