//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class NSArray, WFContentCollection;

@interface WFLockScreenAction : WFAction
{
}

- (id)init;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
@property(nonatomic, readonly) NSArray *disabledOnPlatforms;
- (void)runWithInput:(WFContentCollection *)arg1 completionHandler:(void (^)(NSError *))arg2;

@end

