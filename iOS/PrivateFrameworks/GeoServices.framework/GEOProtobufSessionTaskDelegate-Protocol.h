//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOProtobufSession, GEOProtobufSessionTask;

@protocol GEOProtobufSessionTaskDelegate <NSObject>
- (void)protobufSession:(GEOProtobufSession *)arg1 didCompleteTask:(GEOProtobufSessionTask *)arg2;

@optional
- (void)protobufSession:(GEOProtobufSession *)arg1 willSendRequestForTask:(GEOProtobufSessionTask *)arg2 completionHandler:(void (^)(PBRequest *))arg3;
@end

