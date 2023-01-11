//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCFeedViewport : NSObject
{
    NSString *_identifier;
    NSArray *_groupElements;
    NSArray *_internalElements;
    NSArray *_externalElements;
}

+ (id)freshlyUnarchivedViewportFromViewport:(id)arg1;
+ (id)viewportFromData:(id)arg1;
+ (id)dataFromViewport:(id)arg1 prune:(_Bool)arg2 preserveBookmark:(id)arg3;
+ (id)viewportFromPBViewport:(id)arg1;
+ (id)pbViewportFromViewport:(id)arg1 prune:(_Bool)arg2 preserveBookmark:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *externalElements; // @synthesize externalElements=_externalElements;
@property(readonly, copy, nonatomic) NSArray *internalElements; // @synthesize internalElements=_internalElements;
@property(readonly, copy, nonatomic) NSArray *groupElements; // @synthesize groupElements=_groupElements;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)enumerateInternalHeadlinesFromBookmark:(id)arg1 toBookmark:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)internalIndexPathForBookmark:(id)arg1;
- (id)externalIndexPathForBookmark:(id)arg1;
- (id)deflatedCopy;
- (id)archiveWithPruning:(_Bool)arg1 preserveBookmark:(id)arg2;
- (unsigned long long)numberOfHeadlinesConcealedByGap:(id)arg1;
- (id)indexPathForHeadlineReferencedByBookmark:(id)arg1 error:(id *)arg2;
- (id)bookmarkForLastHeadline;
- (id)bookmarkForFirstHeadline;
- (id)bookmarkForGroup:(id)arg1 headline:(id)arg2;
@property(readonly, nonatomic) double ageOfTopmostGroup;
@property(readonly, copy, nonatomic) NSArray *headlines;
- (id)init;
- (id)initWithArchive:(id)arg1;
- (id)initWithIdentifier:(id)arg1 internalElements:(id)arg2 externalElements:(id)arg3;
- (id)initWithIdentifier:(id)arg1 elements:(id)arg2;

@end
