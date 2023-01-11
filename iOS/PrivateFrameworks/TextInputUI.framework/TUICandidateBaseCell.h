//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;
@protocol TUICandidateViewStyle;

@interface TUICandidateBaseCell : UICollectionViewCell
{
    id <TUICandidateViewStyle> _style;
    UIImageView *_backgroundImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateBackground:(id)arg1 color:(id)arg2;
- (id)cellBackgroundImage;
- (id)cellBackgroundColor;
- (void)updateColors;

@end
