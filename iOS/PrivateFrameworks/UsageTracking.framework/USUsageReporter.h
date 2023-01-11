//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface USUsageReporter : NSObject
{
    NSXPCConnection *_xpcConnection;
}

@property(readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getLocalDeviceIdentifierAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

