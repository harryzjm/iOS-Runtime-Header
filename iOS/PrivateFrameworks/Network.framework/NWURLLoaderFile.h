//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_io, OS_dispatch_queue, OS_nw_connection;

__attribute__((visibility("hidden")))
@interface NWURLLoaderFile : NSObject
{
    int _error;
    NSURL *_URL;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _fileSize;
    NSObject<OS_dispatch_io> *_io;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
- (void)writeData:(id)arg1 complete:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool allowsWrite;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readResponse:(CDUnknownBlockType)arg1;
- (void)updateClient:(id)arg1;
- (void)stop;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

