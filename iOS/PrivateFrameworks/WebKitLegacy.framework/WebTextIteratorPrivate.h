//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebTextIteratorPrivate : NSObject
{
    struct unique_ptr<WebCore::TextIterator, std::default_delete<WebCore::TextIterator>> _textIterator;
    struct Vector<unsigned short, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _upconvertedText;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

