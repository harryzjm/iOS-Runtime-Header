//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class WFContentCollection;

@interface WFImageRemoveBackgroundAction : WFAction
{
}

- (id)init;
- (void)runWithInput:(WFContentCollection *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;

@end

