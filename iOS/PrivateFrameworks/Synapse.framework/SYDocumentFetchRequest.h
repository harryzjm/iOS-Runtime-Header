//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SYDocumentFetchRequest : NSObject
{
}

+ (id)_itemIdFromSearchableItem:(id)arg1;
+ (_Bool)_isSearchableItemValid:(id)arg1 loggableErrorDescription:(id *)arg2;
+ (id)_buildResultWithMatches:(id)arg1;
+ (void)_fetchDocumentsWithReason:(id)arg1 queryString:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)fetchDocumentsWithIndexIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchAllDocumentsMatchingAnyIndexIdWithCompletion:(CDUnknownBlockType)arg1;

@end

