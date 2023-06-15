//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSAttributedStringReplacement : NSObject
{
    long long _index;
    id _argument;
    long long _replacementKind;
    struct _NSRange _specifierRangeInFormatString;
    struct _NSRange _replacementRangeInResult;
}

+ (id)_replacementsFromMetadataArray:(id)arg1;
@property(readonly) long long replacementKind; // @synthesize replacementKind=_replacementKind;
@property(readonly) id argument; // @synthesize argument=_argument;
@property(readonly) struct _NSRange replacementRangeInResult; // @synthesize replacementRangeInResult=_replacementRangeInResult;
@property(readonly) struct _NSRange specifierRangeInFormatString; // @synthesize specifierRangeInFormatString=_specifierRangeInFormatString;
@property(readonly) long long index; // @synthesize index=_index;
- (void)dealloc;
- (id)initWithIndex:(long long)arg1 specifierRangeInFormatString:(struct _NSRange)arg2 replacementRangeInResult:(struct _NSRange)arg3 replacementKind:(long long)arg4 argument:(id)arg5;
- (id)_initWithMetadata:(id)arg1;

@end

