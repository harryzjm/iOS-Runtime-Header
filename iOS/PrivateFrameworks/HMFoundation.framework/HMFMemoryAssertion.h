//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_os_transaction;

@interface HMFMemoryAssertion
{
    NSObject<OS_os_transaction> *_internal;
}

@property(retain, nonatomic) NSObject<OS_os_transaction> *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (void)mark;
- (void)invalidate;
- (id)initWithName:(id)arg1;

@end

