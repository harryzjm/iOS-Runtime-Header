//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsFoundation/NSObject-Protocol.h>

@class NSString, Protocol;

@protocol NFValidationResolver <NSObject>
- (void)ensureProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (void)ensureProtocol:(Protocol *)arg1;
- (void)ensureClass:(Class)arg1 name:(NSString *)arg2;
- (void)ensureClass:(Class)arg1;
@end

