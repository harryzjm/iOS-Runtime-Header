//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject
{
    _Bool _shouldForceApplePay;
    _Bool _shouldForcePeerPayment;
    NSMutableArray *_completionHandlers;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldForcePeerPayment; // @synthesize shouldForcePeerPayment=_shouldForcePeerPayment;
@property(nonatomic) _Bool shouldForceApplePay; // @synthesize shouldForceApplePay=_shouldForceApplePay;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
- (id)init;

@end
