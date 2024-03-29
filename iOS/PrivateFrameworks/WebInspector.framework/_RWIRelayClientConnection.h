//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _RWIRelayClientConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _RWIRelayClientConnection : NSObject
{
    _Bool _closed;
    _Bool _sleeping;
    id <_RWIRelayClientConnectionDelegate> _delegate;
    NSString *_tag;
}

@property(nonatomic) _Bool sleeping; // @synthesize sleeping=_sleeping;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) id <_RWIRelayClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dispatchRelayMessage:(id)arg1;
- (void)closeInternal;
- (void)sendMessage:(id)arg1;
- (void)closeFromConnection;
- (void)close;
- (void)_closeAndNotifyDelegate:(_Bool)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

