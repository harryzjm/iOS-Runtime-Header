//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOProtobufSession;

__attribute__((visibility("hidden")))
@interface GEOServiceSession : NSObject
{
    GEOProtobufSession *_protobufSession;
    unsigned long long _urlType;
}

+ (id)sharedDispatcherServiceSession;
@property(readonly, nonatomic) unsigned long long urlType; // @synthesize urlType=_urlType;
@property(readonly, nonatomic) GEOProtobufSession *protobufSession; // @synthesize protobufSession=_protobufSession;
- (void).cxx_destruct;
- (id)taskWithKind:(int)arg1 request:(id)arg2 traits:(id)arg3 timeout:(double)arg4 auditToken:(id)arg5 queue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (long long)_experimentType;
- (id)serviceTypeNumber;
- (id)initWithProtobufSession:(id)arg1 urlType:(unsigned long long)arg2;
- (id)init;
- (int)experimentDispatcherRequestTypeForRequest:(id)arg1;
@property(readonly, nonatomic) long long experimentType;
@property(readonly, nonatomic) int serviceType;
- (id)URLForRequest:(id)arg1;

@end
