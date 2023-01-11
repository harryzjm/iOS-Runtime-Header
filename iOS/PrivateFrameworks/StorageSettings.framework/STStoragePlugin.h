//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface STStoragePlugin : NSObject
{
    NSString *_identifier;
    NSArray *_tips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (long long)externDataSizeForApp:(id)arg1;
- (id)externDataSizeAppIdentifiers;
- (id)documentSpecifiersForApp:(id)arg1;
- (id)documentAppIdentifiers;
- (void)reloadTips;
- (void)notifyUsageChanged;

@end
