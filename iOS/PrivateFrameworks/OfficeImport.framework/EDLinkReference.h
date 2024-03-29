//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDLinkReference : NSObject
{
    unsigned long long mLinkIndex;
    unsigned long long mFirstSheetIndex;
    unsigned long long mLastSheetIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (id)description;
- (_Bool)isWorkbookLevelReference;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToLinkReference:(id)arg1;
- (void)setLinkIndex:(unsigned long long)arg1;
- (unsigned long long)linkIndex;
- (void)setLastSheetIndex:(unsigned long long)arg1;
- (unsigned long long)lastSheetIndex;
- (void)setFirstSheetIndex:(unsigned long long)arg1;
- (unsigned long long)firstSheetIndex;
- (id)initWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (id)init;

@end

