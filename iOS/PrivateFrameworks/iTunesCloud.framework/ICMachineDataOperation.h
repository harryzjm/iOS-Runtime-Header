//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICStoreRequestContext, NSData;

@interface ICMachineDataOperation
{
    NSData *_data;
    ICStoreRequestContext *_requestContext;
    long long _protocolVersion;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end

