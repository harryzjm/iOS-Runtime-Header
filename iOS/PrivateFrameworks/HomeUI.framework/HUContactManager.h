//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNMonogrammer, NSDictionary;

@interface HUContactManager : NSObject
{
    NSDictionary *_cachedContactByEmails;
    CNContactStore *_contactStore;
    CNMonogrammer *_monogrammer;
    double _monogramDiameter;
}

+ (id)sharedManager;
@property(nonatomic) double monogramDiameter; // @synthesize monogramDiameter=_monogramDiameter;
@property(retain, nonatomic) CNMonogrammer *monogrammer; // @synthesize monogrammer=_monogrammer;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(copy, nonatomic) NSDictionary *cachedContactByEmails; // @synthesize cachedContactByEmails=_cachedContactByEmails;
- (void).cxx_destruct;
- (id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2;
- (id)contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2;
- (void)contactStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

