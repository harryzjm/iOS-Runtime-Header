//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputContextManagerInternal;

@interface AVOutputContextManager : NSObject
{
    AVOutputContextManagerInternal *_ivars;
}

+ (id)outputContextManagerForAllOutputContexts;
- (void)outputContextManagerImplDidExpireWithReplacementImpl:(id)arg1;
- (void)outputContextManagerImpl:(id)arg1 observedFailureToConnectToOutputDevice:(id)arg2 reason:(id)arg3;
- (void)dealloc;
- (id)initWithOutputContextManagerImpl:(id)arg1;

@end
