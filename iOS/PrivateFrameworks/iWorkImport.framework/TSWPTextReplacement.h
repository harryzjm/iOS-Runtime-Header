//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPReplaceAction-Protocol.h>

@class NSString, TSWPSelection;

__attribute__((visibility("hidden")))
@interface TSWPTextReplacement : NSObject <TSWPReplaceAction>
{
    TSWPSelection *_selection;
    NSString *_string;
}

- (void).cxx_destruct;
- (struct _NSRange)insertedRange;
- (long long)delta;
- (unsigned long long)targetCharIndex;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 actionBuilder:(struct TSWPStorageActionBuilder *)arg3 withFlags:(unsigned int)arg4 replaceBlock:(CDUnknownBlockType)arg5;
- (id)initWithSelection:(id)arg1 string:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

