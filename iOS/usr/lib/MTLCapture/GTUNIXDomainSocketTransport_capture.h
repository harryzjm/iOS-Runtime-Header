//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSURL;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GTUNIXDomainSocketTransport_capture
{
    int _mode;
    NSObject<OS_dispatch_source> *_connSource;
}

- (void)_invalidate;
- (id)connect;
- (void)_connectClient:(id)arg1 future:(id)arg2;
- (void)_connectServer:(id)arg1 future:(id)arg2;
@property(retain, nonatomic) NSURL *url; // @dynamic url;
- (id)initWithMode:(int)arg1;

@end

