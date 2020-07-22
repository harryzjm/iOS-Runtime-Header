//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSObject, NSString, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer;
@protocol PLAlbumProtocol;

@interface PLEmptyAlbumView : UIView
{
    UIImage *_image;
    UIImage *_landscapeImage;
    NSString *_title;
    NSString *_message;
    struct NSObject *_album;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILongPressGestureRecognizer *_longPressRecognizer;
    int _filter;
    _Bool _isCameraAlbum;
    _Bool _useLargeImages;
    _Bool _filterInUse;
    int _currentOrientation;
    struct UIEdgeInsets _edgeInsets;
    _Bool _isSharedPhotoStreamList;
}

@property(retain, nonatomic) NSObject<PLAlbumProtocol> *album; // @synthesize album=_album;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) int filter; // @synthesize filter=_filter;
- (_Bool)canBecomeFirstResponder;
- (void)paste:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_longPressGesture:(id)arg1;
- (id)_newTextViewWithText:(id)arg1;
- (id)_newLabelWithText:(id)arg1;
- (id)_messageForAlbum:(struct NSObject *)arg1;
- (id)_titleForAlbum:(struct NSObject *)arg1;
- (id)_emptyRollImageForAlbum:(struct NSObject *)arg1 interfaceOrientation:(long long)arg2;
- (void)_sizeLabelToFitView:(id)arg1;
- (void)layoutSubviews;
- (void)setIsSharedPhotoStreamList:(_Bool)arg1;
- (void)setIsCameraAlbum:(_Bool)arg1;
- (void)setPortraitImage:(id)arg1 landscapeImage:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 useLargeImages:(_Bool)arg2;

@end

