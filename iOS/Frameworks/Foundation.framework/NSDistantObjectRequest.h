//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConnection, NSInvocation;

@interface NSDistantObjectRequest : NSObject
{
}

- (void)replyWithException:(id)arg1;
@property(readonly, retain) id conversation;
@property(readonly, retain) NSConnection *connection;
@property(readonly, retain) NSInvocation *invocation;

@end

