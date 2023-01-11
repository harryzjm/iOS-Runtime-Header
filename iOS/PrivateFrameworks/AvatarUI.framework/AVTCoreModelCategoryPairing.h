//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVTCoreModelCategoryPairing : NSObject
{
    long long _pairedCategory;
    NSString *_localizedPairedTitle;
    NSString *_localizedPairTitle;
    NSString *_localizedUnpairTitle;
}

@property(readonly, copy, nonatomic) NSString *localizedUnpairTitle; // @synthesize localizedUnpairTitle=_localizedUnpairTitle;
@property(readonly, copy, nonatomic) NSString *localizedPairTitle; // @synthesize localizedPairTitle=_localizedPairTitle;
@property(readonly, copy, nonatomic) NSString *localizedPairedTitle; // @synthesize localizedPairedTitle=_localizedPairedTitle;
@property(readonly, nonatomic) long long pairedCategory; // @synthesize pairedCategory=_pairedCategory;
- (void).cxx_destruct;
- (id)initWithPairedCategory:(long long)arg1 pairedTitle:(id)arg2 pairTitle:(id)arg3 unpairTitle:(id)arg4;

@end
