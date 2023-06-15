//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@protocol CNMeCardSharingAvatarProvider <NSObject>
- (void)generateAvatarImageOfSize:(struct CGSize)arg1 imageHandler:(void (^)(UIImage *, NSError *))arg2;

@optional
- (void)generatePosterAnimationControllerWithHandler:(void (^)(UIViewController *, NSError *))arg1;
- (void)generatePosterImageWithHandler:(void (^)(UIImage *, NSError *))arg1;
@end

