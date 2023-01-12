//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (MobileSafariFrameworkExtras)
+ (id)sf_imageNamed:(id)arg1;
- (_Bool)sf_isLaunchImageSizedForOrientation:(long long)arg1 includesStatusBar:(_Bool *)arg2;
@property(readonly, nonatomic) long long sf_tabSnapshotEffectsVersion;
- (id)sf_initWithCGImage:(struct CGImage *)arg1 tabSnapshotEffectsVersion:(long long)arg2;
@property(nonatomic, setter=sf_setIsMonogram:) _Bool sf_isMonogram;
- (void)sf_registerFaviconForDarkUserInterfaceStyle;
- (_Bool)sf_hasRegisteredFaviconForDarkUserInterfaceStyle;
@property(readonly, nonatomic) _Bool sf_shouldApplyBackingForDarkBackdrop;
@end
