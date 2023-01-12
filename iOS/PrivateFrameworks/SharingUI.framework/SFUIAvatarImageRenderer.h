//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAvatarImageRenderer;

__attribute__((visibility("hidden")))
@interface SFUIAvatarImageRenderer : NSObject
{
    CNAvatarImageRenderer *_imageRenderer;
}

+ (id)avatarImageRender;
- (void).cxx_destruct;
@property(retain, nonatomic) CNAvatarImageRenderer *imageRenderer; // @synthesize imageRenderer=_imageRenderer;
- (id)placeholderImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)avatarImageForContacts:(id)arg1 scope:(id)arg2;
- (id)init;

@end

