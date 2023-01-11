//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject
{
    NSMutableArray *_sectionQueueDescriptors;
    NSMutableDictionary *_remainingSectionsBySectionQueueDescriptors;
}

@property(retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors; // @synthesize remainingSectionsBySectionQueueDescriptors=_remainingSectionsBySectionQueueDescriptors;
@property(retain, nonatomic) NSMutableArray *sectionQueueDescriptors; // @synthesize sectionQueueDescriptors=_sectionQueueDescriptors;
- (void).cxx_destruct;
- (void)removeSectionDescriptors:(id)arg1;
- (id)sectionDescriptorsAtHeadsOfQueues;
- (id)initWithSectionQueueDescriptors:(id)arg1;
- (id)init;

@end

