//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCNetworkAgent : NSObject
{
    int _assertionRefCount;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
+ (id)sharedInstance;
- (id)copyAgentData;
- (void)removeAssertion;
- (void)addAssertion;
- (void)dealloc;
- (id)init;

@end
