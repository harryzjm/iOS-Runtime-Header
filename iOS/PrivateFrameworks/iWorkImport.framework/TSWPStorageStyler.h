//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPStorageStyler : NSObject
{
    int _attributeArrayKind;
    TSWPStorage *_storage;
}

@property(nonatomic) int attributeArrayKind; // @synthesize attributeArrayKind=_attributeArrayKind;
@property(retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)performStylingInRange:(struct _NSRange)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (void)applyStyle:(id)arg1 range:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)replacementStyleForStyle:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithStorage:(id)arg1 attributeArrayKind:(int)arg2;

@end

