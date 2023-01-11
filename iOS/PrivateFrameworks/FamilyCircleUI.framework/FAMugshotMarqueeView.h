//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class FAProfilePictureStore, NSMutableDictionary, UIStackView;

@interface FAMugshotMarqueeView : UIView
{
    NSMutableDictionary *_memberPhotoMap;
    FAProfilePictureStore *_pictureStore;
    UIStackView *_marquee;
}

- (void).cxx_destruct;
- (id)_configureImageViewWithImage:(id)arg1;
- (id)_configureImageWithData:(id)arg1;
- (void)_configureStackView;
- (void)_configureMarquee;
- (void)_profilePictureStoreDidReloadImages:(id)arg1;
- (void)dealloc;
- (id)initWithFamilyCircle:(id)arg1 profilePictureStore:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
