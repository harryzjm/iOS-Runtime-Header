//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSSecureCoding-Protocol.h>

@interface NSCTGlyphInfo <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (id)glyphName;
- (id)_baseString;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (unsigned long long)retainCount;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_cfTypeID;

@end

