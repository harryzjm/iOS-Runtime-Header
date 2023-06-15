//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNSharedProfileStateOracle;

__attribute__((visibility("hidden")))
@interface CNCardSharedProfileGroupItem : CNPropertyGroupItem
{
    CNSharedProfileStateOracle *_sharedProfileStateOracle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle; // @synthesize sharedProfileStateOracle=_sharedProfileStateOracle;
- (long long)sharedPhotoDisplayPreference;
- (long long)sharedPhotoDisplayPreferenceForValue:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (id)displayLabel;

@end

