//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPRemoteCommand, NSString;

@protocol MPRemoteCommandDelegate_Private <NSObject>
- (_Bool)remoteCommand:(MPRemoteCommand *)arg1 isEnabledForContentItemIdentifier:(NSString *)arg2;
- (_Bool)remoteCommand:(MPRemoteCommand *)arg1 isSupportedForContentItemIdentifier:(NSString *)arg2;
@end
