//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKSecureElementPass.h>

@class NSSet;

@interface PKSecureElementPass (NanoPassKit)
- (unsigned long long)npkLinkedAccountFeatureIdentifier;
- (_Bool)npkProvidesLinkedAccountFeatureIdentifier;
- (_Bool)npkSupportUWBSecureRanging;
@property(readonly, nonatomic) NSSet *npkSubcredentials;
- (_Bool)npkExclusivelyTransactsOverNFC;
- (_Bool)npkExclusivelyTransactsOverBluetooth;
- (_Bool)npkSupportsNFC;
- (_Bool)npkSupportsBluetooth;
@end

