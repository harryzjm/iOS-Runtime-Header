//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSListItemSection, NSArray;
@protocol CSListItemManaging;

@protocol CSListItemProviding <NSObject>
+ (CSListItemSection *)section;
@property(readonly, nonatomic) unsigned long long itemCount;
@property(retain, nonatomic) id <CSListItemManaging> itemManager;

@optional
@property(nonatomic) _Bool listHasAdditionalContent;
- (void)handleRemovedItems:(NSArray *)arg1;
@end

