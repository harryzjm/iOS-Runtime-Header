//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDeleteSiriHistoryContextMutating-Protocol.h>

@class AFDeleteSiriHistoryContext, NSString;

@interface _AFDeleteSiriHistoryContextMutation : NSObject <AFDeleteSiriHistoryContextMutating>
{
    AFDeleteSiriHistoryContext *_baseModel;
    NSString *_successTitle;
    NSString *_successBody;
    NSString *_successButtonText;
    NSString *_errorTitle;
    NSString *_errorBody;
    NSString *_errorButtonText;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSuccessTitle:1;
        unsigned int hasSuccessBody:1;
        unsigned int hasSuccessButtonText:1;
        unsigned int hasErrorTitle:1;
        unsigned int hasErrorBody:1;
        unsigned int hasErrorButtonText:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setErrorButtonText:(id)arg1;
- (void)setErrorBody:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)setSuccessButtonText:(id)arg1;
- (void)setSuccessBody:(id)arg1;
- (void)setSuccessTitle:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
