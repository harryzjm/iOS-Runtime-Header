//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSObject-Protocol.h>

@class NSArray, NSTextRange;
@protocol NSTextLocation;

@protocol NSTextElementProvider <NSObject>
@property(readonly) NSTextRange *documentRange;
- (long long)offsetFromLocation:(id <NSTextLocation>)arg1 toLocation:(id <NSTextLocation>)arg2;
- (id <NSTextLocation>)locationFromLocation:(id <NSTextLocation>)arg1 offset:(long long)arg2;
- (_Bool)synchronizeToBackingStore:(void (^)(NSError *))arg1;
- (void)replaceCharactersInRange:(NSTextRange *)arg1 withTextElements:(NSArray *)arg2;
- (id <NSTextLocation>)enumerateTextElementsFromLocation:(id <NSTextLocation>)arg1 options:(long long)arg2 usingBlock:(void (^)(NSTextElement *, _Bool *))arg3;

@optional
- (NSTextRange *)adjustedRangeFromRange:(NSTextRange *)arg1 inEditingTextSelection:(_Bool)arg2;
@end
