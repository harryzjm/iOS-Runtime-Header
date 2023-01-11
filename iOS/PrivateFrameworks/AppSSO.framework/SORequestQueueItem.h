//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SOAuthorizationRequestParameters;
@protocol SOServiceProtocol;

@interface SORequestQueueItem : NSObject
{
    id <SOServiceProtocol> _service;
    SOAuthorizationRequestParameters *_requestParameters;
    CDUnknownBlockType _completionBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) SOAuthorizationRequestParameters *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(readonly, nonatomic) id <SOServiceProtocol> service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)description;
- (id)initWithService:(id)arg1 requestParameters:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
