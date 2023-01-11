//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CPAnalyticsKnowledgeStoreDatasetSample : NSObject
{
    NSString *_identifier;
    NSDate *_date;
    NSString *_subset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *subset; // @synthesize subset=_subset;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)metadata;
- (id)initWithIdentifier:(id)arg1 andDate:(id)arg2 forSubset:(id)arg3;

@end
