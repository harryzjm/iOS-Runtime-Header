//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSString, _SFAuthenticationContext;
@protocol _SFAuthenticationCustomUIProgressObserver;

@protocol _SFAuthenticationClient <NSObject>
- (NSString *)authenticationMessageForContext:(_SFAuthenticationContext *)arg1;
- (id <_SFAuthenticationCustomUIProgressObserver>)authenticationCustomUIProgressObserverForContext:(_SFAuthenticationContext *)arg1;
@end

