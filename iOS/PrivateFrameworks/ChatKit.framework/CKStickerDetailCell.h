//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CKAnimatedImageView, NSDate, NSString, SKUIItemOfferButton, UIDateLabel, UILabel;

@interface CKStickerDetailCell : UITableViewCell
{
    id _stickerPreview;
    NSString *_senderText;
    NSString *_stickerPackText;
    NSDate *_timestampDate;
    CKAnimatedImageView *_stickerView;
    UILabel *_senderLabel;
    UILabel *_stickerPackLabel;
    UIDateLabel *_timestampLabel;
    SKUIItemOfferButton *_viewButton;
}

+ (id)identifier;
@property(retain, nonatomic) SKUIItemOfferButton *viewButton; // @synthesize viewButton=_viewButton;
@property(retain, nonatomic) UIDateLabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UILabel *stickerPackLabel; // @synthesize stickerPackLabel=_stickerPackLabel;
@property(retain, nonatomic) UILabel *senderLabel; // @synthesize senderLabel=_senderLabel;
@property(retain, nonatomic) CKAnimatedImageView *stickerView; // @synthesize stickerView=_stickerView;
@property(retain, nonatomic) NSDate *timestampDate; // @synthesize timestampDate=_timestampDate;
@property(retain, nonatomic) NSString *stickerPackText; // @synthesize stickerPackText=_stickerPackText;
@property(retain, nonatomic) NSString *senderText; // @synthesize senderText=_senderText;
@property(retain, nonatomic) id stickerPreview; // @synthesize stickerPreview=_stickerPreview;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

