//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface BSActionListenerToken : NSObject
{
    unsigned int _port;
    NSObject<OS_xpc_object> *_endpoint;
}

- (void)dealloc;

@end
