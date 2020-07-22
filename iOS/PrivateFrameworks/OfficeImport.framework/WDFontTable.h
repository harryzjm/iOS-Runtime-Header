//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject
{
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)description;
- (id)fontAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfFont:(id)arg1;
- (id)fonts;
- (id)createFontWithName:(id)arg1;
- (id)fontWithName:(id)arg1 create:(_Bool)arg2;
- (id)fontWithName:(id)arg1;
- (void)clear;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;

@end
