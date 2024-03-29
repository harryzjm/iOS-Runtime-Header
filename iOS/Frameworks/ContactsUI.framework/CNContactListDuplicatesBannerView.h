//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel;
@protocol CNContactListDuplicatesBannerViewDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListDuplicatesBannerView : UIView
{
    long long _duplicatesCount;
    id <CNContactListDuplicatesBannerViewDelegate> _delegate;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <CNContactListDuplicatesBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long duplicatesCount; // @synthesize duplicatesCount=_duplicatesCount;
- (void)didTapViewDuplicates;
- (void)didTapDismiss;
- (id)countStringForLocalizedStringKey:(id)arg1 count:(long long)arg2;
- (void)setupSubviews;
- (id)initWithDuplicatesCount:(long long)arg1;

@end

