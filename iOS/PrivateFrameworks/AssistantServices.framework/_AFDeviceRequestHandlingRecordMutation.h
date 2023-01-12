//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDeviceRequestHandlingRecordMutating-Protocol.h>

@class AFDeviceRequestHandlingRecord, NSString;

@interface _AFDeviceRequestHandlingRecordMutation : NSObject <AFDeviceRequestHandlingRecordMutating>
{
    AFDeviceRequestHandlingRecord *_baseModel;
    NSString *_requestID;
    unsigned long long _deviceRoles;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasRequestID:1;
        unsigned int hasDeviceRoles:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setDeviceRoles:(unsigned long long)arg1;
- (void)setRequestID:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
