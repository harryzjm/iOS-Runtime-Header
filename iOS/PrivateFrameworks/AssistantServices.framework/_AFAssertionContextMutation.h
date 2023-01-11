//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAssertionContextMutating-Protocol.h>

@class AFAssertionContext, NSDictionary, NSString;

@interface _AFAssertionContextMutation : NSObject <AFAssertionContextMutating>
{
    AFAssertionContext *_baseModel;
    unsigned long long _timestamp;
    NSString *_reason;
    NSDictionary *_userInfo;
    AFAssertionContext *_parentContext;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimestamp:1;
        unsigned int hasReason:1;
        unsigned int hasUserInfo:1;
        unsigned int hasParentContext:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setParentContext:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
