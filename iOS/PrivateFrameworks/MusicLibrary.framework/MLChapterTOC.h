//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLChapterTOC : NSObject
{
}

- (id)urlPropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)titlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)chapterIndexAtTimeLocationInMS:(unsigned int)arg1;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)countOfGroupsForProperty:(int)arg1;
- (_Bool)hasDataForProperty:(int)arg1;
- (unsigned int)countOfChapters;
- (struct ChapterData *)chapterDataRef;

@end
