//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDSStyle;

@interface GQDSParentResolutionEntry : NSObject
{
    char *mParentIdentifier;
    GQDSStyle *mStyle;
}

- (const char *)parentIdentifier;
- (id)style;
- (void)dealloc;
- (id)initWithStyle:(id)arg1 parentIdentifier:(const char *)arg2;

@end

