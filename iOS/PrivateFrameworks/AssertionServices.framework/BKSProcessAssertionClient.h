//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BKSProcessAssertionClient
{
}

- (void)assertionQueue_handleMessage:(id)arg1;
- (void)sendDestroyEvent:(id)arg1;
- (void)sendUpdateEvent:(id)arg1;
- (_Bool)sendCreateEvent:(id)arg1 error:(id *)arg2;
- (double)backgroundTimeRemaining:(int)arg1;
- (id)supportedAssertionType;

@end

