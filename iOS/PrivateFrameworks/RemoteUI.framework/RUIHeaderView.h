//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <RemoteUI/RUIHeader-Protocol.h>

@class NSString, RUILinkLabel, UIImageView, UILabel;

@interface RUIHeaderView : UIView <RUIHeader>
{
    UILabel *_headerLabel;
    RUILinkLabel *_detailHeaderLabel;
    UILabel *_subHeaderLabel;
    UIImageView *_iconView;
    int _imageAlignment;
    _Bool _isFirstSection;
    _Bool _customIconSize;
    struct UIEdgeInsets _margins;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
- (double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
- (void)layoutSubviews;
- (double)_titleSubtitlePaddingInView:(id)arg1;
- (double)_imageTitlePaddingInView:(id)arg1;
- (_Bool)_hasIcon;
- (void)setSectionIsFirst:(_Bool)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setIconImage:(id)arg1;
- (id)iconImage;
- (void)setDetailHeaderColor:(id)arg1;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
- (id)detailHeaderLabel;
- (void)setSubHeaderColor:(id)arg1;
- (void)setSubHeaderAlignment:(long long)arg1;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (id)subHeaderLabel;
- (void)setHeaderColor:(id)arg1;
- (void)setHeaderAlignment:(long long)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)headerLabel;
- (id)initWithAttributes:(id)arg1;
- (double)_headerOffsetInView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
