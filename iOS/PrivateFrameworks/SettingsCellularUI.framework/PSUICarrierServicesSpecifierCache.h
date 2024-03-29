//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PSUICarrierServicesSpecifierCache : NSObject
{
    CoreTelephonyClient *_client;
    NSMutableDictionary *_specifiersDict;
    NSMutableDictionary *_mmsInfoSpecifiersDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mmsInfoSpecifiersDict; // @synthesize mmsInfoSpecifiersDict=_mmsInfoSpecifiersDict;
@property(retain, nonatomic) NSMutableDictionary *specifiersDict; // @synthesize specifiersDict=_specifiersDict;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (id)getLogger;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)carrierBundleChange:(id)arg1;
- (void)openURLWithSpecifier:(id)arg1;
- (void)dialCarrierServiceNumber:(id)arg1;
- (id)readPreference:(id)arg1;
- (id)specifiers:(id)arg1;
- (void)fetchSpecifiers;
- (id)newMMSInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (id)mmsInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (void)clearCache;
- (void)dealloc;
- (id)init;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

