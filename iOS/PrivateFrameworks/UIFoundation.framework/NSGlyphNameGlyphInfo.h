//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSGlyphNameGlyphInfo <NSSecureCoding>
{
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)glyphName;
- (void)dealloc;
- (id)initWithGlyphName:(id)arg1 glyph:(unsigned int)arg2 forFont:(id)arg3 baseString:(id)arg4;

@end
