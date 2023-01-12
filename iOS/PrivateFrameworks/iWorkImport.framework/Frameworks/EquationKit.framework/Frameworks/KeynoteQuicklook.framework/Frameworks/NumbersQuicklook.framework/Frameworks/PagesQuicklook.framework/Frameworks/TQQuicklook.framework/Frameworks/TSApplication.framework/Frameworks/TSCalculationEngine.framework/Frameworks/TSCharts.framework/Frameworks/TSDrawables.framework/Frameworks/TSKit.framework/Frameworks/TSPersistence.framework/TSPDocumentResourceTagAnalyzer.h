//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface TSPDocumentResourceTagAnalyzer : NSObject
{
    NSMutableDictionary *_tagsToDocumentResourceInfosDictionary;
    NSMutableSet *_documentResourceInfos;
    NSMutableSet *_untaggedDocumentResourceInfos;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSSet *untaggedDocumentResourceInfos;
@property(readonly, copy, nonatomic) NSSet *allDocumentResourceInfos;
- (id)minimumTagsWithPreferredTags:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *allTags;
- (void)addDocumentResourceInfo:(id)arg1;
- (id)description;

@end

