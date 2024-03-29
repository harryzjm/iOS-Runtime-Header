//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UICollectionViewOutlineCell.h>

@class NSString, UIImage, UIImageView;
@protocol PUOutlineCellDelegate, PXNavigationListItem;

__attribute__((visibility("hidden")))
@interface PUOutlineCell : _UICollectionViewOutlineCell
{
    UIImage *_image;
    NSString *_text;
    id <PXNavigationListItem> _item;
    id <PUOutlineCellDelegate> _delegate;
    long long _style;
    long long _mediaRequestID;
    UIImageView *_accessoryImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(nonatomic) long long mediaRequestID; // @synthesize mediaRequestID=_mediaRequestID;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <PUOutlineCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <PXNavigationListItem> item; // @synthesize item=_item;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_renameItem:(id)arg1 toTitle:(id)arg2;
- (id)_editingConfigurationForState:(unsigned long long)arg1;
- (void)prepareForReuse;
- (_Bool)canBecomeFocused;
- (_Bool)_hasEditSpecificAccessories;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;

@end

