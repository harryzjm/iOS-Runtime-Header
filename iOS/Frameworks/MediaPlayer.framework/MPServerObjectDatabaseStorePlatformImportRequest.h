//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPServerObjectDatabaseStorePlatformImportRequest
{
}

+ (id)_relationshipKeyForObject:(id)arg1;
+ (id)_childKeyForParentType:(id)arg1 type:(id)arg2;
+ (id)_unsupportedStorePlatformKinds;
+ (id)_unsupportedParentChildRelationships;
- (_Bool)performWithDatabaseOperations:(id)arg1 augmentingPayload:(id *)arg2 error:(id *)arg3;
- (id)initWithPayload:(id)arg1;

@end
