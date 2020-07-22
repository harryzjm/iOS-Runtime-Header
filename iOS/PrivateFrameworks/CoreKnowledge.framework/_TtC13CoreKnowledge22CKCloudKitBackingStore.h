//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _TtC13CoreKnowledge22CKCloudKitBackingStore
{
}

+ (id)mainInstance;
- (id)initWithName:(id)arg1;
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dropLinksWithBetween:(id)arg1 and:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dropLinksWithLabel:(id)arg1 from:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dropLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeAllValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeValuesMatching:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeValuesForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeValueForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 toValue:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)decreaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)increaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)writeBatch;
- (void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)triplesComponentsMatching:(id)arg1 error:(id *)arg2;
@property(nonatomic, copy) NSString *name;

@end
