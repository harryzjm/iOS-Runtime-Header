//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SocialLayer/NSObject-Protocol.h>

@class NSArray, NSData, NSString;

@protocol SLDCollaborationNoticeServiceProtocol <NSObject>
- (void)sendClearNoticesFor:(NSString *)arg1 forAttributionIdentifiers:(NSArray *)arg2 reply:(void (^)(_Bool))arg3;
- (void)sendHighlightEventData:(NSData *)arg1 eventType:(long long)arg2 forAttributionIdentifiers:(NSArray *)arg3 reply:(void (^)(_Bool))arg4;
@end

