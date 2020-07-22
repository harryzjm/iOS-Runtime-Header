//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>

@class NSMutableDictionary;

@interface RadioPlaybackTimeoutInfo : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_playbackTimeoutIdentifierToTimeoutNumber;
}

- (void).cxx_destruct;
- (id)_playbackTimeoutIdentifierForBase:(id)arg1 playbackType:(long long)arg2;
- (double)unlockedPlaybackTimeoutForPlaybackType:(long long)arg1;
- (double)pausedPlaybackTimeoutForPlaybackType:(long long)arg1;
- (double)lockedPlaybackTimeoutForPlaybackType:(long long)arg1;
- (double)dockedPlaybackTimeoutForPlaybackType:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

