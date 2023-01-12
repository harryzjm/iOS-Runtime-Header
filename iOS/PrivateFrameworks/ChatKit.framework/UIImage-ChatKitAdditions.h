//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (ChatKitAdditions)
+ (id)__ck_actionImageForSubscriptionShortName:(id)arg1 maxSubscriptionLabelWidth:(double)arg2 isFilled:(_Bool)arg3;
+ (id)__ck_actionImageForSubscriptionShortName:(id)arg1 maxSubscriptionLabelWidth:(double)arg2;
+ (id)ckTemplateImageNamed:(id)arg1;
+ (id)ckImageNamed:(id)arg1 withTintColor:(id)arg2;
+ (id)ckImageWithData:(id)arg1;
+ (id)abImageNamed:(id)arg1;
+ (id)ckColorImageOfSize:(struct CGSize)arg1 withColor:(id)arg2;
+ (id)ckImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)ckImageNamed:(id)arg1;
+ (id)placeholderExtensionIcon;
+ (id)badgeIconForImageNamed:(id)arg1 inBundle:(id)arg2;
- (id)ckImageWithTintColor:(id)arg1;
- (void)decode;
- (id)ck_imageCroppedToCircle;
- (id)__ck_ASTCRepresentation;
- (struct CGRect)__ck_contentsCenter;
- (id)__ck_imageWithOrientation:(long long)arg1;
- (id)__ck_resizableBalloonWithBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1 framed:(_Bool)arg2;
- (_Bool)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (id)iconForInterfaceStyle:(long long)arg1;
@end

