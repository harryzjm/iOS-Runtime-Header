//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFRequestHandlingContextMutating-Protocol.h>

@class AFRequestHandlingContext, NSString;

@interface _AFRequestHandlingContextMutation : NSObject <AFRequestHandlingContextMutating>
{
    AFRequestHandlingContext *_baseModel;
    NSString *_requestID;
    NSString *_inputDeviceID;
    NSString *_inputAssistantID;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasRequestID:1;
        unsigned int hasInputDeviceID:1;
        unsigned int hasInputAssistantID:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setInputAssistantID:(id)arg1;
- (void)setInputDeviceID:(id)arg1;
- (void)setRequestID:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
