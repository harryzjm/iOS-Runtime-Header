//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/IKEntityProviding-Protocol.h>

@protocol IKEntityValueProviding, SKUIIndexBarEntryEntityValueProviding;

@protocol SKUIEntityProviding <IKEntityProviding>

@optional
- (id <IKEntityValueProviding>)sectionEntityValueProviderAtIndex:(long long)arg1;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (id <SKUIIndexBarEntryEntityValueProviding>)indexBarEntryEntityValueProviderAtIndex:(unsigned long long)arg1;
@end

