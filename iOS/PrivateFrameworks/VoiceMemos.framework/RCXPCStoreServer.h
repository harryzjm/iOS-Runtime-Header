//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSXPCStoreServer.h>

__attribute__((visibility("hidden")))
@interface RCXPCStoreServer : NSXPCStoreServer
{
    CDUnknownBlockType _shouldAcceptDatabaseConnection;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType shouldAcceptDatabaseConnection; // @synthesize shouldAcceptDatabaseConnection=_shouldAcceptDatabaseConnection;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
