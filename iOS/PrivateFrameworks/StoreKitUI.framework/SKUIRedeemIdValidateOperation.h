//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdValidateOperation : ISOperation
{
    CDUnknownBlockType _resultBlock;
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)_logResultsForSuccess:(_Bool)arg1 failureReason:(id)arg2 failureMessage:(id)arg3 error:(id)arg4;
- (id)_subOperation;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)_handleFailure:(id)arg1 serverDialogDictionary:(id)arg2;
- (void)main;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

