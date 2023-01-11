//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPLayoutArea, CPList, NSArray;

__attribute__((visibility("hidden")))
@interface CPListMaker : NSObject <CPDisposable>
{
    CPLayoutArea *area;
    NSArray *spacers;
    unsigned int textLineCount;
    id *textLines;
    CPList *list;
}

+ (void)makeListsInPage:(id)arg1;
+ (void)makeListsInChunk:(id)arg1;
+ (void)makeListsInLayoutArea:(id)arg1;
- (void)makeLists;
- (void)makeListsInColumn:(id)arg1;
- (_Bool)makeListFrom:(struct CPListInfo *)arg1;
- (void)makeListItemFrom:(struct CPListInfo *)arg1 stopAt:(unsigned int)arg2;
- (void)fetchTextLinesInColumn:(id)arg1;
- (void)fetchTextLine:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithLayoutArea:(id)arg1;

@end

