//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class MISSING_TYPE, WFContentCollection;

__attribute__((visibility("hidden")))
@interface _TtC9ActionKit13WeatherAction : WFAction
{
    MISSING_TYPE *service;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (void)runWithInput:(WFContentCollection *)arg1 completionHandler:(void (^)(NSError *))arg2;

@end

