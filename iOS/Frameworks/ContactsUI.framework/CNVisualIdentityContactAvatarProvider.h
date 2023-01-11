//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAvatarImageRenderer;
@protocol CNAvatarImageRenderingScope;

@interface CNVisualIdentityContactAvatarProvider : NSObject
{
    CNAvatarImageRenderer *_avatarImageRenderer;
    id <CNAvatarImageRenderingScope> _renderingScope;
}

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CNAvatarImageRenderingScope> renderingScope; // @synthesize renderingScope=_renderingScope;
@property(retain, nonatomic) CNAvatarImageRenderer *avatarImageRenderer; // @synthesize avatarImageRenderer=_avatarImageRenderer;
- (id)avatarImageForContact:(id)arg1 withSize:(struct CGSize)arg2 includePlaceholder:(_Bool)arg3 imageHandler:(CDUnknownBlockType)arg4;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end
