//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSUUID, TSCHReferenceLineNonStyle;

__attribute__((visibility("hidden")))
@interface TSCHReferenceLineNonStyleItem : NSObject
{
    TSCHReferenceLineNonStyle *mNonStyle;
    NSUUID *mUUID;
}

@property(retain, nonatomic) TSCHReferenceLineNonStyle *nonStyle; // @synthesize nonStyle=mNonStyle;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=mUUID;
- (void)saveToArchiver:(id)arg1 message:(struct ChartReferenceLineNonStyleItem *)arg2;
- (id)initFromUnarchiver:(id)arg1 message:(const struct ChartReferenceLineNonStyleItem *)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithNonStyle:(id)arg1 uuid:(id)arg2;

@end
