//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class BSServiceConnection, BSServiceConnectionListener;
@protocol BSServiceConnectionHost, BSXPCDecoding;

@protocol BSServiceConnectionListenerDelegate <NSObject>
- (void)listener:(BSServiceConnectionListener *)arg1 didReceiveConnection:(BSServiceConnection<BSServiceConnectionHost> *)arg2 withContext:(id <BSXPCDecoding>)arg3;
@end

