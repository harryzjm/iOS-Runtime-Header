//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CARLayerPropertyMarshal : NSObject
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_handleConnectionReset;
- (void)_setupConnection;
- (void)invalidate;
- (void)sendLayerProperties:(id)arg1;
- (id)init;

@end
