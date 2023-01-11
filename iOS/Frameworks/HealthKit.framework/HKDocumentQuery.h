//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKDocumentQueryClientInterface-Protocol.h>

@class NSArray, NSString;

@interface HKDocumentQuery <HKDocumentQueryClientInterface>
{
    _Bool _includeDocumentData;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
    CDUnknownBlockType _resultsHandler;
}

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property(readonly) _Bool includeDocumentData; // @synthesize includeDocumentData=_includeDocumentData;
@property(readonly, copy) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly) unsigned long long limit; // @synthesize limit=_limit;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverDocument:(id)arg1 query:(id)arg2;
- (id)initWithDocumentType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 includeDocumentData:(_Bool)arg5 resultsHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
