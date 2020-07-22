//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet;

@interface CoreDAVPrincipalPropertySearchTask
{
    NSSet *_searchItems;
    _Bool _applyToPrincipalCollectionSet;
    NSDictionary *_extraAttributes;
}

@property(nonatomic) _Bool applyToPrincipalCollectionSet; // @synthesize applyToPrincipalCollectionSet=_applyToPrincipalCollectionSet;
@property(retain, nonatomic) NSDictionary *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
@property(retain, nonatomic) NSSet *searchItems; // @synthesize searchItems=_searchItems;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(_Bool)arg4 extraAttributes:(id)arg5;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;

@end

