//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HMAccessorySettings, HMMediaSession;
@protocol HMMediaObjectDelegate;

@protocol HMMediaObject <NSObject>
@property(readonly) HMAccessorySettings *settings;
@property(readonly, copy) HMMediaSession *mediaSession;
@property __weak id <HMMediaObjectDelegate> delegate;
@end

