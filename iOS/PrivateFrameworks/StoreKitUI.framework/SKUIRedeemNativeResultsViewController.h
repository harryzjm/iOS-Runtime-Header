//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUIRedeemResultsViewDelegate-Protocol.h>

@class NSOperationQueue, NSString, SKUIGiftItemView, SKUIItemStateCenter, SKUIRedeemITunesPassLockup, SKUIRedeemResultMessageView, SKUITextBoxView, SKUITextLayout, UIButton, UIImage, UIImageView;

@interface SKUIRedeemNativeResultsViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate>
{
    _Bool _extendedMessageIsExpanded;
    NSOperationQueue *_operationQueue;
    UIButton *_anotherButton;
    SKUITextLayout *_extendedMessageTextLayout;
    SKUITextBoxView *_extendedMessageView;
    UIImageView *_headerImageView;
    UIImage *_itemImage;
    SKUIItemStateCenter *_itemStateCenter;
    SKUIGiftItemView *_itemView;
    SKUIRedeemResultMessageView *_messageView;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    unsigned long long _currentItemStateFlag;
}

+ (_Bool)canShowResultsForRedeem:(id)arg1;
@property(nonatomic) _Bool extendedMessageIsExpanded; // @synthesize extendedMessageIsExpanded=_extendedMessageIsExpanded;
@property(nonatomic) unsigned long long currentItemStateFlag; // @synthesize currentItemStateFlag=_currentItemStateFlag;
@property(retain, nonatomic) SKUIRedeemITunesPassLockup *passbookLockup; // @synthesize passbookLockup=_passbookLockup;
@property(retain, nonatomic) SKUIRedeemResultMessageView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) SKUIGiftItemView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) SKUIItemStateCenter *itemStateCenter; // @synthesize itemStateCenter=_itemStateCenter;
@property(retain, nonatomic) UIImage *itemImage; // @synthesize itemImage=_itemImage;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) SKUITextBoxView *extendedMessageView; // @synthesize extendedMessageView=_extendedMessageView;
@property(retain, nonatomic) SKUITextLayout *extendedMessageTextLayout; // @synthesize extendedMessageTextLayout=_extendedMessageTextLayout;
@property(retain, nonatomic) UIButton *anotherButton; // @synthesize anotherButton=_anotherButton;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)_setHeaderImage:(id)arg1;
- (void)_setItemImage:(id)arg1;
- (void)_reloadSections;
- (double)_tableWidth;
- (void)_reloadResultViewMessage;
- (id)_passbookLearnMoreSection;
- (id)_itemView;
- (id)_item;
- (id)_linksSection;
- (id)_resultImageViewSection;
- (id)_messageViewSection;
- (id)_itemViewSection;
- (id)_headerImageViewSection;
- (id)_extendedMessageViewSection;
- (id)_emptySection;
- (id)_anotherButtonSection;
- (void)_redeemAnotherAction:(id)arg1;
- (void)_passbookLockupAction:(id)arg1;
- (void)_openAction:(id)arg1;
- (void)_extendedMessageAction:(id)arg1;
- (void)redeemResultsView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithRedeem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
