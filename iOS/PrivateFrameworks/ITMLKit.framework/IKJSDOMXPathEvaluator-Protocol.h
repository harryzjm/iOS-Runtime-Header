//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMNode, IKDOMXPathExpression, JSValue, NSString;

@protocol IKJSDOMXPathEvaluator <JSExport>
- (id)evaluate:(NSString *)arg1:(IKDOMNode *)arg2:(JSValue *)arg3:(long long)arg4:(id)arg5;
- (IKDOMXPathExpression *)createExpression:(NSString *)arg1:(JSValue *)arg2;
@end

