//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPList;

__attribute__((visibility("hidden")))
@interface CPParagraphListItem : NSObject <CPDisposable>
{
    CPList *list;
    int number;
    struct __CFArray *paragraphs;
}

@property(nonatomic) int number; // @synthesize number;
@property(retain, nonatomic) CPList *list; // @synthesize list;
- (void)addParagraph:(id)arg1;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (unsigned int)paragraphCount;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)init;

@end

