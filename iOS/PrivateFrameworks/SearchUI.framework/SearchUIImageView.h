//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/TLKImageView.h>

#import <SearchUI/CNAvatarViewDelegate-Protocol.h>

@class CNAvatarView, NSString, SFImage, SearchUIButton, UIView;

@interface SearchUIImageView : TLKImageView <CNAvatarViewDelegate>
{
    SFImage *_currentImage;
    SearchUIButton *_overlayPlayButton;
    unsigned long long _searchUIStyle;
    CNAvatarView *_avatarView;
    UIView *_tintView;
}

+ (id)thumbnailForResult:(id)arg1;
+ (id)imageViewWithImage:(id)arg1 style:(unsigned long long)arg2;
@property(retain) UIView *tintView; // @synthesize tintView=_tintView;
@property(retain) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property unsigned long long searchUIStyle; // @synthesize searchUIStyle=_searchUIStyle;
@property(retain) SearchUIButton *overlayPlayButton; // @synthesize overlayPlayButton=_overlayPlayButton;
@property(retain) SFImage *currentImage; // @synthesize currentImage=_currentImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)updateWithImage:(id)arg1 needsOverlayButton:(_Bool)arg2 preventImageScaling:(_Bool)arg3 useMinimumWidthIfPossible:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateWithImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateWithImage:(id)arg1;
- (void)appIconDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

