//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class NSData, NSString;

@protocol TSPPassphraseConsumer <NSObject>

@optional
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSData *keychainGenericItem;
@property(readonly, nonatomic) NSString *passphraseHint;
@end

