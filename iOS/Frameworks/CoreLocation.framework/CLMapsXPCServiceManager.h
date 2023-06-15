//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLMapsXPCServiceManager : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)clearMemoryAndExitHelperProcessCleanly;
- (void)collectMapDataOfType:(long long)arg1 aroundCoordinate:(struct CLLocationCoordinate2D)arg2 inRadius:(double)arg3 allowNetwork:(_Bool)arg4 WithReply:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (void)createConnection;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

