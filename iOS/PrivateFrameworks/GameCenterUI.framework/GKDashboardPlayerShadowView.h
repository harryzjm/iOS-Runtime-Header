//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GKDashboardPlayerPhotoView, GKPlayer, UICollectionViewCell;

@interface GKDashboardPlayerShadowView : UIView
{
    UICollectionViewCell *_parentCell;
    GKDashboardPlayerPhotoView *_photoView;
}

@property(nonatomic) GKDashboardPlayerPhotoView *photoView; // @synthesize photoView=_photoView;
@property(nonatomic) UICollectionViewCell *parentCell; // @synthesize parentCell=_parentCell;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool isUsingPlaceholder; // @dynamic isUsingPlaceholder;
@property(readonly, nonatomic) UIView *parentView; // @dynamic parentView;
- (void)invalidatePhoto;
@property(retain, nonatomic) GKPlayer *player; // @dynamic player;
- (void)setupPhoto;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
