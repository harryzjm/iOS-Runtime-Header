//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSOperation, VSAccountChannels, VSOptional, VSPersistentStorage;

@interface VSAccountSaveOperation
{
    VSOptional *_result;
    NSArray *_unsavedAccounts;
    VSPersistentStorage *_storage;
    VSAccountChannels *_unsavedChannels;
    NSOperation *_currentOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain, nonatomic) VSAccountChannels *unsavedChannels; // @synthesize unsavedChannels=_unsavedChannels;
@property(retain, nonatomic) VSPersistentStorage *storage; // @synthesize storage=_storage;
@property(copy, nonatomic) NSArray *unsavedAccounts; // @synthesize unsavedAccounts=_unsavedAccounts;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void)cancel;
- (void)executionDidBegin;
- (void)_startAccountChannelsSaveOperation;
- (void)_startCredentialSaveOperation;
- (id)initWithUnsavedAccounts:(id)arg1 channels:(id)arg2 storage:(id)arg3;
- (id)init;

@end
