//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPPointUnit;

__attribute__((visibility("hidden")))
@interface LPContactsBadgeStyle : NSObject
{
    _Bool _useShadow;
    LPPointUnit *_size;
    double _margin;
    double _iconOffset;
    long long _location;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useShadow; // @synthesize useShadow=_useShadow;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(nonatomic) double iconOffset; // @synthesize iconOffset=_iconOffset;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) LPPointUnit *size; // @synthesize size=_size;
- (id)initWithPlatform:(long long)arg1;

@end

