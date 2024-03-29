//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection, EDDifferentialStyle, NSString;

__attribute__((visibility("hidden")))
@interface EDTableStyleElement : NSObject
{
    EDCollection *mDifferentialStyles;
    int mType;
    unsigned int mBandSize;
    EDDifferentialStyle *mDifferentialStyle;
}

+ (id)tableStyleElementWithResources:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setDifferentialStyleWithIndex:(unsigned long long)arg1;
- (void)setDifferentialStyle:(id)arg1;
- (id)differentialStyle;
- (void)setBandSize:(unsigned int)arg1;
- (unsigned int)bandSize;
- (void)setType:(int)arg1;
- (int)type;
- (long long)key;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResources:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

