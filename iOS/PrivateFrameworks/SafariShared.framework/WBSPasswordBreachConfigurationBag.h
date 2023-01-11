//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSRemotePlistSnapshot-Protocol.h>

@class NSDictionary, NSString;

@interface WBSPasswordBreachConfigurationBag : NSObject <WBSRemotePlistSnapshot>
{
    NSDictionary *_bag;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)plistDataWithFormat:(unsigned long long)arg1;
- (id)firstConfigurationForSupportedProtocolVersion:(unsigned long long)arg1 rampIdentifier:(unsigned long long)arg2 allowValuesForTesting:(_Bool)arg3;
- (id)initWithBagDictionary:(id)arg1;
- (id)initWithPlistData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
