//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKPigmentEditOptionConvertible-Protocol.h>

@class NSString;

@interface NTKCollieColorEditOption <NTKPigmentEditOptionConvertible>
{
}

+ (id)pigmentFaceDomain;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
- (id)pigmentEditOption;
- (id)_valueToFaceBundleStringDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
