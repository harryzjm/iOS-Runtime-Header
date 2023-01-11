//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface WLKTransactionScope : NSObject
{
    NSObject<OS_os_transaction> *_transaction;
    NSString *_identifier;
    double _delay;
}

- (void).cxx_destruct;
@property(readonly) double delay; // @synthesize delay=_delay;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 delay:(double)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end
