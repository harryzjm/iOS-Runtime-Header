//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol WBSTabItemSearchSupport <NSObject>
@property(nonatomic) _Bool matchedLastSearch;
@property(copy, nonatomic) NSString *lastSearchTerm;
@property(copy, nonatomic) NSArray *URLStringComponents;
@property(copy, nonatomic) NSString *URLStringForLastSearch;
@property(readonly, nonatomic) NSString *URLString;
@property(copy, nonatomic) NSArray *titleWords;
@property(copy, nonatomic) NSString *titleForLastSearch;
@property(readonly, copy, nonatomic) NSString *title;
@end

