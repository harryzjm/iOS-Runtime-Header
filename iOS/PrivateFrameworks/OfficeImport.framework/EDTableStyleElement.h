//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class EDCollection, EDDifferentialStyle, NSString;

__attribute__((visibility("hidden")))
@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying>
{
    EDCollection *mDifferentialStyles;
    int mType;
    unsigned int mBandSize;
    EDDifferentialStyle *mDifferentialStyle;
}

+ (id)tableStyleElementWithResources:(id)arg1;
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
- (void)dealloc;
- (id)initWithResources:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
