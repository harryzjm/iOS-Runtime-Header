//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Security/SecuritydXPCCallbackProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface SecuritydXPCCallback : NSObject <SecuritydXPCCallbackProtocol>
{
    CDUnknownBlockType _callback;
}

@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)callCallback:(_Bool)arg1 error:(id)arg2;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

@end

