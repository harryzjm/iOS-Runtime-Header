//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNPhotoPickerColorVariant, PRMonogramColor;

__attribute__((visibility("hidden")))
@interface CNSharingProfileAvatarItemProviderConfiguration : NSObject
{
    PRMonogramColor *_monogramColor;
    CNPhotoPickerColorVariant *_animojiColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNPhotoPickerColorVariant *animojiColor; // @synthesize animojiColor=_animojiColor;
@property(retain, nonatomic) PRMonogramColor *monogramColor; // @synthesize monogramColor=_monogramColor;

@end
