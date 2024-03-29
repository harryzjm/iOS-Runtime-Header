//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface NSURLSessionTaskHTTPAuthenticator : NSObject
{
    NSSet *_statusCodes;
}

+ (id)sessionTaskHTTPAuthenticatorWithContext:(id)arg1 statusCodes:(id)arg2;
@property(copy) NSSet *statusCodes; // @synthesize statusCodes=_statusCodes;
- (void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithStatusCodes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

