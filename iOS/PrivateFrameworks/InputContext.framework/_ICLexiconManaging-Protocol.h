//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@protocol _ICLexiconManaging
- (void)hibernate;
- (void)warmUp;
- (void)unloadLexicons;
- (NSArray *)loadLexiconsUsingFilter:(NSString * (^)(NSString *))arg1;
- (NSArray *)loadLexicons:(NSString * (^)(NSString *))arg1;
- (void)removeContactObserver:(void (^)(struct NSDictionary *))arg1;
- (void (^)(struct NSDictionary *))addContactObserver:(void (^)(struct NSDictionary *))arg1;
@end

