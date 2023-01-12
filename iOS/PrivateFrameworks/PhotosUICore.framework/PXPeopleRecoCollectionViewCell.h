//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface PXPeopleRecoCollectionViewCell : UICollectionViewCell
{
    UIImageView *_faceView;
    UIImageView *_checkView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *checkView; // @synthesize checkView=_checkView;
@property(readonly, nonatomic) UIImageView *faceView; // @synthesize faceView=_faceView;
- (_Bool)hasImageSet;
- (void)setImage:(id)arg1 contentsRect:(struct CGRect)arg2;
- (void)setIsRejected:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
