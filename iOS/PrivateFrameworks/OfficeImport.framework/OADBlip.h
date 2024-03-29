//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADSubBlip;

__attribute__((visibility("hidden")))
@interface OADBlip : NSObject
{
    unsigned int mReferenceCount;
    OADSubBlip *mMainSubBlip;
    OADSubBlip *mAltSubBlip;
}

+ (id)pathExtensionForBlipType:(int)arg1;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned int *)referenceCount;
- (void)setAltSubBlip:(id)arg1;
- (id)altSubBlip;
- (void)setMainSubBlip:(id)arg1;
- (id)mainSubBlip;

@end

