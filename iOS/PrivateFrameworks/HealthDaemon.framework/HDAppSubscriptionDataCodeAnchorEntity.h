//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDAppSubscriptionDataCodeAnchorEntity
{
}

+ (id)columnsDefinition;
+ (id)tableAliases;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)_predicateForDataCode:(long long)arg1;
+ (_Bool)_getAnchorsWithArray:(id)arg1 predicate:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)anchorForDataCode:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)setAnchor:(id)arg1 forDataCode:(long long)arg2 profile:(id)arg3 error:(id *)arg4;

@end
