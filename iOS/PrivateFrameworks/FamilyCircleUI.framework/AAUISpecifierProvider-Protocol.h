//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class AAUIAccountManager, NSArray, NSDictionary;
@protocol AAUISpecifierProviderDelegate;

@protocol AAUISpecifierProvider <NSObject>
@property(copy, nonatomic) NSArray *specifiers;
@property(nonatomic) __weak id <AAUISpecifierProviderDelegate> delegate;
- (id)initWithAccountManager:(AAUIAccountManager *)arg1;

@optional
- (_Bool)handleURL:(NSDictionary *)arg1;
@end
