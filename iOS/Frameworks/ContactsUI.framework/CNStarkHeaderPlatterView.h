//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkHeaderPlatterView : UIView
{
    NSString *_labelText;
    UIImage *_accessoryImage;
    UILabel *_label;
    UIImageView *_accessory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void)_updateForFocusedState:(_Bool)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (id)initWithLabelText:(id)arg1 accessoryImage:(id)arg2;

@end

