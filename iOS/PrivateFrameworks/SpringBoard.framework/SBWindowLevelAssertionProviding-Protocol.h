//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBWindowLevelAssertion, SBWindowScene;

@protocol SBWindowLevelAssertionProviding <NSObject>
- (SBWindowLevelAssertion *)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 windowScene:(SBWindowScene *)arg3 reason:(NSString *)arg4;
@end

