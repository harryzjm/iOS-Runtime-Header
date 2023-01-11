//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDSStyle, GQDWPLayoutStorage;

__attribute__((visibility("hidden")))
@interface GQDWPLayoutFrame : NSObject
{
    char *mStyleRef;
    GQDSStyle *mStyle;
    GQDWPLayoutStorage *mStorage;
    unsigned int mTextScale;
}

- (_Bool)isBlank;
- (unsigned int)textScale;
- (id)storage;
- (id)layoutStyle;
- (void)dealloc;
- (void)resolveStyleRef;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

