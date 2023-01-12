//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CorePommes/CPXPCConnection-Protocol.h>

@class NSString, NSXPCConnection;

@interface CPXPCConnection : NSObject <CPXPCConnection>
{
    _Bool _invalidated;
    NSXPCConnection *_searchConnection;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *searchConnection; // @synthesize searchConnection=_searchConnection;
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
- (id)searchServiceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
