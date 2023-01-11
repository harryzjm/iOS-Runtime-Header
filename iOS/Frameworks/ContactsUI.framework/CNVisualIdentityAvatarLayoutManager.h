//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNVisualIdentityAvatarLayoutManager : NSObject
{
    long long _maxAvatarCount;
    NSArray *_avatarLayerItems;
    NSArray *_avatarViewAdHocLayoutConfiguration;
    NSArray *_avatarViewLayoutConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *avatarViewLayoutConfiguration; // @synthesize avatarViewLayoutConfiguration=_avatarViewLayoutConfiguration;
@property(retain, nonatomic) NSArray *avatarViewAdHocLayoutConfiguration; // @synthesize avatarViewAdHocLayoutConfiguration=_avatarViewAdHocLayoutConfiguration;
@property(retain, nonatomic) NSArray *avatarLayerItems; // @synthesize avatarLayerItems=_avatarLayerItems;
@property(readonly, nonatomic) long long maxAvatarCount; // @synthesize maxAvatarCount=_maxAvatarCount;
- (id)layoutConfigurationForIndex:(long long)arg1 inItemCount:(long long)arg2 withLayoutType:(unsigned long long)arg3;
- (struct CGRect)avatarFrameForFocusedAvatarInView:(id)arg1;
- (void)updateAvatarLayersWithPrimaryAvatarForItemCount:(long long)arg1 inView:(id)arg2;
- (void)updateLayer:(id)arg1 forItemCount:(long long)arg2 atIndex:(long long)arg3 inView:(id)arg4 withLayoutType:(unsigned long long)arg5;
- (void)updateAvatarLayersForItemCount:(long long)arg1 inView:(id)arg2 withLayoutType:(unsigned long long)arg3;
- (void)updateAvatarLayersForItemCount:(long long)arg1 inView:(id)arg2;
- (id)init;

@end
