//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMStyle : NSObject
{
    NSMutableDictionary *properties;
    NSMutableString *mStyleString;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendDefaultBorderStyle;
- (void)appendSizeInfoFromRect:(struct CGRect)arg1;
- (void)appendOriginInfoFromPoint:(struct CGPoint)arg1;
- (void)appendPositionInfoFromRect:(struct CGRect)arg1;
- (void)appendPropertyString:(id)arg1;
- (void)appendPropertyForName:(id)arg1 color:(id)arg2;
- (void)appendPropertyForName:(id)arg1 length:(double)arg2 unit:(int)arg3;
- (void)appendPropertyForName:(id)arg1 floatValue:(float)arg2;
- (void)appendPropertyForName:(id)arg1 intValue:(int)arg2;
- (void)appendPropertyForName:(id)arg1 stringValue:(id)arg2;
- (void)appendPropertyForName:(id)arg1 stringWithColons:(id)arg2;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 lineHeight:(float)arg3 unit:(int)arg4;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 unit:(int)arg3;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2;
- (id)cacheFriendlyCSSStyleString;
- (id)cssStyleString;
- (void)addPropertiesToCSSStyleString:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)propertyForName:(id)arg1;
- (void)addProperty:(id)arg1 forKey:(id)arg2;
- (id)properties;
- (id)initWithStyle:(id)arg1;
- (id)init;

@end

