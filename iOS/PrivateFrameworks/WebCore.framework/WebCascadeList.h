//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface WebCascadeList : NSArray
{
    struct WeakPtr<WebCore::FontCascade> _font;
    int _character;
    unsigned long long _count;
    struct Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow, 16> _fontDescriptors;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithFont:(const struct FontCascade *)arg1 character:(int)arg2;

@end

