//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPXDomainContext, NSDictionary;

__attribute__((visibility("hidden")))
@interface FPXServiceEndpointFactory : NSObject
{
    NSDictionary *_serviceSources;
    FPXDomainContext *_domainContext;
}

- (void).cxx_destruct;
- (void)getListenerEndpointForServiceName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithServiceSources:(id)arg1 domainContext:(id)arg2;

@end

