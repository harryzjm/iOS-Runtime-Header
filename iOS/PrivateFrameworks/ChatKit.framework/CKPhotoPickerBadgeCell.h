//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView;

@interface CKPhotoPickerBadgeCell : UICollectionReusableView
{
    _Bool _selected;
    UIImageView *_checkmarkImageView;
}

@property(retain, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

