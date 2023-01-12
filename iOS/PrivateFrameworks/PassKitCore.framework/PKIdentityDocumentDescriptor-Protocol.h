//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, PKIdentityElement, PKIdentityIntentToStore;

@protocol PKIdentityDocumentDescriptor <NSObject>
@property(readonly, nonatomic) NSArray *elements;
- (void)addElements:(NSArray *)arg1 withIntentToStore:(PKIdentityIntentToStore *)arg2;
- (PKIdentityIntentToStore *)intentToStoreForElement:(PKIdentityElement *)arg1;
@end

