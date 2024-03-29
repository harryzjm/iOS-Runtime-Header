//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TSDHint;

@interface TSWPTOCLayoutHint : NSObject
{
    struct _NSRange _charRange;
}

+ (Class)archivedHintClass;
@property(readonly, nonatomic) struct _NSRange charRange; // @synthesize charRange=_charRange;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) _Bool isFirstHint;
@property(readonly, nonatomic) id <TSDHint> lastChildHint;
@property(readonly, nonatomic) id <TSDHint> firstChildHint;
- (_Bool)overlapsWithSelectionPath:(id)arg1;
- (id)copyForArchiving;
- (id)init;
- (id)initWithRange:(struct _NSRange)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGSize effectiveSize;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize maximumSize;
@property(readonly) Class superclass;

@end

