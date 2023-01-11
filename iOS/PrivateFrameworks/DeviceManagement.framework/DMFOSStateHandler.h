//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface DMFOSStateHandler : NSObject
{
    CDUnknownBlockType _block;
    NSString *_name;
    unsigned long long _handle;
    NSObject<OS_os_transaction> *_transaction;
}

@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) unsigned long long handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)dealloc;
- (struct os_state_data_s *)_serializeState;
- (id)initWithQueue:(id)arg1 name:(id)arg2 stateHandlerBlock:(CDUnknownBlockType)arg3;

@end

