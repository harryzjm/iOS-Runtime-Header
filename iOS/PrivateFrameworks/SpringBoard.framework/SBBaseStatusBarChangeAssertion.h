//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBBaseStatusBarChangeAssertion : NSObject
{
    NSString *_reason;
}

@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)invalidate;
- (id)description;
- (id)_initWithReason:(id)arg1;
- (id)init;

@end
