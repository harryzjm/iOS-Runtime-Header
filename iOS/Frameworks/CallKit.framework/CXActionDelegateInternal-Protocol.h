//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSObject-Protocol.h>

@class CXAction;
@protocol CXAbstractProviderHostProtocol;

@protocol CXActionDelegateInternal <NSObject>
- (id <CXAbstractProviderHostProtocol>)hostProtocolDelegate;
- (void)performAction:(CXAction *)arg1;
@end

